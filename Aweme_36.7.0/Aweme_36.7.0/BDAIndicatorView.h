@class BDAIndicatorContentView, NSString, UIImageView, BDAWaitingView, UILabel, UIView, UIImage;

@interface BDAIndicatorView : UIView

@property (nonatomic) long long indicatorStyle;
@property (retain, nonatomic) UILabel *indicatorTextLabel;
@property (retain, nonatomic) UIImageView *indicatorImageView;
@property (retain, nonatomic) BDAWaitingView *indicatorWaitingView;
@property (retain, nonatomic) BDAIndicatorContentView *contentView;
@property (retain, nonatomic) UIView *parentView;
@property (copy, nonatomic) NSString *indicatorText;
@property (copy, nonatomic) UIImage *indicatorImage;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (nonatomic) BOOL isUserDismiss;
@property (nonatomic) BOOL autoDismiss;

+ (id)_defaultParentView;
+ (void)showWithIndicatorStyle:(long long)a0 indicatorText:(id)a1 indicatorImage:(id)a2 autoDismiss:(BOOL)a3 dismissHandler:(id /* block */)a4;
+ (void)dismissIndicators;

- (void)initSubViews;
- (id)initWithIndicatorStyle:(long long)a0 indicatorText:(id)a1 indicatorImage:(id)a2 dismissHandler:(id /* block */)a3;
- (void)_layoutIndicatorImageViewWithImage:(id)a0;
- (void)_layoutIndicatorLabelWithText:(id)a0;
- (BOOL)_needShowWaitingView;
- (void)observeStatusBarOrientationChanged;
- (void)showInView:(id)a0 exclusive:(BOOL)a1 animationType:(long long)a2;
- (void)_dismissAllCurrentIndicators;
- (void)dismissAnimated:(BOOL)a0 delay:(double)a1 duration:(double)a2;
- (void)_dismissAllCurrentIndicatorsOnParentView:(id)a0 animated:(BOOL)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (void)dismissAnimated:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)show;
- (void)showInView:(id)a0;

@end
