@class MMUILabel, NSString, CContact, MMImageView, MMHeadImageView;

@interface ChatRoomUpgradeOpenIMViewController : ChatRoomBaseUpgradeOpenIMViewController <MMAcceptAgreementResultViewControllerDelegate, ILinkEventExt, IGroupMgrExt> {
    MMHeadImageView *m_headImageView;
    MMUILabel *m_nickNameTextLabel;
    MMImageView *m_namePostIconView;
    NSString *m_titleText;
    NSString *m_contentText;
    NSString *m_topTitleText;
}

@property (retain, nonatomic) CContact *m_chatRoomContact;
@property (nonatomic) unsigned int m_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)initData;
- (void)addContentSubView;
- (void)viewWillLayoutSubviews;
- (void)layoutView;
- (void)resetLayoutViewPosition;
- (void)layoutHeadView;
- (void)layoutTitleTextView;
- (void)doIAccept;
- (void)onCancel;
- (void)onClickMakeSureActionWithViewController:(id)a0;
- (void)OnUpgradeAssociateChatRoom:(id)a0 withTicket:(id)a1 withResult:(unsigned int)a2 errorMsg:(id)a3;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)reportUpgradeChatRoomOperateWithGroupUserName:(id)a0 upgradeChatRoomOperateResult:(unsigned int)a1 upgradeChatRoomShowSystemMessageTyp:(unsigned int)a2;
- (id)m_titleText;
- (void)setM_titleText:(id)a0;
- (id)m_contentText;
- (void)setM_contentText:(id)a0;
- (id)m_topTitleText;
- (void)setM_topTitleText:(id)a0;
- (void).cxx_destruct;

@end
