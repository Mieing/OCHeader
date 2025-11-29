@class NSString;

@interface AWEAwemeDetailMonetizeRefreshController : AWEAwemeFeedBaseController <AWEShowMonetizeRefreshHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)monetizeScene;
- (void)refreshMonetizeContent:(id)a0 reason:(unsigned long long)a1;
- (id)monetizeDataSource;
- (id)currentMonetizeContent;
- (id)monetizeContentTrackParams;
- (id)monetizeContentReferString;
- (BOOL)needReceiveRefreshMonetizeContentForContext:(id)a0;
- (id)monetizeSceneContainer;
- (void)refreshMonetizeForInnerContainerWithAwemes:(id)a0;
- (void)refreshMonetizeForOuterContainerWithAwemes:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)dealloc;

@end
