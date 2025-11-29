@class IESLiveShareCaptureWidget, NSString, IESLiveLandscapePreviewViewController, IESLiveAudienceScreenshotStore;

@interface IESLiveAudienceScreenshotFragment : IESLiveRoomComponent <IESLiveAudienceScreenshotReaction, IESLiveFIFAPlayerScaleAction>

@property (retain, nonatomic) IESLiveAudienceScreenshotStore *store;
@property (retain, nonatomic) IESLiveShareCaptureWidget *widget;
@property (retain, nonatomic) IESLiveLandscapePreviewViewController *landscapePreviewVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentDidAppear;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void)needDisableHostScreenshot:(BOOL)a0;
- (void)resetCaptureStatus;
- (void)onFIFAPannelSatusChange:(long long)a0;
- (void)processLandscapeScreenShot;
- (void)didTakeScreenshot;
- (void)closeScreenshotPanel;
- (void)closeLandscapeScreenShotPanel;
- (void)showLandscapeScreenShotPanel;
- (void).cxx_destruct;

@end
