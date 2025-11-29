@class NSString;

@interface IESLiveChatChannelNormalMonitorImpl : IESLiveChatChannelMonitorImpl <IESLiveChatChannelNormalMonitor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)monitorIMMessageReceive:(id)a0 description:(id)a1 extra:(id)a2;
- (void)monitorServerAPICall:(id)a0 requestTimestamp:(double)a1 error:(id)a2 response:(id)a3 extra:(id)a4;
- (void)monitorWithServiceName:(id)a0 eventType:(unsigned long long)a1 extra:(id)a2;
- (void)monitorSDKAPICall:(id)a0 extra:(id)a1;
- (void)monitorSDKCallback:(id)a0 extra:(id)a1;
- (void)monitorBusinessLogic:(id)a0 extra:(id)a1;

@end
