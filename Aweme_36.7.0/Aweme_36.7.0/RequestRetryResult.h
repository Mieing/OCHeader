@class NSDictionary;

@interface RequestRetryResult : NSObject

@property (nonatomic) BOOL requestRetryEnabled;
@property (nonatomic) BOOL removeHitResponseHeaderIfNotRetry;
@property (retain) NSDictionary *addRequestHeaders;

- (id)initWithRetryResult:(BOOL)a0 addRequestHeaders:(id)a1;
- (void).cxx_destruct;

@end
