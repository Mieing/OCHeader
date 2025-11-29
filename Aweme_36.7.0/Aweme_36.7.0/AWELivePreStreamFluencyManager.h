@interface AWELivePreStreamFluencyManager : NSObject

@property (nonatomic) BOOL enableLifeCycleOptimize;
@property (nonatomic) BOOL enableFluencyOptimizeV1;
@property (nonatomic) BOOL enablePlayerGlobalReuse;

+ (id)sharedInstance;

- (BOOL)getLifeCycleOptimizeConfig;
- (BOOL)getFluencyOptimizeV1Config;
- (BOOL)getPreStreamPlayerGlobalReuseOptimize;
- (id)init;

@end
