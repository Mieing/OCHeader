@class UIImageView, UIView, MMUIButton, MMUILabel;

@interface MiniTaskTextPreviewController : TextFloatViewController

@property (retain, nonatomic) UIView *shadowBgView;
@property (retain, nonatomic) MMUIButton *sourceButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onClickSourceButton:(id)a0;
- (BOOL)useTransparentNavibar;
- (void).cxx_destruct;

@end
