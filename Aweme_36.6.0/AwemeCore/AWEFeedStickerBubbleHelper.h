@class AWEFeedStickerBubbleConfig, AWEAwemeModel, UIView, ACCStickerContainerView, UIButton;
@protocol AWEInteractiveBubbleViewProtocol, AWEFeedStickerBubbleHelperDelegate;

@interface AWEFeedStickerBubbleHelper : NSObject

@property (nonatomic) BOOL bubbling;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) UIButton<AWEInteractiveBubbleViewProtocol> *bubbleView;
@property (retain, nonatomic) AWEFeedStickerBubbleConfig *currentConfig;
@property (weak, nonatomic) UIView *bubbleContainer;
@property (weak, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) ACCStickerContainerView *stickerContainer;
@property (weak, nonatomic) id<AWEFeedStickerBubbleHelperDelegate> delegate;

- (void)showBubbleAtPoint:(struct CGPoint { double x0; double x1; })a0 config:(id)a1;
- (void)dismissBubbleAnimated:(BOOL)a0;
- (void)p_buildBubbleView:(struct CGPoint { double x0; double x1; })a0;
- (void)p_clickOnBubbleView;
- (BOOL)disableBubblePauseWithConfig:(id)a0;
- (void)p_setBubbleVisible:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)isPointOnBubble:(struct CGPoint { double x0; double x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })customEdgeInset;
- (void)hideBubbleView;
- (BOOL)handleBubbleEventOnPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
