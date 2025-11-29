@class AWEOneDayDailyDataController;

@interface AWEOneDayFeedViewModel : AWEBaseListViewModel

@property (retain, nonatomic) AWEOneDayDailyDataController *dataController;

- (void)fetchListData;
- (void)loadMoreListData;
- (id)lifeStoryAtIndex:(long long)a0;
- (void)deleteStoryAtIndex:(long long)a0 completeBlock:(id /* block */)a1;
- (id)createItemModelsWithUserStorys:(id)a0;
- (void).cxx_destruct;
- (void)handleResponse:(id)a0;

@end
