@protocol RTVXRSettingsInterface, RTVVoipWebServiceAdapterProtocol, RxInjector, RTVPerformanceMonitorInterface;

@interface RTVWebService : NSObject

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipWebServiceAdapterProtocol> webServiceAccess;
@property (readonly, nonatomic) id<RTVPerformanceMonitorInterface> peformanceMonitor;
@property (readonly, nonatomic) id<RTVXRSettingsInterface> settings;

- (void)rxAwakeFromPropertyInjection;
- (id)__postRequestWithName:(id)a0 jsonBody:(id)a1;
- (id)keepAliveWithRoomID:(id)a0;
- (id)pullDegradeSettingWithUid:(id)a0 conversationShortID:(id)a1;
- (id)__businessErrorWithError:(id)a0;
- (id)pullAllInfo:(BOOL)a0;
- (id)dispatchRoomMessage:(id)a0 roomID:(id)a1 businessType:(long long)a2 toUserIDs:(id)a3;
- (id)reportTaskCompleteWithToken:(id)a0 extraInfo:(id)a1;
- (id)reportSummerLiveShowTaskCompleteWithToken:(id)a0;
- (id)requestVoipCallConfigWithSecUid:(id)a0 conversationShortID:(id)a1;
- (void).cxx_destruct;

@end
