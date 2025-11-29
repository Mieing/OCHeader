@class NSString, NSMutableDictionary, AWELifeFeedsPageContext;

@interface AWELifeFeedsPluginManager : NSObject <AWELifeFeedsPluginProtocol>

@property (retain, nonatomic) NSMutableDictionary *pluginMap;
@property (retain, nonatomic) NSMutableDictionary *selectorCacheDict;
@property (retain, nonatomic) NSMutableDictionary *protocolCacheDict;
@property (weak, nonatomic) AWELifeFeedsPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithRouterParamDict:(id)a0;
- (id)findPluginByClass:(Class)a0;
- (BOOL)registerPlugin:(id)a0 error:(id *)a1;
- (id)storageKeyForPlugin:(id)a0;
- (id)storageKeyForPluginClassName:(id)a0;
- (void)componentStartShow:(id)a0 reason:(unsigned long long)a1;
- (void)pageViewDidEndDragging:(id)a0 scrollView:(id)a1 willDecelerate:(BOOL)a2;
- (void)pageViewDidEndDecelerating:(id)a0 scrollView:(id)a1;
- (void)hostPageDidEndScroll:(id)a0 scrollView:(id)a1 hostPageScrollViewOffset:(struct CGPoint { double x0; double x1; })a2;
- (void)didTapComponentView:(id)a0 viewModel:(id)a1;
- (void)didLongPressComponentView:(id)a0 viewModel:(id)a1 longPress:(id)a2;
- (void)pageDidScroll:(id)a0 scrollView:(id)a1;
- (void)pageViewWillBeginDragging:(id)a0 scrollView:(id)a1;
- (void)pageViewWillEndDragging:(id)a0 scrollView:(id)a1 withVelocity:(struct CGPoint { double x0; double x1; })a2 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a3;
- (void)pageViewWillBeginDecelerating:(id)a0 scrollView:(id)a1;
- (void)hostPageDidScroll:(id)a0 scrollView:(id)a1 hostPageScrollViewOffset:(struct CGPoint { double x0; double x1; })a2;
- (void)viewDidEnterBackground;
- (void)viewDidEnterForeground;
- (void)viewDealloc;
- (void)startFetchPrefetchData;
- (void)endFetchPrefetchData:(id)a0 error:(id)a1;
- (void)startFetchMainData:(id)a0;
- (void)endFetchMainData:(id)a0 error:(id)a1;
- (void)startBindPageViewModel:(id)a0;
- (void)bindPageViewModel:(id)a0 incrementNodeTags:(id)a1;
- (void)didEndParseData:(id)a0 error:(id)a1;
- (void)pageLayoutIfNeed;
- (void)willReloadPage;
- (void)componentView:(id)a0 willBindViewModel:(id)a1;
- (void)componentView:(id)a0 didBindViewModel:(id)a1;
- (void)componentStartShowTwoThirds:(id)a0 reason:(unsigned long long)a1;
- (void)componentDidCompleteShow:(id)a0 reason:(unsigned long long)a1;
- (void)componentStartEndShow:(id)a0 reason:(unsigned long long)a1;
- (void)componentStartEndShowTwoThirds:(id)a0 reason:(unsigned long long)a1;
- (void)componentDidEndShow:(id)a0 reason:(unsigned long long)a1;
- (id)pluginListBySelector:(SEL)a0;
- (id)pluginListByProtocol:(id)a0;
- (void)viewDidAppear;
- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)resetCache;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)didLayout;
- (void)viewDidDisappear;
- (void)removePlugin:(id)a0;
- (void)viewWillDisappear;

@end
