@class UITapGestureRecognizer, AWEIMMessage, UIView, YYLabel;
@protocol AWEIMTextQuoteMessageProtocol;

@interface AWEIMNoticeQuickReplyTableViewCell : AWEIMUserMessageTableViewCell

@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UIView *highlightMaskView;
@property (retain, nonatomic) UIView *quoteReplyLineView;
@property (retain, nonatomic) YYLabel *quoteReplyLabel;
@property (retain, nonatomic) UITapGestureRecognizer *quoteTapGestureRecognizer;
@property (retain, nonatomic) AWEIMMessage<AWEIMTextQuoteMessageProtocol> *quoteMessage;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)imageDisplayAttributedStringForMsg:(id)a0;
+ (id)quoteReplyHintWithMesasge:(id)a0;
+ (struct CGSize { double x0; double x1; })contentSizeWithMesasgeCore:(id)a0;
+ (struct CGSize { double x0; double x1; })quoteReplySizeWithMesasge:(id)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bubbleContentPaddingInsetsWithMesasge:(id)a0;
+ (id)identifier;

- (void)awe_themeDidChange:(long long)a0;
- (void)chatBackgroundDidChangeNty:(id)a0;
- (void)bubbleViewTapped:(id)a0;
- (void)configWithMessage:(id)a0;
- (id)bubbleShapeView;
- (id)menuTargetView;
- (id)gestureResponseViews;
- (void)p_updateBubbleLayer;
- (void)configWithMessageCore:(id)a0;
- (void)layoutSubviews:(BOOL)a0 bubbleNotWrappedHeight:(double)a1;
- (void)__tapQuoteReplyLabelWithGesture:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;
- (id)bubbleLayer;

@end
