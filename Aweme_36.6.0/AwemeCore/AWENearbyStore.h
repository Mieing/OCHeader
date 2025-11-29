@class AWENearbyPendantManager, AWERxObservable, AWERxReadonlyProperty, UIViewController;
@protocol AWEAwemeDetailTableViewControllerProtocol;

@interface AWENearbyStore : AWERxBaseStore

@property (weak, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *detailTableViewController;
@property (readonly, nonatomic) AWERxReadonlyProperty *constData;
@property (readonly, nonatomic) AWERxReadonlyProperty *feedList;
@property (readonly, nonatomic) AWERxReadonlyProperty *poiEntries;
@property (readonly, nonatomic) AWERxReadonlyProperty *dataController;
@property (readonly, nonatomic) AWERxReadonlyProperty *isAppear;
@property (readonly, nonatomic) AWERxReadonlyProperty *isFirstAppear;
@property (readonly, nonatomic) AWERxReadonlyProperty *hasMoreData;
@property (readonly, nonatomic) AWERxReadonlyProperty *usingCachedData;
@property (readonly, nonatomic) AWERxReadonlyProperty *isHometownMode;
@property (readonly, nonatomic) AWERxReadonlyProperty *isHometownLocalMode;
@property (readonly, nonatomic) AWERxReadonlyProperty *isVideoDetailTableViewPresented;
@property (readonly, nonatomic) AWERxReadonlyProperty *isSchoolCircleMode;
@property (readonly, nonatomic) AWERxReadonlyProperty *isRequestOnAir;
@property (readonly, nonatomic) AWERxReadonlyProperty *isPureMode;
@property (readonly, nonatomic) AWERxReadonlyProperty *hasCancelAlert;
@property (readonly, nonatomic) AWERxReadonlyProperty *currentCity;
@property (readonly, nonatomic) AWERxReadonlyProperty *transformerTabs;
@property (readonly, nonatomic) AWERxReadonlyProperty *settings;
@property (readonly, nonatomic) AWERxReadonlyProperty *nearbyBanner;
@property (readonly, nonatomic) AWERxReadonlyProperty *nearbySettingResponse;
@property (readonly, nonatomic) AWERxReadonlyProperty *coverComments;
@property (readonly, nonatomic) AWERxReadonlyProperty *pageContext;
@property (retain, nonatomic) AWENearbyPendantManager *pendantManager;
@property (readonly, nonatomic) AWERxObservable *eventBus;

- (BOOL)dispatchAction:(id)a0 completion:(id /* block */)a1;
- (BOOL)setState:(id)a0 withValue:(id)a1 context:(id)a2;
- (id)initWithModule:(id)a0 inPureMode:(BOOL)a1 pageContext:(id)a2;
- (void)_bindState;
- (void)_initFetchWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_refreshFetchWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_loadMoreDataWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_deleteRoomWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_deleteFeedItemWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_insertItemToFirst:(id)a0 completion:(id /* block */)a1;
- (void)_changeHasFinishedPublishState:(id)a0 completion:(id /* block */)a1;
- (void)_changeIsPublishToNearbyState:(id)a0 completion:(id /* block */)a1;
- (void)_insertItemToIndex:(id)a0 completion:(id /* block */)a1;
- (void)_invokeCompletion:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
