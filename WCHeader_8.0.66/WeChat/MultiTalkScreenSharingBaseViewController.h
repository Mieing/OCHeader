@class WCFileBrowseInfo, NSURL, UIView, UIViewController;

@interface MultiTalkScreenSharingBaseViewController : MMUIViewController

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *contentMaskView;
@property (retain, nonatomic) UIViewController *targetViewController;
@property (retain, nonatomic) WCFileBrowseInfo *fileBrowseInfo;
@property (retain, nonatomic) NSURL *fileURL;
@property (nonatomic) BOOL showsCancelBarButtonItem;
@property (nonatomic) BOOL showsOrientationLockedToast;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)didSetTargetViewController:(id)a0;
- (void)addTargetViewIfNeeded;
- (void)removeTargetViewIfNeeded;
- (void)cancelBarButtonItemDidClick:(id)a0;
- (void)startOrientationDetection;
- (void)endOrientationDetection;
- (void)showOrientationLockedToast;
- (void)rotationDetectorRoationDidChange:(id)a0;
- (void).cxx_destruct;

@end
