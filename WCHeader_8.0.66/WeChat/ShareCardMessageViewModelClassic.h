@class CCardContact, NSString, BizNameCardProtectedInfo;

@interface ShareCardMessageViewModelClassic : CommonMessageViewModel {
    CCardContact *m_sharedContact;
    NSString *m_sharedUsername;
    NSString *m_sharedNickname;
}

@property (retain, nonatomic) BizNameCardProtectedInfo *protectedInfo;
@property (readonly, nonatomic) CCardContact *sharedContact;
@property (readonly, nonatomic) NSString *sharedUsername;
@property (readonly, nonatomic) NSString *sharedNickname;
@property (readonly, nonatomic) BOOL isShowUsername;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (void)reloadData;
- (id)cellViewClassName;
- (id)getPostfixNameIcon;
- (BOOL)isChatBot;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)additionalAccessibilityDescription;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (BOOL)shouldShowCertificationFlag;
- (BOOL)shouldShowPersonalVerifyIdentity;
- (id)certificationImage;
- (id)personalVerifyIdentity;
- (void)onMessageForceUpdateLayout;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)getReferImage;
- (void).cxx_destruct;

@end
