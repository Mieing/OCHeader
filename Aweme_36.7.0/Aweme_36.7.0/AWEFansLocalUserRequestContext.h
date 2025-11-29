@interface AWEFansLocalUserRequestContext : NSObject

@property (nonatomic) long long source;
@property (nonatomic) long long maxTime;
@property (nonatomic) long long lastCursor;
@property (nonatomic) BOOL isRetry;
@property (nonatomic) BOOL isFullAndNotFirstPage;

@end
