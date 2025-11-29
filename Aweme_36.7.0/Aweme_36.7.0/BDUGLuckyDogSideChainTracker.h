@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, BDUGLuckyDogSideChainTrackerDelegate;

@interface BDUGLuckyDogSideChainTracker : NSObject

@property (copy, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *trackerQueue;
@property (retain, nonatomic) NSMutableDictionary *trackerDictionary;
@property (nonatomic) BOOL isActivationEnded;
@property (weak, nonatomic) id<BDUGLuckyDogSideChainTrackerDelegate> delegate;
@property (nonatomic) BOOL shouldUpdateInfoWhenReTracking;

- (void)__willResignActive:(id)a0;
- (void)__initTrackerDictionary;
- (id)__newTrackObjectWithObjInfo:(id)a0 reason:(id)a1;
- (id)__setStatus:(id)a0 forTrackObject:(id)a1;
- (id)__extraInfoWithUpdatedEndTimeForMutableTrackObject:(id)a0;
- (id)__reasonMapForMutableTrackObject:(id)a0 updateReason:(id)a1;
- (void)__activateCachedTrackedObjectWithIdentity:(id)a0 objInfo:(id)a1 needInitCachedTrackedObject:(BOOL)a2;
- (BOOL)__isActivatedTrackObject:(id)a0;
- (void)stopTrackingObjectWithIdentity:(id)a0 reason:(id)a1 objInfo:(id)a2;
- (id)__setActivate:(BOOL)a0 forTrackObject:(id)a1;
- (id)initWithTrackingInfoCacheKey:(id)a0;
- (void)trackNewObjectWithIdentity:(id)a0 objInfo:(id)a1;
- (void)getStatusWithIdentity:(id)a0 completion:(id /* block */)a1;
- (void)updateObjectStatusWithIdentity:(id)a0 status:(id)a1;
- (void)activateCachedTrackedObjectWithIdentity:(id)a0 objInfo:(id)a1;
- (void)activateButNotInitCachedTrackedObjectWithIdentity:(id)a0;
- (void)onActivateCachedTrackedObjectEnd;
- (void)updateObjectReasonWithIdentity:(id)a0 reason:(id)a1 objInfo:(id)a2;
- (void).cxx_destruct;
- (void)cleanCache;
- (void)dealloc;

@end
