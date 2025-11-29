@class UIFont, NSString, UIImageView, WCProgressCircleView, UIView, UILabel, UIColor;

@interface WCProgressMaskView : UIView

@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) WCProgressCircleView *progressCircleView;
@property (retain, nonatomic) UIImageView *progressIconView;
@property (retain, nonatomic) UILabel *progressLabel;
@property (nonatomic) struct CGSize { double width; double height; } progressCircleViewSize;
@property (nonatomic) double contentMarginTopRate;
@property (retain, nonatomic) NSString *currentLabelText;
@property (nonatomic) double labelTextMarginTop;
@property (retain, nonatomic) UIFont *labelTextFont;
@property (retain, nonatomic) UIColor *labelTextColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)showInfinity;
- (void)showInfinityWithText:(id)a0;
- (void)showForProgress:(double)a0;
- (void)showForProgress:(double)a0 withText:(id)a1;
- (void)showForProgress:(double)a0 withText:(id)a1 byStepMode:(long long)a2;
- (void)dismiss;
- (void)dismissAtProgress:(double)a0;
- (void)dismissWithText:(id)a0 forType:(long long)a1;
- (void)dismissWithText:(id)a0 forType:(long long)a1 atProgress:(double)a2;
- (void)dismissWithText:(id)a0 forType:(long long)a1 atProgress:(double)a2 afterDelayMS:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)_dismissWithText:(id)a0 forType:(long long)a1 afterDelayMS:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)setProgressSize:(struct CGSize { double x0; double x1; })a0;
- (void)setProgressBorderWidth:(double)a0;
- (void)setProgressFrontColor:(id)a0;
- (void)setProgressBackColor:(id)a0;
- (void)updateProgressInfoByType:(long long)a0;
- (double)maxTextWidth;
- (void)resizeView;
- (void)resetDefaultStyle;
- (void)initView;
- (void).cxx_destruct;

@end
