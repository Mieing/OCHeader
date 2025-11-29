@class NSArray, NSMutableDictionary, NSSet, NSObject, ByteBenchStrategyOC;
@protocol CameraTracker, OS_dispatch_queue;

@interface CameraKitByteBenchDataManager : NSObject

@property (weak, nonatomic) ByteBenchStrategyOC *strategy;
@property (weak, nonatomic) id<CameraTracker> tracker;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *preloadQueue;
@property (retain, nonatomic) NSArray *paramClasses;
@property (retain, nonatomic) NSMutableDictionary *preloadedCameraParam;
@property (retain, nonatomic) NSMutableDictionary *dynamicStrategyKeys;
@property (retain, nonatomic) NSMutableDictionary *staticStrategyKeys;
@property (retain, nonatomic) NSMutableDictionary *originStrategyKeys;
@property (retain, nonatomic) NSSet *mainSubspaceDynamicStrategyKeys;
@property (retain, nonatomic) NSSet *mainSubspaceStaticStrategyKeys;

+ (id)sharedInstance;

- (void)track:(id)a0 params:(id)a1;
- (void)preloadCameraContextFromByteBenchWithStrategy:(id)a0 tracker:(id)a1;
- (id)obtainStrategyValueForKey:(id)a0 subsapceID:(id)a1 params:(id)a2;
- (void)obtainMainSubspaceStrategyKey;
- (void)preloadCameraContextWithSubspaceID:(id)a0;
- (void)distributeStrategyForSubspace:(id)a0 intoStaticStrategy:(id)a1 dynamicStrategy:(id)a2;
- (void)obtainSubspaceMergeStrategyKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
