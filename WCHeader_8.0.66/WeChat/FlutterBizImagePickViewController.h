@class UIStackView, UIView, BizTextCoverFlutterViewController, UINavigationController, NSString, WCAlbumPickViewController, MMImagePickerManagerOptionObj, MMAssetPickerController, MMSightCameraViewController, UIViewController, MMUIButton;
@protocol FlutterBizImagePickViewControllerDelegate;

@interface FlutterBizImagePickViewController : MMUIViewController <MMAssetPickerControllerDelegate, MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate, WCAlbumPickViewControllerDelegate, MMAssetPickerControllerExt, MMUIViewControllerExt>

@property (retain, nonatomic) UIView *tabView;
@property (retain, nonatomic) UIStackView *tabStackView;
@property (retain, nonatomic) MMUIButton *currentTabBtn;
@property (retain, nonatomic) UIViewController *currentTabVc;
@property (retain, nonatomic) MMUIButton *albumTabBtn;
@property (retain, nonatomic) MMUIButton *timelineBtn;
@property (retain, nonatomic) MMUIButton *sightTabBtn;
@property (retain, nonatomic) MMImagePickerManagerOptionObj *optionObj;
@property (retain, nonatomic) UINavigationController *albumViewController;
@property (retain, nonatomic) MMAssetPickerController *assetPickViewController;
@property (retain, nonatomic) UINavigationController *timelineViewController;
@property (retain, nonatomic) WCAlbumPickViewController *timelineAlbumViewController;
@property (retain, nonatomic) MMSightCameraViewController *sightViewController;
@property (retain, nonatomic) MMUIButton *textCoverBtn;
@property (retain, nonatomic) BizTextCoverFlutterViewController *textCoverController;
@property (nonatomic) unsigned long long selectTimelinePhotoCount;
@property (nonatomic) unsigned long long isEnterSubView;
@property (retain, nonatomic) id<FlutterBizImagePickViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long limitCount;
@property (nonatomic) unsigned long long initSelectTabIndex;
@property (nonatomic) BOOL canSendOriginalImage;
@property (nonatomic) BOOL allowTextCover;
@property (nonatomic) long long textCoverEditScene;
@property (nonatomic) long long livePhotoMode;
@property (readonly, nonatomic) long long picFromScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)initSelectFirstTab;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)updateLayout;
- (void)viewIsAppearing:(BOOL)a0;
- (BOOL)isSingleSelection;
- (void)MMUIViewControllerWillPushOrPresent:(id)a0;
- (void)MMUIViewControllerWillPopOrDismiss:(id)a0;
- (void)onTapAlbumTabBtn;
- (void)onTapTimelineBtn;
- (void)onTapSightTabBtn;
- (void)onTapTextCoverBtn;
- (void)jumpToEditorWithAssets:(id)a0;
- (void)jumpToEditorWithLocalPaths:(id)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)onSelectionItemNumberChanged:(unsigned long long)a0;
- (void)onJumpCustomEditViewController:(id)a0;
- (void)onAssetPickerControllerChangeSelectInfo:(id)a0 index:(long long)a1;
- (void)onSightPictureTaken:(id)a0 imageData:(id)a1 withFrontCamera:(BOOL)a2 editImageAttr:(id)a3;
- (void)onSightCameraViewControllerStartEditing;
- (void)onSightCameraViewControllerEndEditing;
- (void)didFinishCreateTextCover:(BOOL)a0 info:(id)a1;
- (void)updateTabBar;
- (void)reportEnterPicker;
- (void)reportTextCoverTabExposed;
- (void)reportTextCoverTabClicked;
- (void).cxx_destruct;

@end
