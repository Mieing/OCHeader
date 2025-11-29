@class NSString;
@protocol IESLiveUserService, IESLiveFullLinkMonitor, IESLiveRoomService, IESLiveChatChannelMonitorDataSource;

@interface IESLiveChatChannelMonitorImpl : NSObject

@property (retain, nonatomic) id<IESLiveFullLinkMonitor> innerMonitor;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveUserService> userService;
@property (copy, nonatomic) NSString *businessServiceName;
@property (copy, nonatomic) NSString *apiServiceName;
@property (copy, nonatomic) NSString *messageServiceName;
@property (copy, nonatomic) NSString *sdkAPIServiceName;
@property (copy, nonatomic) NSString *sdkCallbackServiceName;
@property (retain, nonatomic) id<IESLiveChatChannelMonitorDataSource> dataSource;

- (unsigned long long)eventModule;
- (void)monitorIMMessageReceive:(id)a0 description:(id)a1 extra:(id)a2;
- (void)monitorServerAPICall:(id)a0 requestTimestamp:(double)a1 error:(id)a2 response:(id)a3 extra:(id)a4;
- (void)monitorWithServiceName:(id)a0 eventType:(unsigned long long)a1 extra:(id)a2;
- (void)monitorSDKAPICall:(id)a0 extra:(id)a1;
- (void)monitorSDKCallback:(id)a0 extra:(id)a1;
- (void)monitorBusinessLogic:(id)a0 extra:(id)a1;
- (id)buildCommonParametersWithExtra:(id)a0;
- (id)buildCommonParameters;
- (void).cxx_destruct;

@end
