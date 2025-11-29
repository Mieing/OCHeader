@interface AWENewVideoCoverEditViewController : AWENewCoverEditViewController

@property (nonatomic) BOOL cutRatioVertical;

- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
