@class NSString;

@interface IESIMSendMsgFlowTracker : NSObject <IESIMSendMsgFlowNotification>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_getTypeWithMessage:(long long)a0;
+ (void)trackSendAttachment:(id)a0;
+ (void)trackResendAttachment:(id)a0;
+ (void)trackForwardSendAttachment:(id)a0;
+ (unsigned long long)transferMediaSendStageFromType:(unsigned long long)a0;

- (void)flowBeginWithInput:(id)a0 output:(id)a1;
- (void)flowFinishWithInput:(id)a0 output:(id)a1 flowError:(id)a2;
- (void)flowNodeStartWithInput:(id)a0 output:(id)a1;
- (void)flowNodeEndWithInput:(id)a0 output:(id)a1 duration:(long long)a2 error:(id)a3;
- (void)flowUpdateProgress:(double)a0 input:(id)a1 output:(id)a2;
- (void)stageDidStart:(id)a0 output:(id)a1;
- (void)mediaTrackStartNode:(id)a0 output:(id)a1;
- (void)stageDidFinish:(id)a0 output:(id)a1 error:(id)a2;
- (void)mediaTrackEndNode:(id)a0 output:(id)a1 duration:(long long)a2;
- (void)updateSDKMetricsWithInput:(id)a0 output:(id)a1 duration:(double)a2;
- (void)p_trackSendMessageResponseErrorWithInput:(id)a0 output:(id)a1;
- (void)p_trackUploadFileWithInput:(id)a0 output:(id)a1 duration:(long long)a2 error:(id)a3;
- (void)mediaTrackBeginFlow:(id)a0 output:(id)a1;
- (void)mediaTrackFinishFlow:(id)a0 output:(id)a1 error:(id)a2;
- (id)trackIDFromMessageID:(id)a0 startTime:(double)a1;
- (id)init;
- (void)dealloc;

@end
