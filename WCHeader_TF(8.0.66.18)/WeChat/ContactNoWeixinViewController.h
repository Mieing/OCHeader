@class NSArray, NSString, CBaseContact, UIView, QZoneLoginStatus, UIButton;

@interface ContactNoWeixinViewController : MMUIViewController <MFMessageComposeViewControllerDelegate, WCActionSheetDelegate, QZoneLoginStatusDelegate> {
    UIView *m_TipsView;
    CBaseContact *m_contact;
    UIButton *m_btn;
    UIView *m_headerView;
    QZoneLoginStatus *m_qzone;
}

@property (retain, nonatomic) NSArray *m_arrMobiles;
@property (retain, nonatomic) NSString *m_googleImageUrl;
@property (nonatomic) unsigned long long m_searchScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)Call;
- (void)OnQQAction:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (id)getInfoDisplayName;
- (id)getInfoDetailText;
- (id)getQQUsrName;
- (id)getInfoUsrName;
- (void)initDetailInfoView;
- (void)showAlert:(id)a0;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (BOOL)isShowInviteBtn;
- (void)initTipsWordView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithContact:(id)a0;
- (void)onQZoneUrl:(id)a0;
- (void).cxx_destruct;

@end
