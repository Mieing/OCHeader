@class NSDictionary, NSString, IESLivePushStreamLogger;
@protocol IESLiveRoomService, IESLiveScreenshotHub;

@interface IESLiveScreencastPushStreamHandler : NSObject <IESLiveAnchorRoomStatusChangeEvents>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLivePushStreamLogger *pushStreamLogger;
@property (retain, nonatomic) NSDictionary *extensionPerformanceInfo;
@property (retain, nonatomic) NSDictionary *extensionCaptureInfo;
@property (nonatomic) long long threshold;
@property (nonatomic) BOOL enablePerformance;
@property (nonatomic) long long bitrateZeroCount;
@property (nonatomic) long long currentEncodeBitrate;
@property (nonatomic) BOOL isReduceBitrate;
@property (nonatomic) long long streamLogTotalCount;
@property (nonatomic) long long networkFrameDownCount;
@property (nonatomic) long long abnormalFrameDownCount;
@property (retain, nonatomic) id streamExceptionTips;
@property (nonatomic) BOOL exceptionTipsEnable;
@property (nonatomic) long long warningCnt;
@property (nonatomic) long long maxWarningCount;
@property (nonatomic) long long hasWarningCount;
@property (nonatomic) long long errorCnt;
@property (nonatomic) long long maxAlertCount;
@property (nonatomic) long long hasAlertCount;
@property (nonatomic) long long performanceInfoCount;
@property (nonatomic) BOOL liveScreenRecordApplogSwitch;
@property (nonatomic) BOOL liveScreencastFrequencyMethodOpt;
@property (retain, nonatomic) id<IESLiveScreenshotHub> hub;
@property (copy, nonatomic) id /* block */ closeRoomHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willStopAnchorLive;
- (void)dismissStreamExceptionTips;
- (void)addListen;
- (void)receiveStreamUpdateEncodeBitrate:(long long)a0;
- (void)receiveStreamErrorWithCode:(long long)a0;
- (void)receiveStreamLogWithLog:(id)a0 bitrate:(long long)a1 captureInfo:(id)a2;
- (void)trackExtensionPerformanceInfo:(id)a0;
- (void)trackExtensionMaxMemoryUse:(id)a0;
- (void)showStreamExceptionTips:(unsigned long long)a0 forceClose:(BOOL)a1 errorCode:(long long)a2;
- (void)handlerSessionErrorWithErrorCode:(long long)a0 errorMessage:(id)a1;
- (void)reportStreamLog:(id)a0;
- (void)collectVideoFramerateWithFramerate:(long long)a0 isReduceBitrate:(BOOL)a1;
- (void)trackCaptureInfoWithLog:(id)a0 bitrate:(long long)a1 captureInfo:(id)a2;
- (void)handlePushStreamBitrateWith:(long long)a0;
- (void)showPushStreamWarningTips;
- (void)showPushStreamErrorTipsWithCode:(long long)a0 reason:(id)a1 forceClose:(BOOL)a2;
- (void)showPushViewWithIcon:(id)a0 title:(id)a1;
- (void)reportStreamReminderShowWithScene:(id)a0 messageType:(id)a1 reason:(id)a2;
- (void)reportStreamWindowShowMessageType:(id)a0 reason:(id)a1;
- (void)reportStreamWindowClickWithType:(id)a0 messageType:(id)a1 reason:(id)a2;
- (void)reportStreamVideoFramerateInfo;
- (void)startListenStreamStatus;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRoom:(id)a0;
- (void)initProperties;

@end
