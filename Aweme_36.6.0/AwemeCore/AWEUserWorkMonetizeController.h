@class NSString;

@interface AWEUserWorkMonetizeController : AWEUserWorkController <AWEShowMonetizeRefreshHandler, AWEUserWorkCollectionViewCellTabDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)monetizeScene;
- (void)refreshMonetizeContent:(id)a0 reason:(unsigned long long)a1;
- (id)monetizeDataSource;
- (id)monetizeContentTrackParams;
- (id)monetizeContentReferString;
- (void)refreshWithAwemes:(id)a0;
- (void)containerViewDidLoad;

@end
