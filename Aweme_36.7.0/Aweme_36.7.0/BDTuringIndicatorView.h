@class UIView, NSString, UIImage, BDTuringWaitingView, UIImageView, UIButton, UILabel, BDTuringIndicatorContentView;

@interface BDTuringIndicatorView : UIView

@property (nonatomic) long long indicatorStyle;
@property (retain, nonatomic) UILabel *indicatorTextLabel;
@property (retain, nonatomic) UIImageView *indicatorImageView;
@property (retain, nonatomic) BDTuringWaitingView *indicatorWaitingView;
@property (retain, nonatomic) UIButton *dismissButton;
@property (retain, nonatomic) BDTuringIndicatorContentView *contentView;
@property (weak, nonatomic) UIView *parentView;
@property (copy, nonatomic) NSString *indicatorText;
@property (copy, nonatomic) UIImage *indicatorImage;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (nonatomic) BOOL isUserDismiss;
@property (nonatomic) long long supportMaxLine;
@property (nonatomic) double expectedWidth;
@property (nonatomic) BOOL showDismissButton;
@property (nonatomic) BOOL autoDismiss;
@property (nonatomic) double dismissDelay;
@property (nonatomic) double duration;

+ (float)OSVersionNumber;
+ (id)_defaultParentView;
+ (void)showWithIndicatorStyle:(long long)a0 indicatorText:(id)a1 indicatorImage:(id)a2 autoDismiss:(BOOL)a3 dismissHandler:(id /* block */)a4;
+ (void)dismissIndicators;
+ (void)showWithIndicatorStyle:(long long)a0 indicatorText:(id)a1 indicatorImage:(id)a2 maxLine:(long long)a3 autoDismiss:(BOOL)a4 dismissHandler:(id /* block */)a5;
+ (void)showWithIndicatorStyle:(long long)a0 indicatorText:(id)a1 indicatorImage:(id)a2 maxLine:(long long)a3 expectedWidth:(double)a4 autoDismiss:(BOOL)a5 dismissHandler:(id /* block */)a6;
+ (double)heightOfText:(id)a0 fontSize:(double)a1 forWidth:(double)a2 forLineHeight:(double)a3 constraintToMaxNumberOfLines:(long long)a4 firstLineIndent:(double)a5 textAlignment:(long long)a6;
+ (double)heightOfText:(id)a0 fontSize:(double)a1 forWidth:(double)a2 forLineHeight:(double)a3 constraintToMaxNumberOfLines:(long long)a4 firstLineIndent:(double)a5 textAlignment:(long long)a6 lineBreakMode:(long long)a7;
+ (struct CGSize { double x0; double x1; })sizeOfText:(id)a0 fontSize:(double)a1 forWidth:(double)a2 forLineHeight:(double)a3 constraintToMaxNumberOfLines:(long long)a4 firstLineIndent:(double)a5 textAlignment:(long long)a6 lineBreakMode:(long long)a7;
+ (id)_attributesWithFontSize:(double)a0 lineHeight:(double)a1 lineBreakMode:(long long)a2 isBoldFontStyle:(BOOL)a3 firstLineIndent:(double)a4 textAlignment:(long long)a5;
+ (void)showIndicatorForTextMessage:(id)a0;

- (void)initSubViews;
- (id)initWithIndicatorStyle:(long long)a0 indicatorText:(id)a1 indicatorImage:(id)a2 dismissHandler:(id /* block */)a3;
- (void)_layoutIndicatorImageViewWithImage:(id)a0;
- (void)_layoutIndicatorLabelWithText:(id)a0;
- (BOOL)_needShowWaitingView;
- (void)_dismissAllCurrentIndicators;
- (void)_dismissAllCurrentIndicatorsOnParentView:(id)a0 animated:(BOOL)a1;
- (void)dismissByUser;
- (void)makeRotationTransformOnIOS7;
- (void)layoutContentSubViewsOnIOS7;
- (void)dismissFromParentView;
- (void)showFromParentView:(id)a0;
- (void)_dismissFromParentViewAnimated:(BOOL)a0;
- (void)updateIndicatorWithText:(id)a0 shouldRemoveWaitingView:(BOOL)a1;
- (void)updateIndicatorWithImage:(id)a0;
- (void)observeStatusBarOrientationChanged:(id)a0;
- (id)initWithIndicatorStyle:(long long)a0 indicatorText:(id)a1 indicatorImage:(id)a2 maxLine:(long long)a3 dismissHandler:(id /* block */)a4;
- (id)initWithIndicatorStyle:(long long)a0 indicatorText:(id)a1 indicatorImage:(id)a2 maxLine:(long long)a3 expectedWidth:(double)a4 dismissHandler:(id /* block */)a5;
- (BOOL)p_needTransform;
- (void)rotateContentForInterfaceOrientation:(long long)a0;
- (void)showFromParentView:(id)a0 offset:(struct UIOffset { double x0; double x1; })a1;
- (double)indicatorMaxWidth;
- (id)getLoadingUIImage;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (id)getBundle;

@end
