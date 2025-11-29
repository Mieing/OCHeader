@class UIView, NSString, UINavigationController, WCAlbumPickViewController, MMAssetPickerController, MMSightCameraViewController, MMImagePickerManagerOptionObj, UIViewController, MMUIButton;
@protocol NewLifeImagePickViewControllerDelegate;

@interface NewLifeImagePickViewController : MMUIViewController <MMAssetPickerControllerDelegate, MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate, WCAlbumPickViewControllerDelegate, MMAssetPickerControllerExt, MMUIViewControllerExt>

@property (retain, nonatomic) UIView *tabView;
@property (retain, nonatomic) MMUIButton *currentTabBtn;
@property (retain, nonatomic) UIViewController *currentTabVc;
@property (retain, nonatomic) MMUIButton *albumTabBtn;
@property (retain, nonatomic) MMUIButton *timelineBtn;
@property (retain, nonatomic) MMUIButton *sightTabBtn;
@property (retain, nonatomic) UINavigationController *albumViewController;
@property (retain, nonatomic) MMAssetPickerController *assetPickViewController;
@property (retain, nonatomic) UINavigationController *timelineViewController;
@property (retain, nonatomic) WCAlbumPickViewController *timelineAlbumViewController;
@property (retain, nonatomic) UINavigationController *sightViewController;
@property (retain, nonatomic) MMSightCameraViewController *sightPickViewController;
@property (nonatomic) unsigned long long selectTimelinePhotoCount;
@property (nonatomic) unsigned long long isEnterSubView;
@property (weak, nonatomic) id<NewLifeImagePickViewControllerDelegate> delegate;
@property (nonatomic) BOOL fullSelection;
@property (nonatomic) unsigned long long limitCount;
@property (nonatomic) unsigned long long initSelectTabIndex;
@property (nonatomic) long long enterScene;
@property (retain, nonatomic) NSString *postSessionId;
@property (nonatomic) unsigned int mode;
@property (retain, nonatomic) MMImagePickerManagerOptionObj *albumOptionObj;
@property (retain, nonatomic) MMImagePickerManagerOptionObj *timelineOptionObj;
@property (retain, nonatomic) MMImagePickerManagerOptionObj *sightOptionObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)initSelectFirstTab;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)updateLayout;
- (BOOL)isSingleSelection;
- (void)MMUIViewControllerWillPushOrPresent:(id)a0;
- (void)MMUIViewControllerWillPopOrDismiss:(id)a0;
- (void)onTapAlbumTabBtn;
- (void)onTapTimelineBtn;
- (void)onTapSightTabBtn;
- (void)jumpToEditorWithAssets:(id)a0;
- (void)jumpToEditorWithLocalPaths:(id)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)onQuit;
- (void)onSelectionItemNumberChanged:(unsigned long long)a0;
- (void)onJumpCustomEditViewController:(id)a0;
- (void)onAssetPickerControllerChangeSelectInfo:(id)a0 index:(long long)a1;
- (void)onSightPictureTaken:(id)a0 imageData:(id)a1 withFrontCamera:(BOOL)a2 editImageAttr:(id)a3;
- (void)onSightCameraViewControllerStartEditing;
- (void)onSightCameraViewControllerEndEditing;
- (void)enterSubView:(BOOL)a0;
- (void)updateTabBar;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
