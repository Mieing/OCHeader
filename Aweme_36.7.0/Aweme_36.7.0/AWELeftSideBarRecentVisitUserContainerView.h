@class AWELeftSideBarRecentVisitUserCellConfig, AWELeftSideBarDynamicUserDataModel, UIView, NSMutableArray, AWELeftSideBarRecentVisitHeaderView;
@protocol AWELeftSideBarRecentVisitUserContainerViewDelegate;

@interface AWELeftSideBarRecentVisitUserContainerView : UIView

@property (retain, nonatomic) AWELeftSideBarDynamicUserDataModel *model;
@property (retain, nonatomic) AWELeftSideBarRecentVisitUserCellConfig *config;
@property (nonatomic) BOOL needAnimation;
@property (retain, nonatomic) NSMutableArray *cells;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWELeftSideBarRecentVisitHeaderView *headerView;
@property (weak, nonatomic) id<AWELeftSideBarRecentVisitUserContainerViewDelegate> delegate;

- (void)leftSideBarThemeDidChange:(long long)a0;
- (id)getLeftSideBarTrackParamsForBusiness:(id)a0;
- (void)showContainerReloadAnimation;
- (void)updateWithConfig:(id)a0 model:(id)a1;
- (id)p_getHeaderViewClickSchema;
- (void)p_clickAllButtonWithSchema:(id)a0;
- (unsigned long long)p_realDisplayCellCount;
- (void)clickCellWithItemModel:(id)a0 schema:(id)a1 index:(long long)a2;
- (unsigned long long)p_maxDisplayCellCount;
- (BOOL)p_shouldUpdateCellsLayoutConstraintWithNewConfig:(id)a0;
- (void)p_updateCellsLayoutConstraint;
- (void)p_updateCellByIndex:(long long)a0;
- (void)layoutCells:(long long)a0;
- (void)p_logLayoutInfo;
- (id)initWithConfig:(id)a0 model:(id)a1 delegate:(id)a2;
- (void)startCellsAnimationIfNeeded;
- (void)stopCellsAnimationIfNeeded;
- (id)createVisitCellWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
