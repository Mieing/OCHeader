@class NSDictionary;

@interface BDXGurdSyncResourcesResult : NSObject

@property (nonatomic, getter=isSuccessfully) BOOL successfully;
@property (copy, nonatomic) NSDictionary *info;
@property (nonatomic, getter=isThrottled) BOOL throttled;

- (void).cxx_destruct;

@end
