@class NSString, UIImageView, UIView, UIButton;

@interface AWECommentAreaAuthorizationViewController : UIViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (nonatomic) BOOL authorizationState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeAuthorization:(id)a0;
- (void)closeButtonDidClick:(id)a0;
- (void)openAuthorization:(id)a0;
- (void)closeViewByMethod:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)updateUI;
- (void)tapGestureHandler:(id)a0;

@end
