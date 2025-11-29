@class NSDictionary;

@interface AWEIMPushEventContext : NSObject

@property long long triggerReason;
@property long long triggerType;
@property long long stage;
@property BOOL pullRequestProcessing;
@property double pushHandleBeginTime;
@property (retain) NSDictionary *performanceInfo;

- (void).cxx_destruct;
- (id)description;

@end
