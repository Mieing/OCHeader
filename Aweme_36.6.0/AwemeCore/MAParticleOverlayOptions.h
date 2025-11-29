@class UIImage, MAParticleEmissionModuleOC, MAParticleOverLifeModuleOC;
@protocol MAParticleColorGenerate, MAParticleVelocityGenerate, MAParticleShapeModule;

@interface MAParticleOverlayOptions : NSObject {
    struct VelocityGenerateProxy { void /* function */ **x0; id x1; } *_internalVelocityGenerate;
    struct ColorGenerateProxy { void /* function */ **x0; id x1; } *_internalColorGenerate;
    struct ParticleShapeModuleProxy { void /* function */ **x0; BOOL x1; id x2; } *_internalParticleShapeModule;
}

@property (nonatomic) BOOL visibile;
@property (nonatomic) double duration;
@property (nonatomic) BOOL loop;
@property (nonatomic) long long maxParticles;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) struct CGSize { double width; double height; } startParticleSize;
@property (nonatomic) double particleLifeTime;
@property (retain, nonatomic) id<MAParticleColorGenerate> particleStartColor;
@property (retain, nonatomic) id<MAParticleVelocityGenerate> particleStartSpeed;
@property (retain, nonatomic) MAParticleEmissionModuleOC *particleEmissionModule;
@property (retain, nonatomic) id<MAParticleShapeModule> particleShapeModule;
@property (retain, nonatomic) MAParticleOverLifeModuleOC *particleOverLifeModule;

- (struct ParticleEmissionModule { void /* function */ **x0; int x1; int x2; float x3; } *)getParticleEmissionModule;
- (void *)getParticleOverLife;
- (struct VelocityGenerateProxy { void /* function */ **x0; id x1; } *)getVelocityGenerate;
- (struct ColorGenerateProxy { void /* function */ **x0; id x1; } *)getColorGenerate;
- (struct ParticleShapeModuleProxy { void /* function */ **x0; BOOL x1; id x2; } *)getParticleShapeModule;
- (void)setParticleEmissonModule:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
