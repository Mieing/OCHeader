@class UILabel, UIButton;

@interface AWEIMInviteChangeChatBgConfirmPopupView : AWEIMBasePopupView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *changeMyselfBtn;
@property (retain, nonatomic) UIButton *inviteToChangeBtn;
@property (nonatomic) BOOL isGroupChat;
@property (copy, nonatomic) id /* block */ changeMyselfAction;
@property (copy, nonatomic) id /* block */ inviteToChangeAction;

- (void)p_createPopupView;
- (void)p_changeBgSelfOnly;
- (void)p_inviteToChange;
- (void)showPopupViewWithChatType:(BOOL)a0;
- (void).cxx_destruct;

@end
