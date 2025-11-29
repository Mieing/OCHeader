@protocol MAParticleVelocityGenerate, MAParticleRotationGenerate, MAParticleSizeGenerate, MAParticleColorGenerate;

@interface MAParticleOverLifeModuleOC : NSObject {
    void *_particleOverLife;
    id<MAParticleVelocityGenerate> _particleVelocityGenerate;
    id<MAParticleRotationGenerate> _particleRotationGenerate;
    id<MAParticleSizeGenerate> _particleSizeGenerate;
    id<MAParticleColorGenerate> _particleColorGenerate;
    struct VelocityGenerateProxy { void /* function */ **x0; id x1; } *_internalVelocityGenerate;
    struct ColorGenerateProxy { void /* function */ **x0; id x1; } *_internalColorGenerate;
    struct RotationGenerateProxy { void /* function */ **x0; id x1; } *_internalRotationGenerate;
    struct SizeGenerateProxy { void /* function */ **x0; int x1; id x2; } *_internalSizeGenerate;
}

- (void *)getParticleOverLife;
- (void)setVelocityOverLife:(id)a0;
- (void)setRotationOverLife:(id)a0;
- (void)setSizeOverLife:(id)a0;
- (void)setColorOverLife:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
