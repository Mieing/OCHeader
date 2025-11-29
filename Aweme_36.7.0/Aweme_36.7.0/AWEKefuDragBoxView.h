@class UIViewPropertyAnimator, UIView, AWEKefuAvatarView, AWEKefuBubbleView;
@protocol AWEKefuDragBoxViewDelegate;

@interface AWEKefuDragBoxView : UIView

@property (retain, nonatomic) AWEKefuBubbleView *bubbleView;
@property (retain, nonatomic) AWEKefuAvatarView *avatarView;
@property (retain, nonatomic) UIView *infoView;
@property (nonatomic) BOOL isExpanded;
@property (retain, nonatomic) UIViewPropertyAnimator *showBubbleAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *showInfoViewAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *hideBubbleAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *hideInfoViewAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *changeBubbleAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *changeInfoViewAnimator;
@property (weak, nonatomic) id<AWEKefuDragBoxViewDelegate> delegate;
@property (nonatomic) unsigned long long expandDirection;

- (void)p_cancelAllAnimation;
- (void)startVolumeAnimation:(double)a0;
- (void)p_loadBubbleView;
- (void)p_loadAvatarView;
- (void)p_clearInfoView;
- (void)p_layoutInfoView;
- (void)p_layoutBubbleWithExpandState:(BOOL)a0 infoView:(id)a1;
- (struct CGSize { double x0; double x1; })p_bubbleSizeWithInfoView:(id)a0;
- (void)p_layoutInfoView:(id)a0;
- (void)p_layoutBubbleWithExpandState:(BOOL)a0;
- (void)updateAvatarWithUrlString:(id)a0;
- (BOOL)addInfoView:(id)a0;
- (BOOL)removeInfoView:(id)a0;
- (void)startExpandAnimationWithCompletion:(id /* block */)a0;
- (void)startFoldAnimationWithCompletion:(id /* block */)a0;
- (void)startChangeInfoViewAnimation:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;

@end
