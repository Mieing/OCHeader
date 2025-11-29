@class NSArray;

@interface AWEFeedMateCardInsertContext : NSObject

@property (copy, nonatomic) NSArray *feedDataSource;
@property (nonatomic) long long feedCurrentIndex;
@property (nonatomic) BOOL loadMoreHasMore;
@property (nonatomic) BOOL isRefresh;

- (void).cxx_destruct;

@end
