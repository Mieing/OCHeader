@class NSString, NSDictionary, UIImageView, UILabel;

@interface AWEAIGCRetryNotSupportViewController : UIViewController <AWERouterViewControllerProtocol>

@property (copy, nonatomic) NSDictionary *enterParams;
@property (retain, nonatomic) UIImageView *tipsImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)trackShow;
- (void)handleBackDismiss;
- (void)realTrackShow;
- (void)fetchTaskInfoAndTrackShow:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
