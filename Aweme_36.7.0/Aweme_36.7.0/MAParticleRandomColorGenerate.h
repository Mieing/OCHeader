@class NSString;

@interface MAParticleRandomColorGenerate : NSObject <MAParticleColorGenerate> {
    struct RandomColorBetWeenTwoConstants { void /* function */ **x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float *x9; } *_randomColor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBoundaryColorR1:(float)a0 G1:(float)a1 B1:(float)a2 A1:(float)a3 R2:(float)a4 G2:(float)a5 B2:(float)a6 A2:(float)a7;
- (void)dealloc;
- (float *)getColor;

@end
