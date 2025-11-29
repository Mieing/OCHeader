@class NSString;

@interface FinderFeedLaunchRequest : NSObject

@property (nonatomic) long long feedId;
@property (copy, nonatomic) NSString *nonceId;

+ (id)makeWithFeedId:(long long)a0 nonceId:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
