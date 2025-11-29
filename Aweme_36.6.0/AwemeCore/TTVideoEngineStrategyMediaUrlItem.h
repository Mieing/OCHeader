@class NSString, NSArray, NSDictionary;

@interface TTVideoEngineStrategyMediaUrlItem : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSArray *urls;
@property (nonatomic) long long preloadSize;
@property (nonatomic) long long priorityLevel;
@property (nonatomic) long long urlExpiredTime;
@property (copy, nonatomic) NSDictionary *headerInfo;
@property (copy, nonatomic) NSString *preloadCustomPath;
@property (copy, nonatomic) id /* block */ preloadEnd;
@property (copy, nonatomic) id /* block */ preloadCanceled;
@property (copy, nonatomic) id /* block */ preloadDidStart;
@property (copy, nonatomic) id /* block */ preloadProgress;

- (void).cxx_destruct;
- (id)toDict;

@end
