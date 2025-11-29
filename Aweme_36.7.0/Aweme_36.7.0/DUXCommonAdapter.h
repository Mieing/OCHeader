@class NSString;

@interface DUXCommonAdapter : NSObject <DUXCommonAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (id)duxLoadingLOTAnimationViewWithParticleStyle:(long long)a0;
- (id)duxAdaptImageName:(id)a0;
- (id)weakTarget;

@end
