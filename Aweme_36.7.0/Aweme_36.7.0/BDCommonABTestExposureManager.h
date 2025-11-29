@class NSRecursiveLock, NSString, NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface BDCommonABTestExposureManager : NSObject {
    NSRecursiveLock *vidLock;
    NSObject<OS_dispatch_queue> *event_queue;
}

@property (retain, nonatomic) NSMutableSet *exposedVids;
@property (retain, nonatomic) NSMutableDictionary *exposedVidBindUserDic;
@property (copy, nonatomic) NSString *commonExposedVidString;
@property (copy) NSString *totalExposedVidString;
@property (copy) NSString *currentUserKey;
@property (retain, nonatomic) NSMutableArray *exposedVidsForEvents;
@property (nonatomic) long long maxExposureOfflineStorageTimeInterval;
@property (nonatomic) BOOL exposeEventEnabled;
@property (nonatomic) BOOL clientExpEventEnabled;

+ (void)_aweLazyRegisterStaticLoad_energy_optimize;
+ (id)sharedManager;

- (void)exposeVid:(id)a0 isBind2User:(BOOL)a1;
- (id)exposureVidStringForUserKey:(id)a0;
- (id)exposureVidString;
- (void)updateExposureVidString;
- (void)userChanged:(id)a0;
- (void)sendExposureEvent:(id)a0;
- (id)legacy_exposureVidStringForUserKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
