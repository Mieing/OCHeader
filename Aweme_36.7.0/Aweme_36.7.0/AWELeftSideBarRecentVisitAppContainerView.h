@class AWELeftSideBarDynamicDataAppModel, NSMutableArray, AWELeftSideBarRecentVisitMicroAppBannerView, AWELeftSideBarRecentVisitAppCellConfig, UIView, MASConstraint, AWELeftSideBarRecentVisitHeaderView;
@protocol AWELeftSideBarRecentVisitAppContainerViewDelegate;

@interface AWELeftSideBarRecentVisitAppContainerView : UIView

@property (retain, nonatomic) AWELeftSideBarRecentVisitAppCellConfig *config;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MASConstraint *contentViewBottomConstraint;
@property (retain, nonatomic) AWELeftSideBarRecentVisitHeaderView *headerView;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) AWELeftSideBarDynamicDataAppModel *model;
@property (retain, nonatomic) NSMutableArray *cells;
@property (retain, nonatomic) UIView *bottomMicroAppBannerContainerView;
@property (retain, nonatomic) AWELeftSideBarRecentVisitMicroAppBannerView *bottomMicroAppBannerView;
@property (weak, nonatomic) id<AWELeftSideBarRecentVisitAppContainerViewDelegate> delegate;

+ (double)microAppBottomViewHeight;

- (void)leftSideBarThemeDidChange:(long long)a0;
- (id)getLeftSideBarTrackParamsForBusiness:(id)a0;
- (void)showContainerReloadAnimation;
- (id)leftSideBarRecentVisitAppContainerViewGetLeftSideBarIdentification:(id)a0;
- (void)updateWithConfig:(id)a0 model:(id)a1;
- (void)p_updateSpecialAppView;
- (id)p_getHeaderViewClickSchema;
- (void)p_clickAllButtonWithSchema:(id)a0;
- (void)p_setupBottomContainerSubviews;
- (unsigned long long)p_realDisplayCellCount;
- (id)p_createVisitCellWithIndex:(long long)a0;
- (void)clickCellWithItemModel:(id)a0 schema:(id)a1 index:(long long)a2;
- (double)p_cellExtraRightAreaWithCellWidth:(double)a0 isLastOfLine:(BOOL)a1;
- (unsigned long long)p_maxDisplayCellCount;
- (BOOL)p_shouldUpdateCellsLayoutConstraintWithNewConfig:(id)a0;
- (void)p_updateCellsLayoutConstraint;
- (void)p_updateCellByIndex:(long long)a0;
- (void)layoutCells:(long long)a0;
- (void)p_logLayoutInfo;
- (id)initWithConfig:(id)a0 model:(id)a1 delegate:(id)a2;
- (void)startCellsAnimationIfNeeded;
- (void)stopCellsAnimationIfNeeded;
- (id)recentVisitAppCellWithAppID:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
