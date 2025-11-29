@class UIImageView, UIButton, IESLiveChatChannelGreetView;

@interface IESLiveChatChannelCommentButton : UIView

@property (retain, nonatomic) UIImageView *commentBg;
@property (retain, nonatomic) UIButton *commentBtn;
@property (retain, nonatomic) UIButton *emojiBtn;
@property (retain, nonatomic) IESLiveChatChannelGreetView *greetView;
@property (copy, nonatomic) id /* block */ buttonClick;
@property (copy, nonatomic) id /* block */ emojiClick;

- (void)didSetAttachingDIContext;
- (void)showCommentPanel;
- (void)switchCommentButtonStatus:(long long)a0;
- (void)resetInnerButtonAccessibilityWithTitle:(id)a0;
- (void)tryReportGreetBuriedPoint;
- (void)showCommentEmojiPanel;
- (void)disableClickGreetView:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
