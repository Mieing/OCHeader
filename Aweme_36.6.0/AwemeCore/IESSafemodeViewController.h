@class UIView;

@interface IESSafemodeViewController : UIViewController

@property (retain, nonatomic) UIView *alertView;
@property (retain, nonatomic) UIView *progressView;

- (void)showProgressView;
- (void)startClean;
- (void)showCleanAlert;
- (void)exitApp;
- (void)showFinishView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)confirmTapped:(id)a0;
- (void)cancelTapped:(id)a0;

@end
