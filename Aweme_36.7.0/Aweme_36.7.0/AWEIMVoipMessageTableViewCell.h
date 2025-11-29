@class AWEIMMessage, UIImageView, NSString, UIView, UILabel, YYLabel;

@interface AWEIMVoipMessageTableViewCell : AWEIMUserMessageTableViewCell <AWEIMGradientBubbleProtocol>

@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UIView *enhancedContentView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *mainTitle;
@property (retain, nonatomic) UILabel *subTitle;
@property (readonly, nonatomic) AWEIMMessage *message;
@property (readonly, nonatomic) UIView *gradientBubbleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bubbleContentPaddingInsets;
+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (unsigned long long)p_cellStyleWithMessage:(id)a0;
+ (double)maxWidthWithMessage:(id)a0;
+ (struct CGSize { double x0; double x1; })textSizeWithText:(id)a0;
+ (id)identifier;

- (void)chatBackgroundDidChangeNty:(id)a0;
- (void)bubbleViewTapped:(id)a0;
- (void)configWithMessage:(id)a0;
- (id)bubbleShapeView;
- (id)menuTargetView;
- (id)gestureResponseViews;
- (void)p_updateBubbleLayer;
- (BOOL)menuViewRectContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)p_configEnhancedContentViewWithMessage:(id)a0;
- (struct CGSize { double x0; double x1; })p_bubbleSize;
- (void)layoutSubviews:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;
- (id)bubbleLayer;

@end
