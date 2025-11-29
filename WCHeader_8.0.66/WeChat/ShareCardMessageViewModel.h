@class CCardContact, NSString, BizNameCardProtectedInfo;

@interface ShareCardMessageViewModel : AppStandardAccountContentMessageViewModel {
    CCardContact *m_sharedContact;
    NSString *m_sharedUsername;
    NSString *m_sharedNickname;
}

@property (retain, nonatomic) BizNameCardProtectedInfo *protectedInfo;
@property (readonly, nonatomic) CCardContact *sharedContact;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (void)reloadData;
- (id)cellViewClassName;
- (id)additionalAccessibilityDescription;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)accountName;
- (id)accountDesc;
- (id)descColor;
- (id)descIcon;
- (id)accountSuffix;
- (id)descIconUrl;
- (id)sharedUsername;
- (BOOL)isChatBot;
- (BOOL)isShowUsername;
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
