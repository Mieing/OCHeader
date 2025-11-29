@class NSString;

@interface AWELiveCachePoolParams : NSObject

@property (copy, nonatomic) NSString *triggerReason;
@property (copy, nonatomic) NSString *errorDescription;
@property (copy, nonatomic) NSString *requestId;
@property (nonatomic) long long refreshType;
@property (nonatomic) long long exemptImpressionCount;
@property (nonatomic) long long returnCount;
@property (nonatomic) long long pendingCallbackCount;
@property (nonatomic) long long requestCount;
@property (nonatomic) long long lastReturnCount;
@property (nonatomic) long long remindCount;
@property (nonatomic) long long closeCount;
@property (nonatomic) BOOL serverEnableRefresh;

- (void).cxx_destruct;

@end
