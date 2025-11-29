@class UIView, NSString, AWEMRSubscribeManageCellConfig, UIImageView, AWEMRSubscribeManageContainerView, DUXSwitch, AWEMRSubscribeManageOptionCard, MASConstraint, UILabel, DUXDivider;

@interface AWEMRSubscribeManageCell : UICollectionViewCell <AWEMRSubscribeManageContainerViewDelegate>

@property (retain, nonatomic) AWEMRSubscribeManageContainerView *containerView;
@property (retain, nonatomic) UIView *topContainer;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UIView *titleContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *detailContainer;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *detailImageView;
@property (retain, nonatomic) DUXSwitch *aSwitch;
@property (retain, nonatomic) UIView *bottomContainer;
@property (retain, nonatomic) AWEMRSubscribeManageOptionCard *leftOptionCard;
@property (retain, nonatomic) AWEMRSubscribeManageOptionCard *rightOptionCard;
@property (retain, nonatomic) DUXDivider *divider;
@property (retain, nonatomic) MASConstraint *titleContainerLeftToSuperView;
@property (retain, nonatomic) MASConstraint *titleContainerLeftToImageView;
@property (retain, nonatomic) MASConstraint *titleContainerRightToDetailContainer;
@property (retain, nonatomic) MASConstraint *titleContainerRightToSwitch;
@property (retain, nonatomic) MASConstraint *titleContainerBottomToTitleLabel;
@property (retain, nonatomic) MASConstraint *titleContainerBottomToSubTitleLabel;
@property (retain, nonatomic) AWEMRSubscribeManageCellConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)estimatedHeightForSingleLineExpanded;
+ (double)estimatedHeightForSingleLineFolded;
+ (id)subTitleFont;

- (void)setupLayouts;
- (void)setupBinding;
- (void)p_updateLayout;
- (void)p_updateVisibility;
- (void)topContainerDidClick;
- (void)containerViewDidLayoutSubviews:(id)a0;
- (void)switchValueDidChangeTo:(BOOL)a0;
- (void)leftOptionValueDidChange;
- (void)rightOptionValueDidChange;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (BOOL)isExpanded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)expand;
- (void)fold;

@end
