@class NSString, MMLiveTaskId, WCFinderGameLiveListViewController, UIView, NSMutableArray;
@protocol MMFinderLiveStarterChooseGameSearchDelegate;

@interface WCFinderLiveStarterChooseGameSearchPanelView : MMPageSheetBaseView <WCFinderGameLiveListViewControllerDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) WCFinderGameLiveListViewController *gameListViewController;
@property (retain, nonatomic) MMLiveTaskId *liveTaskId;
@property (retain, nonatomic) NSMutableArray *gameUserInfoList;
@property (nonatomic) BOOL showSearch;
@property (weak, nonatomic) id<MMFinderLiveStarterChooseGameSearchDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 gameUserInfoList:(id)a1 showSearch:(BOOL)a2 contentViewHeight:(double)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)onMMLiveStarterViewControllerStartGameLiveWithViewModel:(id)a0 currentController:(id)a1;
- (void)onMMLiveStarterViewControllerRepoortWithActionType:(unsigned long long)a0 gameId:(id)a1;
- (void)leftButtonAction;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (void).cxx_destruct;

@end
