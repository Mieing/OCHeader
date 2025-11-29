@class NSObject, NSArray, NSString, AFDVisitorTextSettingsModel, NSNumber, AFDVisitorListDataController;
@protocol AFDVisitorListViewModelDelegate;

@interface AFDVisitorListViewModel : NSObject <AWEUserMessage>

@property (nonatomic) BOOL isLoadingData;
@property (retain, nonatomic) AFDVisitorTextSettingsModel *textSettingsModel;
@property (retain, nonatomic) AFDVisitorListDataController *dataController;
@property (readonly, copy, nonatomic) NSArray *freshVisitorItems;
@property (readonly, copy, nonatomic) NSArray *historyVisitorItems;
@property (readonly, copy, nonatomic) NSArray *sectionDataSourceArray;
@property (readonly, nonatomic) BOOL hasMoreData;
@property (readonly, nonatomic) BOOL isAuthorized;
@property (nonatomic) unsigned long long totalCountFresh;
@property (nonatomic) unsigned long long totalCountHistory;
@property (copy, nonatomic) NSString *insertID;
@property (retain, nonatomic) NSNumber *trackedNewVisitorCount;
@property (nonatomic) long long greetCount;
@property (weak, nonatomic) NSObject<AFDVisitorListViewModelDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)visitorCount;
- (void)handleWithCompletion:(id /* block */)a0;
- (void)changeVisitorProfilePermission:(long long)a0 completion:(id /* block */)a1;
- (id)cellBusinessModelAtIndexPath:(id)a0;
- (void)fetchVisitorsWithCompletion:(id /* block */)a0;
- (void)loadMoreVisitorWithCompletion:(id /* block */)a0;
- (id)getUnAuthViewConfigWithSettingsModel:(id)a0;
- (id)fetchVisitorPermission;
- (id)fetchVisitorList;
- (BOOL)enableFetchVisitorPermission;
- (BOOL)shouldUpdateHTSTitleAndContent;
- (id)visitorUserIDs;
- (void)followUserWithListItem:(id)a0 completion:(id /* block */)a1;
- (void)unfollowUserWithListItem:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)itemAtIndexPath:(id)a0;

@end
