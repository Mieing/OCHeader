@class NSNumber;

@interface AWEListenFeedCollectionDataController : AWEListDataController

@property (nonatomic) long long requestNums;
@property (retain, nonatomic) NSNumber *cursor;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)initWithCursor:(id)a0 models:(id)a1 hasMore:(BOOL)a2;
- (void).cxx_destruct;

@end
