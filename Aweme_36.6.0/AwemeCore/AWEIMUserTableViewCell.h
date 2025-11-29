@class UIView, NSString, AWEIMDUXTextTagContainer, UIColor, UIImageView, IESIMContactPickerRelationTagView, IESIMUserNameLabel, AWEIMUser, UILabel;
@protocol AWEIMStreakDisplayManagerProtocol;

@interface AWEIMUserTableViewCell : UITableViewCell <AWEIMStreakDisplayManagerDelegate, AWEIMTableViewCellProtocol>

@property (retain, nonatomic) UILabel *awemeUpdateCountLabel;
@property (retain, nonatomic) UIImageView *selectStateImageView;
@property (retain, nonatomic) UIView *onlineDotView;
@property (copy, nonatomic) NSString *uniqueFlag;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIView *imStreakView;
@property (retain, nonatomic) IESIMContactPickerRelationTagView *relationTag;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) unsigned long long updateCount;
@property (nonatomic) unsigned long long userPrivacyGetAliasScene;
@property (retain, nonatomic) AWEIMDUXTextTagContainer *tagContainer;
@property (nonatomic) unsigned long long streakScene;
@property (retain, nonatomic) AWEIMUser *user;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) IESIMUserNameLabel *nameLabel;
@property (retain, nonatomic) UIImageView *verifiedLogoView;
@property (retain, nonatomic) UIView *baseView;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (nonatomic) double nameLabelFixedWidth;
@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) id<AWEIMStreakDisplayManagerProtocol> imStreakDisplayManager;
@property (copy, nonatomic) id /* block */ trackShowConsecutiveChatBlock;
@property (nonatomic) BOOL isMultiselect;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isSearching;
@property (nonatomic) unsigned long long uiStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (id)awe_imImageNamed:(id)a0;
- (void)changeToMultiselect:(BOOL)a0;
- (void)changeToMultiselect:(BOOL)a0 animated:(BOOL)a1;
- (void)changeToSelect:(BOOL)a0;
- (id)customIMStreakTextFont;
- (void)asyncDidUpdateIMStreakView;
- (BOOL)hitStreakUpdateExp;
- (void)updateConsecutiveChatStatusWithModel:(id)a0;
- (void)configWithUser:(id)a0 coversatinID:(id)a1 awemeUpdateCount:(unsigned long long)a2 couldSelected:(BOOL)a3 streakScene:(unsigned long long)a4;
- (void)updateActiveStatusWithUserModel:(id)a0;
- (void)p_addHighlightToAttributedString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 uiStyle:(unsigned long long)a2;
- (void)p_layoutMultiSelect;
- (void)layoutBaseViewContent;
- (void)__tryUpdateTagUI;
- (BOOL)p_isSelf;
- (void)updateCellRelationTag:(id)a0;
- (void)updateUserPrivacyGetAliasScene:(unsigned long long)a0;
- (BOOL)p_isVerifiedUser:(id)a0;
- (id)p_verifyBadgeImage;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshUI;
- (void)layoutSubviews;
- (id)colorNamed:(id)a0;

@end
