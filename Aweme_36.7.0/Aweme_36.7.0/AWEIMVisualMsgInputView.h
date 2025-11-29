@class UIButton;

@interface AWEIMVisualMsgInputView : UIView

@property (nonatomic) unsigned long long actions;
@property (retain, nonatomic) UIButton *sendMessageBtn;
@property (retain, nonatomic) UIButton *emojiBtn;
@property (retain, nonatomic) UIButton *cameraBtn;
@property (retain, nonatomic) UIButton *likeBtn;
@property (retain, nonatomic) UIButton *locateGroupChatContentBtn;
@property (copy, nonatomic) id /* block */ tapSend;
@property (copy, nonatomic) id /* block */ tapEmoji;
@property (copy, nonatomic) id /* block */ tapCamera;
@property (copy, nonatomic) id /* block */ tapLike;
@property (copy, nonatomic) id /* block */ tapLocateGroupChatContent;

- (void)updateLikeStatusWithIsLike:(BOOL)a0;
- (void)updateCameraWithStyle:(unsigned long long)a0;
- (void)updateSendButtonNormalText:(id)a0;
- (void)updateActions:(unsigned long long)a0;
- (void)updateSendButtonText:(id)a0;
- (void)tapSendMessageView:(id)a0;
- (void)tapEmojiButton:(id)a0;
- (void)tapCameraBtn:(id)a0;
- (void)tapLikeBtn:(id)a0;
- (void)tapLocateGroupChatContentBtn:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
