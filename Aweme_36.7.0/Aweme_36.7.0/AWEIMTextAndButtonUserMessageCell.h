@class UIButton, AWEIMMessage, NSString, UIView, YYLabel;

@interface AWEIMTextAndButtonUserMessageCell : AWEIMUserMessageTableViewCell <AWEIMGradientBubbleProtocol>

@property (retain, nonatomic) UIView *bubbleBGView;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UIView *dividerLine;
@property (retain, nonatomic) UIButton *button;
@property (readonly, nonatomic) AWEIMMessage *message;
@property (readonly, nonatomic) UIView *gradientBubbleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (double)bubbleViewHeightWithMessage:(id)a0;
+ (double)contentHeightWithMessage:(id)a0;
+ (double)dividerLineHeight;
+ (double)buttonHeight;

- (id)buttonModel;
- (void)chatBackgroundDidChangeNty:(id)a0;
- (void)configWithMessage:(id)a0;
- (id)menuTargetView;
- (unsigned long long)cachedButtonState;
- (BOOL)isButtonExpired;
- (void)cacheWithButtonState:(unsigned long long)a0;
- (void)setUpButtonWithModel:(id)a0;
- (id)defaultMenuItems;
- (void)layoutBubbleBgView;
- (void)layoutContentLabel;
- (void)layoutButton;
- (void)layoutDividerLine;
- (id)textAndButtonMessage;
- (void)p_updateBubbleColor;
- (void)setDividerLineColor;
- (void)p_updateBubbleColorForReceiver;
- (void).cxx_destruct;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;
- (void)buttonTapped;

@end
