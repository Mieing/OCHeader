@interface WCImageSearchCameraViewController : MMSightCameraViewController <MMImagePickerManagerDelegate>

@property (nonatomic, weak) void /* unknown type, empty encoding */ searchDelegate;

- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidPush:(BOOL)a0;
- (void)viewDidPresent:(BOOL)a0;
- (BOOL)useTransparentNavibar;
- (BOOL)hidesStatusBar;
- (void)closeAfterDone;
- (void)showImagePicker;
- (id)toolbarBtnOrder;
- (id)initWithCameraMode:(unsigned long long)a0 scene:(int)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
