@class UIStackView, UIView, AWESocialRelationObserver, NSString, UIImageView, UIButton, DUXCheckBox, AWEPublishPrivacyTableViewCellViewModel, UILabel;
@protocol AWEPublishPrivacyTableViewCellDelegate;

@interface AWEPublishPrivacyMateIsolateTableViewCell : UITableViewCell <AFDHalfScreenDelegate, AWEPublishPrivacyTableViewCellProtocol>

@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) long long scene;
@property (retain, nonatomic) AWEPublishPrivacyTableViewCellViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *smallIconImageView;
@property (retain, nonatomic) UIButton *titleButton;
@property (retain, nonatomic) UIStackView *titleStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *rightArrowImageView;
@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWESocialRelationObserver *mateCountObserver;
@property (nonatomic) long long mateCount;
@property (retain, nonatomic) AWESocialRelationObserver *closeFriendsCountObserver;
@property (nonatomic) long long closeFriendsCount;
@property (nonatomic) long long permissionType;
@property (nonatomic) BOOL isNewStory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long cornerType;
@property (weak, nonatomic) id<AWEPublishPrivacyTableViewCellDelegate> delegate;

+ (double)heightWithCellType:(unsigned long long)a0;
+ (id)identifier;

- (void)awe_themeReload;
- (void)updateIconImage;
- (void)bindViewModel:(id)a0;
- (void)halfScreenDismissalDidEnd;
- (void)showBottomLine:(BOOL)a0;
- (void)setupMateCountObserverIfNeeded;
- (void)setupCloseFriendCountObserverIfNeeded;
- (void)updateTitleViewUsingPrivacyPermissionConfig;
- (id)getPermissionConfigStringForKey:(id)a0;
- (BOOL)p_showNotMateCanSeeSetting;
- (id)attributedStringForSubtitleWithTextAndRightArrow:(id)a0;
- (id)getConfigStringForKey:(id)a0;
- (void)onTitleTapped;
- (void)bindWithType:(unsigned long long)a0 isSelected:(BOOL)a1 isNewStory:(BOOL)a2 permissionType:(long long)a3 scene:(long long)a4;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateRightView;
- (void)setupUI;
- (void)setupLayout;
- (void)updateTitleView;

@end
