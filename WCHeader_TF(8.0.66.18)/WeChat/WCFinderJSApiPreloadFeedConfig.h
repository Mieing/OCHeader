@interface WCFinderJSApiPreloadFeedConfig : NSObject

@property (nonatomic) BOOL forbidenPreload;
@property (nonatomic) double fetchInterval;
@property (nonatomic) long long batchCount;
@property (nonatomic) long long penddingMaxCount;
@property (nonatomic) unsigned int cacheMaxCount;

- (id)init;
- (id)description;
- (BOOL)allowPreload;

@end
