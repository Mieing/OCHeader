@class NSArray, UIWindow;

@interface HMDUITrackerTool : NSObject

@property (class, readonly, nonatomic) UIWindow *keyWindow;
@property (class, readonly) BOOL sceneBasedSupport;
@property (class, readonly, nonatomic) BOOL multiScenesConfig;
@property (class, readonly, nonatomic) NSArray *forgroundWindows;
@property (class, readonly, nonatomic, getter=isSceneBackground) BOOL sceneBackground;

+ (unsigned long long)lifeCycleType;
+ (id)findKeyInWindows:(id)a0;
+ (Class)sceneDelegateClass;

@end
