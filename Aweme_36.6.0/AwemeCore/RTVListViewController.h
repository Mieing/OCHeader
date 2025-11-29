@class NSArray, NSString, UIView;
@protocol RTVListViewControllerDelegate, RxInjector, RTVVoipSettingManagerInterface, RTVXRStateRecorder, RTVListSearchPluginInterface;

@interface RTVListViewController : RTVCollectionViewController <RTVListSearchPluginDelegate>

@property (copy, nonatomic) NSArray *plugins;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRStateRecorder> xrStateRecorder;
@property (readonly, weak, nonatomic) id<RTVVoipSettingManagerInterface> settingManager;
@property (nonatomic) double pluginViewHeight;
@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) id<RTVListSearchPluginInterface> searchPlugin;
@property (nonatomic) BOOL isLoading;
@property (weak, nonatomic) id<RTVListViewControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL isSearching;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)listContext;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)finishSearch;
- (BOOL)currentInterfaceOrientationLayoutIsPortrait;
- (void)searchPluginDidEndSearch:(id)a0;
- (void)searchPluginDidBeginSearch:(id)a0;
- (void)searchPlugin:(id)a0 didContentTextChange:(id)a1;
- (void)listViewControllerPlugin:(id)a0 requireDismissListViewControllerWithCompletion:(id /* block */)a1;
- (id)__filteredDataSectionModels:(id)a0;
- (void)__scrollToDefaultPosition;
- (void)__removeLoadingViewIfNeed;
- (void)__showEmptyViewIfNeed;
- (void)__showLoadingViewIfNeed;
- (void)__layoutHeader;
- (void)__removeEmptyViewIfNeed;
- (void)__emptyPageTapped;
- (void)updateCollectionViewInset:(id /* block */)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
