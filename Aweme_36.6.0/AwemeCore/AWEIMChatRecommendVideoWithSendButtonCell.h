@class DUXButton;

@interface AWEIMChatRecommendVideoWithSendButtonCell : AWEIMChatRecommendVideoCollectionViewCell

@property (retain, nonatomic) DUXButton *sendButton;
@property (retain, nonatomic) DUXButton *chatButton;

- (void)configWithModel:(id)a0;
- (void)showGotoChatButton;
- (void)p_sendButtonClicked:(id)a0;
- (void)p_chatButtonClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupButton;

@end
