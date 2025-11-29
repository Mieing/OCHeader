@class AWEAwemeModel, NSString, NSDictionary, AWEPageContext, AWERelatedRecomendPanelViewController, AWERelatedRecomendDetailBottomView, AWEUILoadingView;

@interface AWERelatedRecomendDetailViewController : AWEAwemeDetailTableViewController <AWERelatedRecomendPanelViewDelegate>

@property (retain, nonatomic) AWEPageContext *pageContext;
@property (retain, nonatomic) AWERelatedRecomendDetailBottomView *moreView;
@property (retain, nonatomic) AWERelatedRecomendPanelViewController *panelVC;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEAwemeModel *sourceModel;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL panelShowed;
@property (nonatomic) BOOL firstAppear;
@property (nonatomic) long long initialIndex;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL needResetData;
@property (nonatomic) BOOL isRelatedVideo;
@property (copy, nonatomic) id /* block */ dataSoureHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cellDidEndDisplay:(id)a0;
- (void)cellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (BOOL)recommendPanelShowed;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)onScrollWillChangeVideo:(id)a0 index:(long long)a1 directTop:(BOOL)a2;
- (id)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (id)createDefaultConfig;
- (void)recallDimissOtherView;
- (id)initWithAwemeModel:(id)a0 dataController:(id)a1 initialIndex:(long long)a2 logExtraDict:(id)a3;
- (void)getParam:(id)a0;
- (void)didDataControllerModified;
- (void)moreViewClicked;
- (void)willPlayNextLoop;
- (void)awe_dismissPanelWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)showPanelAnimate:(BOOL)a0 complete:(id /* block */)a1;
- (void)awe_didTappedIndex:(long long)a0 aweme:(id)a1;
- (void)scrollToNextVideo;
- (void).cxx_destruct;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;

@end
