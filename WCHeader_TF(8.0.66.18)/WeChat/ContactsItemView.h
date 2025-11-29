@class NSString, AttributeLabel, MMHeadImageView, SearchMatchTip, UIImageView, UIButton, MMCPLabel, TextStateItemView, MMUIImageView, CContact, UILabel, MMImageView;
@protocol ContactsItemViewDelegate;

@interface ContactsItemView : MMUIView {
    UILabel *m_labelNamePostfix;
    MMImageView *m_iconNamePostfix;
    AttributeLabel *m_descLabel;
    UIButton *m_rightButton;
    UILabel *m_rightLabel;
    NSString *m_cpKeyForNickname;
    BOOL m_isNicknameUnsafe;
    TextStateItemView *m_textStateView;
    MMUIImageView *m_rightViewPrefixIcon;
}

@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIButton *descExpandButton;
@property (nonatomic) double cachedNickNameMinMaxWidth;
@property (retain, nonatomic) NSString *postfixText;
@property (retain, nonatomic) NSString *truncatedPostfixText;
@property (retain, nonatomic) MMCPLabel *m_nickNameLabel;
@property (retain, nonatomic) MMHeadImageView *m_headImage;
@property (nonatomic) BOOL m_bShowHeadImage;
@property (weak, nonatomic) id<ContactsItemViewDelegate> m_delegate;
@property (retain, nonatomic) id m_data;
@property (retain, nonatomic) CContact *m_contact;
@property (nonatomic) BOOL m_bShowUserDescription;
@property (nonatomic) BOOL m_bShowChatRoomCount;
@property (nonatomic) BOOL m_bShowChatRoomFriendCount;
@property (nonatomic) BOOL m_bHideOpenIMDesc;
@property (nonatomic) BOOL m_bShowOpenIMPostfixIcon;
@property (nonatomic) BOOL m_bShowOpenIMPostfixIconBeforeNamePostfixLabel;
@property (nonatomic) BOOL m_bShowMobileDisplayName;
@property (nonatomic) double m_nickNameDiffWidth;
@property (nonatomic) BOOL m_bShowSearchResult;
@property (retain, nonatomic) SearchMatchTip *m_matchTip;
@property (nonatomic) BOOL bShowTextState;
@property (nonatomic) BOOL bShowRightArrow;
@property (nonatomic) BOOL bUseMultiLineDescLabel;
@property (nonatomic) BOOL bDescLabelIsExpand;
@property (nonatomic) double descLabelMarginRight;
@property (nonatomic) BOOL bShowOpenIMKeFuDesc;

- (id)init;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)initHeadImage:(id)a0 withUrl:(id)a1;
- (void)initHeadImage:(id)a0;
- (void)initHeadImageForContact:(id)a0;
- (BOOL)isShowMobileName:(id)a0 mobileName:(id)a1;
- (void)initView:(id)a0;
- (void)initView:(id)a0 showChatRoomName:(id)a1;
- (void)showChatRoomMemberContactsItemView:(id)a0 chatContact:(id)a1;
- (void)initNamePostfixLabel:(id)a0 color:(id)a1;
- (void)initNamePostfixLabel:(id)a0 color:(id)a1 truncatedText:(id)a2;
- (void)initNamePostfixLabel:(id)a0;
- (void)initNamePostfixIcon;
- (void)updateMatchLabel;
- (double)calNameMaxWidth;
- (void)initNickNameLabel:(id)a0;
- (void)initRightLabel:(id)a0 color:(id)a1 width:(double)a2;
- (void)initRightLabel:(id)a0;
- (void)onRightBtnAction;
- (void)initRightButton:(id)a0 title:(id)a1;
- (void)initGreyRightButton:(id)a0;
- (void)initGreenRightButton:(id)a0;
- (void)initDescLabel:(id)a0 color:(id)a1;
- (void)onTapExpandButton:(id)a0;
- (void)initDescLabel:(id)a0;
- (void)initRightViewPrefixIcon:(id)a0;
- (id)accessibilityLabel;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
