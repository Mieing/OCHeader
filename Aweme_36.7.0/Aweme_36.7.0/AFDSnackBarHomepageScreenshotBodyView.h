@class UIImageView, UILabel, AFDSnackBarHomepageScreenshotBodyViewConfig, UIButton;

@interface AFDSnackBarHomepageScreenshotBodyView : UIView

@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) AFDSnackBarHomepageScreenshotBodyViewConfig *config;

- (void)confirmButtonDidClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupUI;

@end
