@class NSString;

@interface NPPlaySessionInfo : NSObject

@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) int stallTotalCount;
@property (nonatomic) int retryTotalCount;
@property (nonatomic) long long stopTimestamp;

- (void).cxx_destruct;

@end
