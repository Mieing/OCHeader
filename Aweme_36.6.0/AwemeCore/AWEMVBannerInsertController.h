@class NSString, NSMutableArray;

@interface AWEMVBannerInsertController : AWEDCFeedBaseController <AWEMVClientForceInsertStrategyProtocol>

@property (nonatomic) unsigned long long loadMoreCount;
@property (retain, nonatomic) NSMutableArray *bannerShowIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerBeforeViewDidLoad;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)getMVPageContext;
- (BOOL)bannerHadShowedWithModel:(id)a0;
- (BOOL)shouldPreventBannerInsertInFirstFetch:(id)a0;
- (id)forceInsertItemsWithContext:(id)a0;
- (void).cxx_destruct;
- (void)containerViewDidLoad;

@end
