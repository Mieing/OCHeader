@class NSMapTable, MMKV, NSString, NSMutableArray, AWEMRAlertMigrateTracker;
@protocol AWEPzEngineProtocol;

@interface AWEMessageReachPopViewAccessManager : NSObject <AWEAlertTaskLifeCycleDelegateProtocol>

@property (retain, nonatomic) id<AWEPzEngineProtocol> popViewEngine;
@property (retain, nonatomic) NSMutableArray *activatedPopViews;
@property (retain, nonatomic) AWEMRAlertMigrateTracker *alertTracker;
@property (retain, nonatomic) NSMapTable *didTrackShowRecordMap;
@property (retain, nonatomic) MMKV *mmkv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (id)interceptorActionBeforeTrackWithContext:(id)a0;
- (void)interceptorActionAfterCanShowCheck:(id)a0 completion:(id /* block */)a1;
- (void)invokeAlertRegisterInterceptorCheckCompletion:(id /* block */)a0 withVerifyResult:(BOOL)a1;
- (void)triggerAccessForceAlert:(id)a0 forEventItem:(id)a1 completion:(id /* block */)a2;
- (void)initAccessManager;
- (void)trackAlertTerminateIfNeeded;
- (BOOL)enableAccessControl:(id)a0;
- (void)popViewPizzaComponentVerify:(id)a0 completion:(id /* block */)a1;
- (void)forceAlertTrigger:(id)a0 forEventItem:(id)a1 completion:(id /* block */)a2;
- (id)createPzComponentConfigModel:(id)a0 cTags:(id)a1;
- (BOOL)isTaskIDValid:(id)a0;
- (void)removeDidTrackShowRecordForKey:(id)a0;
- (void)storeDidTrackShowRecords;
- (void)alertTaskWillShowWithContext:(id)a0;
- (void)alertTaskDidShowWithContext:(id)a0;
- (void)alertTaskDidClickWithContext:(id)a0 clickInfo:(id)a1;
- (void)alertTaskDidHideWithContext:(id)a0 didShow:(BOOL)a1;
- (void)forceAlertWillShowWithContext:(id)a0;
- (void)forceAlertDidShowWithContext:(id)a0;
- (void)forceAlertDidCloseWithContext:(id)a0 didShow:(BOOL)a1;
- (id)forceAlertTrackParamsWithContext:(id)a0;
- (id)getPopViewEngine;
- (BOOL)isAccessIDValid:(id)a0;
- (void)setDidTrackShowRecordForKey:(id)a0 trackParams:(id)a1;
- (void).cxx_destruct;

@end
