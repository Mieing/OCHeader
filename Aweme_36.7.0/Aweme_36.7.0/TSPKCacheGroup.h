@class NSArray, NSString, NSDictionary;

@interface TSPKCacheGroup : NSObject

@property (copy, nonatomic) NSArray *apiList;
@property (copy, nonatomic) NSString *strategy;
@property (copy, nonatomic) NSString *store;
@property (copy, nonatomic) NSDictionary *params;

- (void).cxx_destruct;

@end
