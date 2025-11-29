@class FeedResponse;

@interface FeedCacheResponse : IESLivePBBaseMessage

@property (retain, nonatomic) FeedResponse *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
