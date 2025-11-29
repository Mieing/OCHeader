@class WCFinderCameraViewModel, MMImagePickerManagerOptionObj;

@interface MMMusicCameraViewController : MMSightCameraViewController <MMImagePickerManagerDelegate>

@property (retain, nonatomic) MMImagePickerManagerOptionObj *optionObj;
@property (nonatomic) double curVideoDuration;
@property (nonatomic) double videoDurationLimit;
@property (retain, nonatomic) WCFinderCameraViewModel *viewModel;

- (id)initWithCameraMode:(unsigned long long)a0 scene:(int)a1 andVideoDurationLimit:(double)a2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidPush:(BOOL)a0;
- (void)viewDidPresent:(BOOL)a0;
- (BOOL)hidesStatusBar;
- (BOOL)useTransparentNavibar;
- (void)changeCameraCaptureSessionToRun:(BOOL)a0;
- (void)closeAfterDone;
- (void)onMovieCompressFinished:(id)a0;
- (void).cxx_destruct;

@end
