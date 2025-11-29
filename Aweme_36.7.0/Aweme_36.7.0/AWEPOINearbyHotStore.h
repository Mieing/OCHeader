@class NSString, AWERxObservable, AWERxReadonlyProperty, UIViewController;
@protocol AWEAwemeDetailTableViewControllerProtocol;

@interface AWEPOINearbyHotStore : AWERxBaseStore

@property (weak, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *detailTableViewController;
@property (copy, nonatomic) NSString *poiID;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (readonly, nonatomic) AWERxReadonlyProperty *feedList;
@property (readonly, nonatomic) AWERxReadonlyProperty *dataController;
@property (readonly, nonatomic) AWERxReadonlyProperty *hasMoreData;
@property (readonly, nonatomic) AWERxObservable *nearbyEvent;

- (BOOL)dispatchAction:(id)a0 completion:(id /* block */)a1;
- (BOOL)setState:(id)a0 withValue:(id)a1 context:(id)a2;
- (void)p_bindStateWithPrefetcher:(id)a0;
- (void)p_initFetchWithContext:(id)a0 completion:(id /* block */)a1;
- (void)p_loadMoreFeedWithContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithModule:(id)a0 prefetcher:(id)a1;
- (void).cxx_destruct;

@end
