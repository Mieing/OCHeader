@class NSString, UIActivityIndicatorView, APBDTFUploadToastView;
@protocol IBioAuthTask;

@interface DTFBaseViewController : UIViewController

@property (nonatomic) BOOL isRotation;
@property (retain, nonatomic) APBDTFUploadToastView *uploadView;
@property (nonatomic) BOOL isClose;
@property (retain, nonatomic) NSString *platformInfo;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (weak, nonatomic) id<IBioAuthTask> currentTask;

- (void)dismissLoadingView;
- (void)exitWithResult:(int)a0 failReason:(id)a1 retCodeSub:(id)a2 retMessageSub:(id)a3;
- (void)addWebGuideView:(id)a0;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (id)init;
- (BOOL)shouldAutorotate;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)showLoadingView;

@end
