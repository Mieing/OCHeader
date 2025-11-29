@class NSArray, NSString;

@interface AWEDCFeedForceRefreshAfterSearchController : AWEDCFeedBaseController <AWEDCFeedForceRefreshAfterSearchControllerProtocol>

@property (copy, nonatomic) NSArray *needToBeRemovedModels;
@property (copy, nonatomic) NSArray *searchIDList;
@property (nonatomic) BOOL needForceRefreshForSearch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerViewDidAppear:(BOOL)a0;
- (id)classNameWithReferString;
- (void)handleSearchBackToFeedNotification:(id)a0;
- (void)forceRefreshIfNeeded;
- (BOOL)needForceRefreshForOutOfTimeFromController;
- (void)clearNeedForceRefreshForOutOfTimeFromController;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)clearRecords;
- (void)containerViewDidLoad;
- (void)addObservers;

@end
