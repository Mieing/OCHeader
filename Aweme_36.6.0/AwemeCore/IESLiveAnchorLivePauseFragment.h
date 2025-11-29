@class IESLiveAnchorImageBufferCapture, IESLiveAnchorLivePauseCountDownView, UIView, HTSLiveToolbarItem, NSString, IESLiveAnchorForceSuspensionCaptureHandler, IESLiveAnchorLivePauseBackgroundView, NSMutableSet;
@protocol IESLiveGameModule, IESLiveBubbleGuide, IESLiveAnchorRoomStatusChangeService, IESLiveRealStreamingProvider;

@interface IESLiveAnchorLivePauseFragment : IESLiveRoomComponent <IESLiveAnchorLivePauseCountDownViewDelegate, IESLiveAnchorLivePauseService>

@property (retain, nonatomic) HTSLiveToolbarItem *pauseItem;
@property (retain, nonatomic) IESLiveAnchorImageBufferCapture *imageBufferCapture;
@property (retain, nonatomic) id<IESLiveRealStreamingProvider> realStraemProvider;
@property (retain, nonatomic) id<IESLiveGameModule> gameModule;
@property (nonatomic) BOOL isPaused;
@property (retain, nonatomic) UIView *shadowView;
@property (weak, nonatomic) IESLiveAnchorLivePauseCountDownView *pausedView;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *tipView;
@property (retain, nonatomic) IESLiveAnchorLivePauseBackgroundView *backgroundView;
@property (nonatomic) long long count;
@property (nonatomic) long long remainCount;
@property (nonatomic) double maxInterval;
@property (nonatomic) double startTimeInterval;
@property (retain, nonatomic) NSMutableSet *streamAbnormalStatusSet;
@property (retain, nonatomic) id<IESLiveAnchorRoomStatusChangeService> roomStatusService;
@property (retain, nonatomic) IESLiveAnchorForceSuspensionCaptureHandler *suspensionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentMount;
- (void)componentDidAppear;
- (id)liveType;
- (BOOL)canShowAlert;
- (void)pauseLive;
- (void)resumeLive;
- (BOOL)canShowRedDot;
- (BOOL)isLivePaused;
- (void)pauseLiveWithNoLimit;
- (void)addAbnormalStatus:(id)a0;
- (BOOL)containeAbnormalStatus:(id)a0;
- (void)removeAbnormalStatus:(id)a0;
- (void)forcePauseVideoCaptureWithImage:(id)a0;
- (void)anchorLivePauseCountDownViewDidClickResumeButton;
- (void)configureFromSettings;
- (void)stopOriginalCapture;
- (void)pauseItemDidClick;
- (void)trackEventWithKey:(id)a0 others:(id)a1;
- (BOOL)checkCanPauseLive;
- (void)updateResourceWithUpdateResult:(id)a0 pauseImage:(id)a1;
- (void)startImageCaptureWithCompletion:(id /* block */)a0;
- (void)addPausedView;
- (void)hideAudioBgView;
- (void)stopImageCapture;
- (void)removePausedView;
- (void)showAudioBgView;
- (void)resumeOriginalCapture;
- (BOOL)useFakeAudioCapture;
- (void)resumeVideoLive;
- (BOOL)canPushImageInAudioRoom;
- (void)updateRemainTimes;
- (void)generateImageWithSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
