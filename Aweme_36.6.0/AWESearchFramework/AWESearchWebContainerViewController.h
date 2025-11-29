@class UIView, AWESearchCachalotWebPipeline, AWESearchCachalotWebEngine;
@protocol BDXViewContainerProtocol;

@interface AWESearchWebContainerViewController : AWESearchResultVerticalBaseViewController

@property (retain, nonatomic) AWESearchCachalotWebPipeline *webPipeline;
@property (weak, nonatomic) AWESearchCachalotWebEngine *webEngine;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *webView;

- (void)registerByteSync;
- (void)fetchDataWithKeyWord:(id)a0 enterFrom:(id)a1 extraLogParams:(id)a2 isSearchByUserClick:(BOOL)a3 isFilterSearch:(BOOL)a4 animated:(BOOL)a5 completion:(id /* block */)a6;
- (void)customComponentDidFinishRender:(id)a0 withViewModel:(id)a1;
- (void)customComponentWillDisplay:(id)a0 withViewModel:(id)a1;
- (void)customFeedwillRequestNetwork;
- (BOOL)customShouldTurnOnAutoPreloadMoreWhenEndRefreshingCompleted;
- (void)unregisterByteSync;
- (void)preLoadWebView;
- (BOOL)customEnableCustomBackgroundColor;
- (id)customCustomBackgroundColor;
- (BOOL)customEnableWebViewPreload;
- (id)customPreLoadData;
- (BOOL)customSupportByteSync;
- (BOOL)customEnableWebViewReuse;
- (BOOL)customDisconnectionByteSync;
- (double)requestStartTime;
- (void).cxx_destruct;
- (id)footerView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)loadView;
- (void)createUI;

@end
