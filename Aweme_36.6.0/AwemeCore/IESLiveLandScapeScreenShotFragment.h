@class IESLiveButton, IESLiveShareCaptureWidget, NSString, IESLiveLayoutPlaceholderView, NSURL, NSMutableArray;

@interface IESLiveLandScapeScreenShotFragment : IESLiveRoomComponent <HTSLiveHideComponentAction, IESLiveAirPlayAction, IESLiveAutoRotateAction, IESLiveVSScreenRecordAction, IESLiveSeekAction, HTSLiveMessageSubscriber>

@property (retain, nonatomic) IESLiveButton *snapshotBtn;
@property (retain, nonatomic) IESLiveShareCaptureWidget *widget;
@property (retain, nonatomic) IESLiveLayoutPlaceholderView *rightControl;
@property (retain, nonatomic) NSMutableArray *seriesCaptureStack;
@property (readonly, nonatomic) BOOL isDuringScreenshot;
@property (retain, nonatomic) NSURL *localScreenshotURL;
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
- (void)animationForAutoRotateToOrientation:(long long)a0 duration:(double)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)hideAllComponent;
- (void)showAllComponent;
- (void)willHideAllComponent;
- (void)hideComponentsForPortrait;
- (void)showComponentsForPortrait;
- (void)handleOrientationChanged:(long long)a0;
- (void)resetCaptureStatus;
- (void)onFIFAPannelSatusChange:(long long)a0;
- (void)airplayStateDidChange:(BOOL)a0;
- (void)onSeekStart;
- (void)onSeekEnd;
- (void)chatChannelViewDidAppearInLandscape;
- (void)recordDidBegin;
- (void)modifyEntranceState:(BOOL)a0 animated:(BOOL)a1;
- (void)onDidTakeSnapshot:(id)a0;
- (BOOL)allComponentsHide;
- (void)openLandscapeSharePannel;
- (void).cxx_destruct;
- (void)commonInit;

@end
