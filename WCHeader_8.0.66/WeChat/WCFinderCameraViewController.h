@class NSString, WCFinderCameraViewModel, MMImagePickerManagerOptionObj;
@protocol WCFinderCameraViewControllerDelegate;

@interface WCFinderCameraViewController : MMSightCameraViewController <ShortVideoBarDelegate, MMImagePickerManagerDelegate>

@property (retain, nonatomic) MMImagePickerManagerOptionObj *optionObj;
@property (nonatomic) unsigned long long enterTime;
@property (copy, nonatomic) NSString *traceId;
@property (retain, nonatomic) WCFinderCameraViewModel *viewModel;
@property (weak, nonatomic) id<WCFinderCameraViewControllerDelegate> cameraDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)handleDefaultCameraFrontBackDevice;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (id)getReportExtInfoDismissState:(BOOL)a0 eventCode:(long long)a1;
- (void)viewDidPush:(BOOL)a0;
- (void)viewDidPresent:(BOOL)a0;
- (void)viewWillPresentQuickReplySession:(id)a0;
- (void)viewWillBeDismissed:(BOOL)a0;
- (BOOL)hidesStatusBar;
- (void)showImagePicker;
- (BOOL)useTransparentNavibar;
- (void)changeCameraCaptureSessionToRun:(BOOL)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingSightWithInfo:(id)a1;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)close;
- (id)shortVideoToolBarGetMusicSongId;
- (void)onShortVideoShootBtnClicked:(BOOL)a0;
- (unsigned long long)getFinderPostEnterScene;
- (id)shortVideoToolBarGetTemplateFollowFeedId;
- (void)onShortVideoToolBtnClick:(unsigned long long)a0;
- (void)onTemplateStartPress;
- (void)onCameraBtnPress;
- (void)reportFinderExtStatsReportByAction:(id)a0;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
