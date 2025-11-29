@class AWEIMFetchShareListDatasource, NSMutableArray, NSMutableSet;

@interface AWEIMShareContactListViewRecentChatSegmentedLoadingManager : NSObject

@property (retain, nonatomic) NSMutableArray *curRecentData;
@property (retain, nonatomic) NSMutableSet *curRecentSet;
@property (copy, nonatomic) id /* block */ fetchDataFinishCompletion;
@property (nonatomic) long long curIndex;
@property (nonatomic) long long everyTimeLoadMoreCount;
@property (nonatomic) long long showMaxCount;
@property (nonatomic) long long hasTriggerDataBaseLoadMoreTimes;
@property (copy, nonatomic) id /* block */ commonFilter;
@property (retain, nonatomic) AWEIMFetchShareListDatasource *datasource;

- (void)getMoreRecentDataWithCompletion:(id /* block */)a0;
- (id)initWithFilterConfig:(id)a0;
- (long long)everyPageMaxCountFromExp;
- (long long)showMaxCountFromExp;
- (void)filterExistData;
- (void)loadMoreRecentDataIfNeeded;
- (void)moreDataGetWithArray:(id)a0 hasMore:(BOOL)a1;
- (void)loadMoreRecentDataFromDataBase;
- (void).cxx_destruct;
- (id)init;

@end
