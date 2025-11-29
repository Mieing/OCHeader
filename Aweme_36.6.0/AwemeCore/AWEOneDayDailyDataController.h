@class NSNumber, NSString;

@interface AWEOneDayDailyDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *userID;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)initWithUserID:(id)a0;
- (BOOL)canLoadMore;
- (void)mergeDailyStory:(id)a0;
- (void)filterDeletedStory:(id)a0 isNewest:(BOOL *)a1;
- (void)requestDeleteStory:(id)a0 completeBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
