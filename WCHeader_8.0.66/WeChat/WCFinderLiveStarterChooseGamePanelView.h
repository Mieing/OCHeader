@class MMFinderLiveGameUserInfo, WCFinderTabPageView, UIView, NSArray, WCFinderLiveStarterChooseGameSearchPanelView, MMLiveTaskId, NSString, NSMutableArray, WCFinderGameLiveListViewController;
@protocol MMFinderLiveStarterChooseGameDelegate;

@interface WCFinderLiveStarterChooseGamePanelView : MMPageSheetBaseView <WCFinderGameLiveListViewControllerDelegate, MMFinderLiveStarterChooseGameSearchDelegate, WCFinderTabPageViewDataSource, WCFinderTabPageViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) WCFinderGameLiveListViewController *gameListViewController;
@property (retain, nonatomic) MMLiveTaskId *liveTaskId;
@property (retain, nonatomic) NSMutableArray *gameUserInfoList;
@property (nonatomic) BOOL showSearch;
@property (retain, nonatomic) WCFinderLiveStarterChooseGameSearchPanelView *searchPanelView;
@property (retain, nonatomic) MMFinderLiveGameUserInfo *selectGameUserInfo;
@property (retain, nonatomic) WCFinderTabPageView *tabPageView;
@property (retain, nonatomic) NSArray *gameCategoryList;
@property (weak, nonatomic) id<MMFinderLiveStarterChooseGameDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithTaskId:(id)a0 gameCategoryList:(id)a1 gameUserInfoList:(id)a2 showSearch:(BOOL)a3 selectGameUserInfo:(id)a4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)onMMLiveStarterViewControllerStartGameLiveWithViewModel:(id)a0 currentController:(id)a1;
- (void)onMMLiveStarterViewControllerRepoortWithActionType:(unsigned long long)a0 gameId:(id)a1;
- (void)pageSheetWillAppear;
- (void)leftButtonAction;
- (void)onSearchAction;
- (void)createSearchPanelView;
- (void)onHeaderAction;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (void).cxx_destruct;

@end
