@class UIStackView, UIImageView, UILabel, UIView;

@interface BDARGrantToastView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *scoreTextLabel;
@property (retain, nonatomic) UILabel *titleTextLabel;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } toastInsets;

+ (void)showToastWithScoreText:(id)a0 titleText:(id)a1 iconUrl:(id)a2;

- (void)configureWithURL:(id)a0 scoreText:(id)a1 titleText:(id)a2;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)hideAnimated:(BOOL)a0;
- (void)showAnimated:(BOOL)a0;

@end
