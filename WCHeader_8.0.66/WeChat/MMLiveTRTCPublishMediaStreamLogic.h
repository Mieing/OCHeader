@class TRTCCloud, NSString, MMLivePushReporterExtInfo, MMLiveTRTCPublishMediaStreamDataWrap;
@protocol MMLiveTRTCPublishMediaStreamLogicDelegate;

@interface MMLiveTRTCPublishMediaStreamLogic : NSObject

@property (retain, nonatomic) TRTCCloud *trtcInstance;
@property (copy, nonatomic) NSString *publishMediaStreamTaskId;
@property (retain, nonatomic) NSString *lastPublishMediaStreamTaskId;
@property (retain, nonatomic) MMLiveTRTCPublishMediaStreamDataWrap *currentDataWrap;
@property (retain, nonatomic) MMLiveTRTCPublishMediaStreamDataWrap *nextDataWrap;
@property (nonatomic) unsigned long long currentState;
@property (nonatomic) unsigned long long requestFailedCount;
@property (nonatomic) unsigned long long updatePublishFailedUnknownServerErrorCount;
@property (nonatomic) BOOL shouldPublishMediaStreamAfterDelay;
@property (nonatomic) BOOL shouldRetryPublishMediaStreamWithoutDelay;
@property (retain, nonatomic) MMLivePushReporterExtInfo *reporterExtInfo;
@property (weak, nonatomic) id<MMLiveTRTCPublishMediaStreamLogicDelegate> logicDelegate;

- (id)initWithTRTCCloudInstance:(id)a0 logicDelegate:(id)a1;
- (void)handleStartPublishMediaStreamResultWithTaskId:(id)a0 code:(int)a1 message:(id)a2 extraInfo:(id)a3;
- (void)handleUpdatePublishMediaStreamResultWithTaskId:(id)a0 code:(int)a1 message:(id)a2 extraInfo:(id)a3;
- (void)handleStopPublishMediaStreamResultWithTaskId:(id)a0 code:(int)a1 message:(id)a2 extraInfo:(id)a3;
- (void)handleConnectionRecovery;
- (void)publishMediaStream:(id)a0;
- (void)handleExitRoom;
- (void)updateReporterExtInfo:(id)a0;
- (void)reportPublishMediaStreamResultWithEvent:(unsigned long long)a0 taskId:(id)a1 code:(int)a2 message:(id)a3 serverErrorCode:(long long)a4;
- (long long)extractServerErrorCodeFromExtraInfo:(id)a0;
- (void)handlePublishMediaStreamServerProcessFailedWithTaskId:(id)a0 message:(id)a1 serverErrorCode:(long long)a2 isStartPublishResult:(BOOL)a3;
- (void)realPublishMediaStream;
- (void)checkNextDataWrapAndForcePublish:(BOOL)a0;
- (double)currentDelayTime;
- (void)delayPublishMediaStream;
- (void)retryUpdatePublishMediaStream;
- (void)retryStopAndStartPublishMediaStream;
- (void)retryStartPublishMediaStream;
- (void)delayCheckPublishMediaStreamResult;
- (void).cxx_destruct;

@end
