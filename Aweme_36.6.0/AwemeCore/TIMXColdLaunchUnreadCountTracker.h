@class TIMXThreadSafeMutableDictionary, NSString, TIMXSDKInstance;

@interface TIMXColdLaunchUnreadCountTracker : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXThreadSafeMutableDictionary *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isColdLaunchOfflinePullContext:(id)a0;
- (void)trackOfflinePullUnreadCount:(long long)a0 withContext:(id)a1;
- (void)trackLoadDBUnreadCount:(long long)a0 withContext:(id)a1;
- (void)reportUC;
- (void)didFinishedUnreadCountCalculate:(id)a0;
- (void)didFinishedNoOfflineMsgPull:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
