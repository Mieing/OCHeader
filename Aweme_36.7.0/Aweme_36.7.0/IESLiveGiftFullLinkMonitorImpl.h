@class NSString, IESLiveGiftFullLinkMonitorService;

@interface IESLiveGiftFullLinkMonitorImpl : IESLiveGeneralBaseService <IESLiveGiftFullLinkMonitor>

@property (retain, nonatomic) IESLiveGiftFullLinkMonitorService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)monitorGiftBusinessWithTraceId:(id)a0 giftId:(id)a1 stepName:(id)a2 error:(id)a3 extra:(id)a4;
- (id)startGiftFullLinkMonitorEventWithTraceId:(id)a0 eventType:(unsigned long long)a1 linkType:(unsigned long long)a2;
- (void)monitorGiftBusinessWithTraceId:(id)a0 giftId:(id)a1 logId:(id)a2 messageId:(id)a3 stepName:(id)a4 error:(id)a5 extra:(id)a6;
- (void).cxx_destruct;

@end
