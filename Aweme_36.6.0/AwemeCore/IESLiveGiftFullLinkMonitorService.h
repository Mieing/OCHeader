@class HTSLiveUser, NSString, NSDictionary, NSCache;
@protocol IESLiveTraceService, IESLiveRoomService, IESLiveInteractionModule;

@interface IESLiveGiftFullLinkMonitorService : NSObject <IESLiveGiftFullLinkMonitor>

@property (retain, nonatomic) id<IESLiveTraceService> traceService;
@property (retain, nonatomic) HTSLiveUser *currentLoginUser;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) NSCache *cacheInfo;
@property (retain, nonatomic) NSDictionary *eventNameFromType;
@property (weak, nonatomic) id<IESLiveInteractionModule> interactionModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)monitorGiftBusinessWithTraceId:(id)a0 giftId:(id)a1 stepName:(id)a2 error:(id)a3 extra:(id)a4;
- (id)startGiftFullLinkMonitorEventWithTraceId:(id)a0 eventType:(unsigned long long)a1 linkType:(unsigned long long)a2;
- (void)monitorGiftBusinessWithTraceId:(id)a0 giftId:(id)a1 logId:(id)a2 messageId:(id)a3 stepName:(id)a4 error:(id)a5 extra:(id)a6;
- (void)_trackEventWithTraceId:(id)a0 giftId:(id)a1 logId:(id)a2 messageId:(id)a3 linkType:(unsigned long long)a4 eventName:(id)a5 stepName:(id)a6 error:(id)a7 extra:(id)a8;
- (id)_indexWithTraceId:(id)a0 giftId:(id)a1 logId:(id)a2 messageId:(id)a3 linkType:(long long)a4;
- (id)_extraWithError:(id)a0 extra:(id)a1;
- (id)_eventWithTraceId:(id)a0 stepName:(id)a1 eventName:(id)a2 index:(id)a3 error:(id)a4 extra:(id)a5;
- (void).cxx_destruct;

@end
