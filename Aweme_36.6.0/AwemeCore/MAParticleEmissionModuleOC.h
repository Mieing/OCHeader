@interface MAParticleEmissionModuleOC : NSObject {
    struct ParticleEmissionModule { void /* function */ **x0; int x1; int x2; float x3; } *_emissionModule;
}

- (id)initWithEmissionRate:(int)a0 rateTime:(int)a1;
- (struct ParticleEmissionModule { void /* function */ **x0; int x1; int x2; float x3; } *)emissionModule;
- (void)dealloc;

@end
