@class UIFont, AWEIMMessage, UIImageView, NSString, UIView, YYLabel;

@interface AWEIMGroupNoticeModifyMessageTableViewCell : AWEIMUserMessageTableViewCell <AWEIMGradientBubbleProtocol>

@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIImageView *icon;
@property (readonly, nonatomic) AWEIMMessage *message;
@property (readonly, nonatomic) UIView *gradientBubbleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bubbleContentPaddingInsets;
+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (struct CGSize { double x0; double x1; })contentSizeWithMessage:(id)a0 maxWidth:(double)a1;
+ (double)lineMargin;
+ (id)identifier;

- (void)chatBackgroundDidChangeNty:(id)a0;
- (void)configWithMessage:(id)a0;
- (id)bubbleShapeView;
- (id)menuTargetView;
- (void)p_updateBubbleLayer;
- (void)layoutSubviewsWithMessage:(id)a0 sendFromMe:(BOOL)a1;
- (void)addForwardMsgResource;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;
- (id)bubbleLayer;

@end
