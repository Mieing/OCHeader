@class NSMutableDictionary, AWENearbyPageContext, AWENearbyCardFeedViewController, NSString;

@interface AWENearbyCardFeedPluginManager : NSObject <AWENearbyCardFeedPageProtocol>

@property (retain, nonatomic) NSMutableDictionary *pluginMap;
@property (weak, nonatomic) AWENearbyPageContext *pageContext;
@property (weak, nonatomic) AWENearbyCardFeedViewController *containerVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)storageKeyForPlugin:(id)a0;
- (id)storageKeyForPluginClassName:(id)a0;
- (void)viewDealloc;
- (void)didFinishInitialFetch:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)registerPlugin:(id)a0;

@end
