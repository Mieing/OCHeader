@class NSString, TIMXSDKInstance;

@interface TIMXMessagePullerUtility : NSObject <TIMXElapsedTimeMonitorDelegate, TIMXNewMessageStoreEventProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)messageStore:(id)a0 internalNotifyWithUpdate:(id)a1 context:(id)a2;
- (void)elapsedTimeMonitor:(id)a0 taskExecutionTimeout:(id)a1 elapsedTime:(double)a2;
- (id)calculateUnreadCountDiffDict:(id)a0;
- (BOOL)trackCrossUserWithCurrentUid:(long long)a0 initUid:(long long)a1 withScene:(id)a2;
- (void)handleOfflineMessages:(id)a0 logId:(id)a1 inbox:(int)a2 context:(id)a3 completion:(id /* block */)a4;
- (void)trackUpdateInvalidVersion:(id)a0 withKey:(id)a1 type:(long long)a2 context:(id)a3;
- (BOOL)isCommonSourceWithOfflinePullContext:(id)a0;
- (void)handleReadInfos:(id)a0;
- (long long)currentIndexType;
- (void)handleOfflineMessages:(id)a0 logId:(id)a1 inbox:(int)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end
