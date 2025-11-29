@class AWELeftSideBarAISearchDataModel, AWELeftSideBarAISearchContainerView;

@interface AWELeftSideBarAISearchPresenter : AWELeftSideBarBasePresenter

@property (retain, nonatomic) AWELeftSideBarAISearchContainerView *containerView;
@property (retain, nonatomic) AWELeftSideBarAISearchDataModel *dataModel;
@property (nonatomic) double containerViewHeight;

- (void)leftSideBarViewDynamicModuleRequestDataComplete:(id)a0 isCacheData:(BOOL)a1;
- (id)initWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)onLeftSideBarOpen;
- (id)getEnterFrom;
- (void)setupContainerView;
- (BOOL)enableSearchAIHomeLeftSideBar;
- (id)getGroupID;
- (void)jumpToAIGCResultPage:(id)a0 customTransitionType:(id)a1 extraParams:(id)a2;
- (void)clickAISearchContainer:(long long)a0;
- (void).cxx_destruct;

@end
