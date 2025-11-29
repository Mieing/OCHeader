@class NSString, UIImageView;

@interface SharePreConfirmSuccessView : MMUIWindow {
    UIImageView *m_backgroundView;
    long long m_previousOrientation;
}

@property (retain, nonatomic) NSString *sendSuccessText;
@property (retain, nonatomic) NSString *backToAppString;
@property (retain, nonatomic) NSString *stayAtWeChatString;
@property (copy, nonatomic) id /* block */ OnClickBackToApp;
@property (copy, nonatomic) id /* block */ OnClickStayAtWeChat;

- (void)internalInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)showView:(BOOL)a0;
- (void)hideView:(BOOL)a0;
- (id)genBackgroundView;
- (void)showSendSuccessView;
- (void)notifySendMsgOK;
- (void)stayAtWeChat;
- (void).cxx_destruct;

@end
