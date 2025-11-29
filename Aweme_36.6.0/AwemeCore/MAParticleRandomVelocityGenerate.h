@class NSString;

@interface MAParticleRandomVelocityGenerate : NSObject <MAParticleVelocityGenerate> {
    struct RandomVelocityBetweenTwoConstants { void /* function */ **x0; float x1; float x2; float x3; float x4; float x5; float x6; } *_randomVelocity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)getY;
- (double)getZ;
- (id)initWithBoundaryValueX1:(float)a0 Y1:(float)a1 Z1:(float)a2 X2:(float)a3 Y2:(float)a4 Z2:(float)a5;
- (void)dealloc;
- (double)getX;

@end
