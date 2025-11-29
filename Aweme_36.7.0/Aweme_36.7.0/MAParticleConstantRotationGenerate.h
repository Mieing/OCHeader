@class NSString;

@interface MAParticleConstantRotationGenerate : NSObject <MAParticleRotationGenerate> {
    struct ConstantRotationOverLife { void /* function */ **x0; float x1; } *_constantRotation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (float)getRotate;
- (id)initWithRotate:(float)a0;
- (void)dealloc;

@end
