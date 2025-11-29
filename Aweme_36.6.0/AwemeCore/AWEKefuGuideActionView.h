@class DUXPopover, NSTimer, AWEKefuGuideActionModel, UIView, BDImageView;

@interface AWEKefuGuideActionView : UIView

@property (nonatomic) BOOL closeUICorrection;
@property (retain, nonatomic) AWEKefuGuideActionModel *model;
@property (nonatomic) long long showTimeMs;
@property (nonatomic) long long animationRepeatCount;
@property (retain, nonatomic) BDImageView *effectView;
@property (retain, nonatomic) UIView *bubbleTargetView;
@property (retain, nonatomic) DUXPopover *bubbleView;
@property (copy, nonatomic) id /* block */ autoDismissCallBack;
@property (retain, nonatomic) NSTimer *autoDismissTimer;

- (void)p_stopTimer;
- (void)p_dismiss;
- (void)p_startTimerIfNeed;
- (void)p_layoutUI;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_adjustRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toFitInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)generateEffectImageViewWithModel:(id)a0;
- (id)p_generateBubbleViewWithModel:(id)a0 target:(id)a1;
- (id)initWithActionModel:(id)a0 closeUICorrection:(BOOL)a1;
- (void)showWithAutoDismissCallBack:(id /* block */)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;

@end
