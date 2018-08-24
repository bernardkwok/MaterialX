#ifndef MATERIALX_LIGHTCOMPOUNDGLSL_H
#define MATERIALX_LIGHTCOMPOUNDGLSL_H

#include <MaterialXShaderGen/ShaderGenerators/Common/Compound.h>
#include <MaterialXShaderGen/Shader.h>

namespace MaterialX
{

/// Implementation of 'light' node for GLSL
class LightCompoundGlsl : public Compound
{
public:
    static SgImplementationPtr create();

    const string& getLanguage() const override;
    const string& getTarget() const override;

    void initialize(ElementPtr implementation, ShaderGenerator& shadergen) override;

    void createVariables(const SgNode& node, ShaderGenerator& shadergen, Shader& shader) override;

    void emitFunctionDefinition(const SgNode& node, ShaderGenerator& shadergen, Shader& shader) override;

    void emitFunctionCall(const SgNode& node, const SgNodeContext& context, ShaderGenerator& shadergen, Shader& shader) override;

protected:
    vector<Shader::Variable> _lightUniforms;
};

} // namespace MaterialX

#endif