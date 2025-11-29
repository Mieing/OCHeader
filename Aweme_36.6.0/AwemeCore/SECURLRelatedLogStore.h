@protocol SECURLRelatedLogStash;

@interface SECURLRelatedLogStore : NSObject

@property (retain, nonatomic) id<SECURLRelatedLogStash> syncLogStash;
@property (retain, nonatomic) id<SECURLRelatedLogStash> asyncLogStash;
@property (nonatomic) double syncCleanupInterval;
@property (nonatomic) double asyncCleanupInterval;

+ (id)createURLAsyncLogStashWithName:(id)a0;

- (id)fetchURLSyncLogStash;
- (id)fetchURLAsyncLogStash;
- (void)setupSyncCleanupInterval:(double)a0;
- (void)setupAsyncCleanupInterval:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
