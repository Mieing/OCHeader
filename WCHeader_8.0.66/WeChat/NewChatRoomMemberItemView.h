@class MMHeadImageView, CContact, MMCPLabel, UIImageView, UIColor, NSString, UIButton;
@protocol NewChatRoomMemberItemViewDelegate;

@interface NewChatRoomMemberItemView : MMUIView {
    UIButton *m_addMemberBtn;
    UIButton *m_deleteMemberBtn;
    UIButton *m_actionBtn;
    MMHeadImageView *m_headImageView;
    MMCPLabel *m_labelDisplayName;
    MMCPLabel *m_labelSubDesc;
    UIImageView *m_trackIcon;
    UIButton *m_smallDeleteBtn;
    UIImageView *m_chatBotIcon;
    SEL m_updateItemViewForDeleteSel;
    BOOL m_bDeleteStatus;
    UIColor *m_textColor;
    BOOL m_noDisplayName;
    NSString *m_cpKeyForNickname;
    NSString *m_cpKeyForChatRoomDisplayName;
    BOOL m_isNickNameUnsafe;
    BOOL m_isChatRoomDisplayNameUnsafe;
}

@property (weak, nonatomic) id<NewChatRoomMemberItemViewDelegate> m_delegate;
@property (retain, nonatomic) CContact *m_contact;
@property (retain, nonatomic) CContact *m_groupContact;
@property (nonatomic) unsigned int m_uiIndex;
@property (nonatomic) unsigned int m_scence;
@property (readonly) double m_fLeftMargin;
@property (readonly) double m_fRightMargin;
@property (nonatomic) BOOL wrapItemAccessibilityElement;
@property (nonatomic) BOOL isShowOpenIMTypeInGroupContact;

- (void)OnClickHeadImage;
- (void)OnClickDeleteBtn;
- (void)shakeHeadForType:(unsigned long long)a0;
- (id)headImageView;
- (void)updateContact;
- (void)updateAddItemViewForDelete;
- (void)updateDeleteItemViewForDelete;
- (void)updateContactItemViewForDelete;
- (void)updateItemViewForDelete:(BOOL)a0;
- (void)setTextColor:(id)a0 shadowColor:(id)a1;
- (void)updateOpenim;
- (void)showTrackFlag;
- (void)handleLongPressEx:(id)a0;
- (void)updateAtIndexEx:(unsigned long long)a0 withColumn:(unsigned long long)a1;
- (void)hiddenAllSubViews;
- (void)updateWithContactEx:(id)a0 atIndex:(unsigned long long)a1 withColumn:(unsigned long long)a2;
- (void)updateWithAddMemberBtnAtIndexEx:(unsigned long long)a0 withColumn:(unsigned long long)a1;
- (void)updateWithDeleteMemberBtnAtIndexEx:(unsigned long long)a0 withColumn:(unsigned long long)a1;
- (void)updateContactItemSubview;
- (id)initViewInChatRoomProfile;
- (id)initViewInChatRoomProfile:(double)a0 nameSize:(double)a1;
- (void)setNoDisplayName:(BOOL)a0;
- (void)updateCPState;
- (BOOL)isDisplayNameUnsafe;
- (void).cxx_destruct;

@end
