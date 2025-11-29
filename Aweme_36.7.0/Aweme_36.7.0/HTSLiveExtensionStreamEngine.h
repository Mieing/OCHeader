@class HTSEventContext, NSString;
@protocol IESLiveRoomService, HTSLiveMediaStreamEngineDelegate;

@interface HTSLiveExtensionStreamEngine : NSObject <IESLiveScreenshotPauseService, HTSLiveMediaStreamEngine>

@property (nonatomic) long long engineState;
@property (nonatomic) BOOL started;
@property (nonatomic) BOOL screenshotBgAvatarOpt;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hideLiveRecordLoadingView;
@property (weak, nonatomic) id<HTSLiveMediaStreamEngineDelegate> delegate;

- (void)pauseScreenshotLive;
- (void)resumeScreenshotLive;
- (void)startedLive;
- (void)startLiveStreamIfNeeded;
- (void)willStopLive;
- (void)stopLiveStream;
- (void)setupBackView;
- (void)handleExtStreamState;
- (void)applyBlurMaskToView:(id)a0;
- (void)applyEffectBackgroundBehindPlayerView;
- (void)replaceScreenshotBgViewWithTag:(long long)a0;
- (void).cxx_destruct;
- (void)prepare;

@end
