@class UIImageView, UIImage, UILabel, UIButton;
@protocol MMAuthorizeViewControllerDelegate;

@interface MMLoginExceptionCheckViewController : MMUIViewController

@property (retain, nonatomic) UIImage *alertImage;
@property (retain, nonatomic) UIImageView *alertImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *comfirmButton;
@property (retain, nonatomic) UIButton *denyButton;
@property (weak, nonatomic) id<MMAuthorizeViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (BOOL)shouldInteractivePop;
- (void)initSubViews;
- (void)viewDidLayoutSubviews;
- (void)layoutSubviews;
- (void)onSafeCheckViewClickedConfirm;
- (void)onSafeCheckViewClickedDeny;
- (void)onClose;
- (void).cxx_destruct;

@end
