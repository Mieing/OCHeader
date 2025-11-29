@class MMUIScrollView, UIImageView, NSString, UILabel, UIButton;

@interface NewLifePrivateContentViewController : MMUIViewController

@property (retain, nonatomic) MMUIScrollView *backgroundView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) NSString *message;

- (void)viewDidLoad;
- (BOOL)shouldInteractivePop;
- (BOOL)useTransparentNavibar;
- (void)initLayout;
- (id)titleText;
- (void)onTapConfirmButton;
- (void).cxx_destruct;

@end
