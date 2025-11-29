@class UIStackView, UIImageView, UILabel, UIView, NSMutableArray;

@interface CJPayDouyinLoadingView : UIView

@property (retain, nonatomic) UIView *hudView;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *showView;
@property (retain, nonatomic) UIStackView *dotStackView;
@property (retain, nonatomic) NSMutableArray *dotViews;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (nonatomic) BOOL isLoading;

+ (void)dismissWithAnimated:(BOOL)a0;
+ (id)showWindowLoadingWithTitle:(id)a0 animated:(BOOL)a1 afterDelay:(double)a2;
+ (id)sharedView;
+ (id)showLoadingOnView:(id)a0 title:(id)a1 animated:(BOOL)a2 afterDelay:(double)a3;
+ (id)showLoadingOnView:(id)a0 title:(id)a1 subTitle:(id)a2 icon:(id)a3 animated:(BOOL)a4 afterDelay:(double)a5;
+ (id)showLoadingOnView:(id)a0 title:(id)a1 icon:(id)a2 animated:(BOOL)a3 afterDelay:(double)a4;
+ (id)showLoadingWithView:(id)a0 onView:(id)a1;
+ (id)showMessageWithTitle:(id)a0 subTitle:(id)a1;

- (void)allowUserInteraction:(BOOL)a0;
- (void)p_showLoadingOnView:(id)a0 title:(id)a1 animated:(BOOL)a2;
- (void)p_showLoadingOnView:(id)a0;
- (void)p_showLoadingOnView:(id)a0 title:(id)a1 icon:(id)a2 animated:(BOOL)a3;
- (void)p_showLoadingOnView:(id)a0 title:(id)a1 subTitle:(id)a2 icon:(id)a3 animated:(BOOL)a4;
- (void)p_dismissWithAnimated:(BOOL)a0;
- (void)p_setupUI;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setIcon:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSubTitle:(id)a0;

@end
