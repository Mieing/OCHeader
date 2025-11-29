@class NSString;

@interface AWEEcomImageSearchRequestContext : NSObject

@property (copy, nonatomic) NSString *channel;
@property (nonatomic, getter=isLoadMore) BOOL loadMore;

+ (id)contextWithChannel:(id)a0 loadMore:(BOOL)a1;

- (void).cxx_destruct;

@end
