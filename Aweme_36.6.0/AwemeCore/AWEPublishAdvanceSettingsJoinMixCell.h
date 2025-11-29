@class AFDRoundedView, NSString, UIView, AWEPublishAdvanceSettingsJoinMixItem, UIImageView, AWEPostPageMixManager, UILabel, NSIndexPath;
@protocol AWEPublishAdvanceSettingsCellDelegate;

@interface AWEPublishAdvanceSettingsJoinMixCell : UITableViewCell <AWEPostPageMixManagerProtocol, AWEPublishAdvanceSettingsCellProtocol>

@property (retain, nonatomic) AWEPublishAdvanceSettingsJoinMixItem *item;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *introLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) AFDRoundedView *containerView;
@property (retain, nonatomic) AWEPostPageMixManager *manager;
@property (nonatomic) unsigned long long cornerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) id<AWEPublishAdvanceSettingsCellDelegate> delegate;
@property (copy, nonatomic) id /* block */ onSwitcherToggledBlock;

+ (double)cellHeight;

- (void)awe_themeDidChange:(long long)a0;
- (void)setupCorners;
- (void)showBottomLine:(BOOL)a0;
- (void)onCellClicked;
- (void)updateViewWithControlEnabled:(BOOL)a0;
- (void)updateWithMixInfo:(id)a0;
- (void)updateWithMixModel:(id)a0;
- (void)cancelJoinMix;
- (void)AWEPostPageMixManager:(id)a0 currentMixDidChangeWith:(id)a1 placeHolder:(id)a2;
- (void)AWEPostPageMixManager:(id)a0 needRefreshCreateTitleWithPlaceHolder:(id)a1;
- (id)currentPublishConfig;
- (void)p_updateUIWith:(id)a0;
- (void)mixInformationDidTappedIndex:(long long)a0 mix:(id)a1;
- (BOOL)isAccessibilityElement;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (unsigned long long)accessibilityTraits;
- (void)setupManager;
- (void)layoutSubviews;
- (void)setupUI;

@end
