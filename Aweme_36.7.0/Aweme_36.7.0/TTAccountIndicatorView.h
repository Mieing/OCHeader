@class UIView, NSString, UIImage, TTAccountWaitingView, UIImageView, UIButton, __TTAIndicatorContentView__, UILabel;

@interface TTAccountIndicatorView : UIView

@property (nonatomic) long long indicatorStyle;
@property (nonatomic) BOOL isUserDismiss;
@property (retain, nonatomic) UIView *parentView;
@property (retain, nonatomic) UILabel *indicatorTextLabel;
@property (retain, nonatomic) UIImageView *indicatorImageView;
@property (retain, nonatomic) UIButton *dismissButton;
@property (retain, nonatomic) TTAccountWaitingView *indicatorWaitingView;
@property (retain, nonatomic) __TTAIndicatorContentView__ *contentView;
@property (copy, nonatomic) NSString *indicatorText;
@property (retain, nonatomic) UIImage *indicatorImage;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (nonatomic) BOOL showDismissButton;
@property (nonatomic) BOOL autoDismiss;

+ (void)showWithIndicatorStyle:(long long)a0 indicatorText:(id)a1 indicatorImage:(id)a2 autoDismiss:(BOOL)a3 dismissHandler:(id /* block */)a4;
+ (void)dismissIndicators;
+ (id)indicatorWindow;
+ (struct CGSize { double x0; double x1; })tta_sizeOfText:(id)a0 fontSize:(double)a1 forWidth:(double)a2 forLineHeight:(double)a3 constraintToMaxNumberOfLines:(long long)a4 firstLineIndent:(double)a5 textAlignment:(long long)a6;
+ (void)dismissIndicatorsWithView:(id)a0;

- (void)initSubViews;
- (id)initWithIndicatorStyle:(long long)a0 indicatorText:(id)a1 indicatorImage:(id)a2 dismissHandler:(id /* block */)a3;
- (void)_layoutIndicatorImageViewWithImage:(id)a0;
- (void)_layoutIndicatorLabelWithText:(id)a0;
- (BOOL)_needShowWaitingView;
- (void)_dismissAllCurrentIndicators;
- (void)_dismissAllCurrentIndicatorsOnParentView:(id)a0 animated:(BOOL)a1;
- (void)dismissByUser;
- (void)statusBarOrientationDidChange;
- (void)makeRotationTransformOnIOS7;
- (void)layoutContentSubViewsOnIOS7;
- (void)dismissFromParentView;
- (void)showFromParentView:(id)a0;
- (void)_dismissFromParentViewAnimated:(BOOL)a0;
- (void)updateIndicatorWithText:(id)a0 shouldRemoveWaitingView:(BOOL)a1;
- (void)updateIndicatorWithImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
