@class AWEIMMessage, NSString, UIView, YYLabel;

@interface AWEIMXLiteInteractionMessageTableViewCell : AWEIMUserMessageTableViewCell <AWEIMGradientBubbleProtocol>

@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (readonly, nonatomic) AWEIMMessage *message;
@property (readonly, nonatomic) UIView *gradientBubbleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)configWithMessage:(id)a0;
- (id)bubbleShapeView;
- (id)menuTargetView;
- (void)p_updateBubbleLayer;
- (BOOL)menuViewRectContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;
- (id)bubbleLayer;

@end
