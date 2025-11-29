@class NSMutableDictionary, AWEIMSubscribeSectionViewModel, NSString, AWEIMBatchFetchUserSession;

@interface AWEIMSubscribeViewModel : AWEBaseListViewModel <AWEIMBatchFetchUserSessionDelegate>

@property (retain, nonatomic) AWEIMSubscribeSectionViewModel *sectionViewModel;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic) long long limit;
@property (nonatomic) long long lastCursor;
@property (retain, nonatomic) AWEIMBatchFetchUserSession *fetchUserSession;
@property (retain, nonatomic) NSMutableDictionary *cardFilterMap;
@property (nonatomic) long long dataCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (void)batchFetchUserSessionDidFinished:(id)a0;
- (void)fetchUsersList:(id)a0;
- (void)fetchCardListDataParams:(id)a0 onCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)willDisappear;
- (void)initData;

@end
