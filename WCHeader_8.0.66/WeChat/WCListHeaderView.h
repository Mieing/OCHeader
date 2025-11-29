@class MMUIViewController, TLProfileNicknameContainerView, NSString, MMHeadImageView, UIImageView, MMCPLabel, UITableView, CContact, UILabel;
@protocol WCListHeaderViewDelegate;

@interface WCListHeaderView : MMUIView <IContactMgrExt, WCActionSheetDelegate, WCFacadeExt> {
    CContact *m_contact;
    BOOL m_isMyWC;
    MMCPLabel *m_signatureLabel;
    UILabel *m_totalCountLabel;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } oBackgroundImageRect;
    double m_fLastY;
    NSString *m_cpKeyForNickname;
    NSString *m_cpKeyForSignature;
    BOOL m_isNicknameUnsafe;
    BOOL m_isSignatureUnsafe;
}

@property (retain, nonatomic) TLProfileNicknameContainerView *nicknameContainerView;
@property (nonatomic) BOOL m_showSignature;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_bkgRect;
@property (nonatomic) BOOL shouldAddShadowView;
@property (weak, nonatomic) MMUIViewController *viewController;
@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MMHeadImageView *m_headImageView;
@property (retain, nonatomic) UILabel *m_nickLabel;
@property (retain, nonatomic) MMCPLabel *m_infoLabel;
@property (retain, nonatomic) UIImageView *m_bkgMaskView;
@property (retain, nonatomic) UIImageView *m_backgroundImageView;
@property (weak, nonatomic) id<WCListHeaderViewDelegate> m_delegate;
@property (nonatomic) long long homepageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateframe;
- (void)initView;
- (void)initNicknameContainerView;
- (id)initWithContact:(id)a0 bkgRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)reloadContactLabels;
- (void)showContactInfo;
- (void)reloadBackGround;
- (void)showChangeBkgOption;
- (void)updateListHeaderView;
- (void)updateListHeaderViewWithContact:(id)a0;
- (void)onModifyContact:(id)a0;
- (void)onWCBackgroundChanged;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (id)behaviourInfoSession;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndScroll:(id)a0;
- (void)updateCPState;
- (void).cxx_destruct;

@end
