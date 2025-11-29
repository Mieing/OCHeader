@class UITapGestureRecognizer, NSString, CContact, MMUIView, MMUIButton, MMHeadImageView;

@interface NewChatRoomInvitationMultiMenuTableViewCell : ChatRoomInvitationMultiMenuTableViewCell <ILinkEventExt> {
    CContact *m_inviterContact;
    double m_nickNameSuffixWidth;
    NSString *m_nsInviteesNickName;
    NSString *m_nsInviteesNickNameSuffix;
}

@property (retain, nonatomic) MMUIView *invitedHeadImageContainView;
@property (retain, nonatomic) MMHeadImageView *invitedFirstHeadImageView;
@property (retain, nonatomic) MMHeadImageView *invitedSecondHeadImageView;
@property (retain, nonatomic) MMHeadImageView *invitedHeadImageView;
@property (retain, nonatomic) MMUIButton *nickNameButton;
@property (retain, nonatomic) UITapGestureRecognizer *headImageTapGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initView;
- (void)initData;
- (void)initInvitedHeadImage;
- (void)initNickNameView;
- (void)makeCellForInvitationWrap:(id)a0;
- (void)setupLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)doApplyLayout;
- (id)modifyReason:(id)a0;
- (id)getHasApprovedLabelFont;
- (id)getTitleString;
- (id)getInviteeNickNameString;
- (Class)getChatRoomInvitationCellQuitRoomInfoViewClass;
- (id)getInviteeNickNameStringInArea:(double)a0;
- (void)onClickHeadImageView;
- (void)onTapMultiPersonHeadImage;
- (void)onClickNickNameButton:(id)a0;
- (void)resetNickNameButtonSelect;
- (void)openContactProfile;
- (void)showContactListPageSheet;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
