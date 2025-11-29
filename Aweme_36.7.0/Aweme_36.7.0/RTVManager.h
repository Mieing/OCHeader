@class RTVWebService, NSString;
@protocol RTVXRRoomMessageBusinessTypeTransformerInterface, RTVAccountManagerInterface, RxInjector, RTVPerformanceMonitorInterface;

@interface RTVManager : NSObject <RTVManagerInterface, RTVXRRoomManagerInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVWebService *webService;
@property (readonly, nonatomic) id<RTVPerformanceMonitorInterface> peformanceMonitor;
@property (readonly, nonatomic) id<RTVAccountManagerInterface> accountManager;
@property (readonly, nonatomic) id<RTVXRRoomMessageBusinessTypeTransformerInterface> messageTypeTansformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)pullWithReason:(long long)a0;
- (id)dispatchRoomMessage:(id)a0 roomID:(id)a1 toUserIDs:(id)a2;
- (id)keepAliveWithRoomID:(id)a0;
- (id)pullDegradeSettingWithUid:(id)a0 conversationShortID:(id)a1;
- (long long)__parseRoomTypeFromRoomInfo:(id)a0;
- (void).cxx_destruct;

@end
