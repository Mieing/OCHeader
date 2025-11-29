@class AFDRoundedView, UIView, NSString, UIImageView, UIButton, DUXPopover, AWEPublishPrivacyTableViewCellViewModel, UILabel;
@protocol AWEPublishPrivacyTableViewCellDelegate;

@interface AWEPublishPrivacyTableViewCell : UITableViewCell <DUXPopoverDelegate, AWEPublishPrivacyTableViewCellProtocol>

@property (retain, nonatomic) AWEPublishPrivacyTableViewCellViewModel *viewModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *editButton;
@property (retain, nonatomic) UIButton *tipsButton;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) long long scene;
@property (retain, nonatomic) AFDRoundedView *containerView;
@property (nonatomic) BOOL isPopOverShowing;
@property (retain, nonatomic) DUXPopover *popover;
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

- (void)popoverDidDisappear:(id)a0;
- (void)awe_themeDidChange:(long long)a0;
- (void)bindViewModel:(id)a0;
- (void)setupCorners;
- (void)updateSelected:(BOOL)a0;
- (void)p_setupCommonUI;
- (void)showBottomLine:(BOOL)a0;
- (void)bindWithType:(unsigned long long)a0 isSelected:(BOOL)a1 isNewStory:(BOOL)a2 permissionType:(long long)a3 scene:(long long)a4;
- (BOOL)shouldShowPublicTipsButton;
- (id)contentTitleUsingPrivacyPermissionConfig;
- (void)updateEditButtonWithShow:(BOOL)a0;
- (void)tipsButtonTapped:(id)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)popoverWillAppear:(id)a0;
- (void)editButtonTapped:(id)a0;
- (void)layoutSubviews;
- (id)contentTitle;

@end
