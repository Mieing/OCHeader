@class PHAsset, IESLiveVSScreenRecordBar, IESLiveLayoutPlaceholderView, NSString, IESLiveGCDTimer, IESLiveShareCaptureWidget, IESLiveVSRecordWaterMarkView, UIButton;
@protocol IESLiveVSScreenRecorderProtocol;

@interface IESLiveVSScreenRecordFragment : IESLiveRoomComponent <HTSLiveAudienceActions, HTSLiveAppLifeCycleActions, HTSLiveHideComponentAction, IESLiveVSScreenRecordProvider, IESLiveAirPlayAction, IESLiveAutoRotateAction, IESLiveVSScreenRecordAction, IESLiveSeekAction, IESLiveChatChannelAction, IESLiveStreamResolutionActions, HTSLiveMessageSubscriber>

@property (retain, nonatomic) UIButton *recordBtn;
@property (retain, nonatomic) IESLiveVSScreenRecordBar *recordBar;
@property (retain, nonatomic) IESLiveShareCaptureWidget *widget;
@property (retain, nonatomic) IESLiveVSRecordWaterMarkView *watermark;
@property (retain, nonatomic) IESLiveLayoutPlaceholderView *rightControl;
@property (retain, nonatomic) id<IESLiveVSScreenRecorderProtocol> recorder;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) PHAsset *recordVideoAsset;
@property (retain, nonatomic) id shareContentModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void)animationForAutoRotateToOrientation:(long long)a0 duration:(double)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)didAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)hideAllComponent;
- (void)showAllComponent;
- (void)willHideAllComponent;
- (void)hideComponentsForPortrait;
- (void)showComponentsForPortrait;
- (void)appWillTerminate;
- (void)appDidResignActive;
- (void)liveWillEndWithReason:(unsigned long long)a0;
- (void)handleOrientationChanged:(long long)a0;
- (void)onFIFAPannelSatusChange:(long long)a0;
- (BOOL)isRecorderRunning;
- (void)airplayStateDidChange:(BOOL)a0;
- (void)onSeekStart;
- (void)onSeekEnd;
- (void)didChangeStreamResolution;
- (BOOL)isRecordBarShowing;
- (void)chatChannelViewDidAppearInLandscape;
- (void)modifyEntranceState:(BOOL)a0 animated:(BOOL)a1;
- (void)openLandscapeSharePannel;
- (id)tryToFindMetalView;
- (void)resetRecordStatus;
- (void)updateRecoderView;
- (void)stopRecorder;
- (long long)enablePlayerRecorderOpt;
- (void)recorderDidStart;
- (void)saveAlbumWithCaptured:(id)a0;
- (void)onBeginRecordAction:(id)a0;
- (void)layoutWidgetIfNeed:(BOOL)a0;
- (void).cxx_destruct;
- (void)commonInit;
- (void)messageReceived:(id)a0;
- (void)appDidEnterBackground;

@end
