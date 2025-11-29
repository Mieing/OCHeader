@class NSString;
@protocol AWEHPRealTimeActivityDelegate;

@interface AWEHPRealTimeActivityManager : NSObject <BDUGLuckyActivityDelegateProtocol>

@property (weak, nonatomic) id<AWEHPRealTimeActivityDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *entryID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateActivityManagerWithEntryID:(id)a0;

- (void)onActivityEnter:(id)a0 aheadTime:(long long)a1;
- (void)onActivityStop:(id)a0;
- (void)onActivityDataChanged:(id)a0 allData:(id)a1;
- (id)getCommonTrackingParams;
- (id)getDefaultActivityData;
- (id)getProcessActivityResourceWithError:(id *)a0;
- (id)getResourceWithResourceID:(id)a0 cycleID:(id)a1 error:(id *)a2;
- (void)trackActivityStatusErrorWithParams:(id)a0;
- (unsigned long long)p_getActivityStateWithResourceID:(id)a0 cycleID:(id)a1;
- (void)callStateCallBackWithEntryID:(id)a0;
- (void)callDataChangedCallbackWithEntryID:(id)a0;
- (id)p_getDefaultActivityData;
- (id)p_getResourceWithResourceID:(id)a0 cycleId:(id)a1;
- (id)p_getProcessActivityResource;
- (void)registerDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithEntryID:(id)a0;

@end
