@class NSString;
@protocol IESLiveRoomService, IESLiveMultiUserScenarioMonitor;

@interface IESLiveInteractionGameAvatarFullLinkMonitor : NSObject <IESLiveInteractionGameAvatarFullLinkMonitorProtocol>

@property (weak, nonatomic) id<IESLiveMultiUserScenarioMonitor> fullLinkMonitor;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)didSetAttachingDIContext;
- (void)monitorWithName:(id)a0 extra:(id)a1 eventType:(unsigned long long)a2;
- (id)appendCommonExtra:(id)a0;
- (void)monitorIMWithName:(id)a0 message:(id)a1 extra:(id)a2;
- (void)monitorWithAPIPath:(id)a0 requestTimestamp:(double)a1 error:(id)a2 response:(id)a3 extra:(id)a4;
- (void)monitorWithName:(id)a0 extra:(id)a1 eventType:(unsigned long long)a2 metric:(id)a3;
- (void)reportAvatarCoreStatisticsWithDescription:(id)a0 params:(id)a1;
- (id)requiredKeyWithEventType:(unsigned long long)a0;
- (id)serviceNameWithEventType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
