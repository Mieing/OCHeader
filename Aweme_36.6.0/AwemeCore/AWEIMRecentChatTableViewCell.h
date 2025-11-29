@class UIView, NSString, UIImageView, AWEIMShareModel, IESIMContactPickerRelationTagView, IESIMUserNameLabel, UILabel, UIColor;
@protocol AWEIMStreakDisplayManagerProtocol;

@interface AWEIMRecentChatTableViewCell : UITableViewCell <AWEIMStreakDisplayManagerDelegate, AWEIMTableViewCellProtocol>

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) IESIMUserNameLabel *nameLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIView *imStreakView;
@property (retain, nonatomic) UIImageView *verifiedLogoView;
@property (retain, nonatomic) UIImageView *selectStateImageView;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) IESIMContactPickerRelationTagView *relationTag;
@property (nonatomic) BOOL needDifferentCountLabelColor;
@property (retain, nonatomic) UIView *onlineDotView;
@property (copy, nonatomic) NSString *uniqueFlag;
@property (nonatomic) unsigned long long updateCount;
@property (nonatomic) unsigned long long userPrivacyGetAliasScene;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) unsigned long long streakScene;
@property (retain, nonatomic) AWEIMShareModel *shareModel;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (copy, nonatomic) id /* block */ trackShowConsecutiveChatBlock;
@property (retain, nonatomic) UIColor *preferBackgroundColor;
@property (retain, nonatomic) id<AWEIMStreakDisplayManagerProtocol> imStreakDisplayManager;
@property (nonatomic) BOOL isMultiselect;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isSearching;
@property (nonatomic) unsigned long long uiStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultImageWithWH:(double)a0 uiStyle:(unsigned long long)a1;
+ (id)identifier;

- (id)awe_imImageNamed:(id)a0;
- (void)changeToMultiselect:(BOOL)a0;
- (void)changeToMultiselect:(BOOL)a0 animated:(BOOL)a1;
- (void)changeToSelect:(BOOL)a0;
- (unsigned long long)customIMStreakTextPreferThemeV2;
- (void)asyncDidUpdateIMStreakView;
- (BOOL)hitStreakUpdateExp;
- (void)updateActiveStatusWithShareModel:(id)a0;
- (void)p_addHighlightToAttributedString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 uiStyle:(unsigned long long)a2;
- (void)p_layoutMultiSelect;
- (void)layoutBaseViewContent;
- (void)updateCellRelationTag:(id)a0;
- (void)updateUserPrivacyGetAliasScene:(unsigned long long)a0;
- (void)configWithShareModel:(id)a0 couldSelected:(BOOL)a1 needDifferentCountLabelColor:(BOOL)a2 conversationID:(id)a3 streakScene:(unsigned long long)a4;
- (void)updateConsecutiveChatStatusWithShareModel:(id)a0;
- (void)p_updateUIWithShareModel:(id)a0 couldSelected:(BOOL)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (id)colorNamed:(id)a0;

@end
