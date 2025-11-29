@class NSString, UIImageView, DUXBaseStackView, UILabel, AWEGradientView, UIView;

@interface AWEIMPublishQuickStoryGuidView : UIView <UIGestureRecognizerDelegate, AWEIMPublishGuidViewProtocol>

@property (readonly, nonatomic) UILabel *mainLabel;
@property (readonly, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (nonatomic) double leftMargin;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (nonatomic) BOOL shouldRespondEvent;
@property (retain, nonatomic) DUXBaseStackView *titleStackView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *view;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (void)p_addSubviews;
- (void)p_setupLayout;
- (void)p_dismiss;
- (void)updateArrowViewCenterXWithView:(id)a0;
- (id)initWithTitle:(id)a0 subTitle:(id)a1 leftMargin:(double)a2;
- (void)disableRespondEvent;
- (void)p_initWithTitle:(id)a0 subTitle:(id)a1;
- (void)p_updateTextAligment:(unsigned long long)a0;
- (void)p_initSubviewsWithTitle:(id)a0 subTitle:(id)a1;
- (void)detectTouchEventOnSelf:(id)a0;
- (void)enableRespondEvent;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)setBottomInset:(double)a0;
- (void)updateStyle:(unsigned long long)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
