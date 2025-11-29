@class MMWebImageView, MMImageView, UIImageView, UILabel, ShareCardMessageViewModelClassic, MMUILabel;

@interface ShareCardMessageCellViewClassic : CommonMessageCellView {
    UILabel *m_nicknameLabel;
    UILabel *m_usernameLabel;
    MMWebImageView *m_iconNamePrefix;
    MMImageView *m_iconNamePostfix;
}

@property (retain, nonatomic) UIImageView *certificationImageView;
@property (retain, nonatomic) MMUILabel *personalVerifyIdentityLabel;
@property (readonly, nonatomic) ShareCardMessageViewModelClassic *viewModel;

- (BOOL)canBeReused;
- (void)layoutContentView;
- (void)initNicknameLabel;
- (void)initIconNamePostfixWithIcon:(id)a0;
- (void)initUsernameLabel;
- (void)initIconNamePostfix;
- (void)initCertificationImageView;
- (void)setCertificationImageViewFrame;
- (void)initPersonalVerifyIdentityLabel;
- (void)updatePersonalVerifyIdentityLabel;
- (id)operationMenuItems;
- (BOOL)isOpenIMChat;
- (BOOL)isOpenIMKefuChat;
- (void)onForward:(id)a0;
- (void)onTouchUpInside;
- (void).cxx_destruct;

@end
