@class NSArray, NSDictionary;

@interface QueryFilterObject : NSObject

@property (copy, nonatomic) NSArray *queryPairArray;
@property (copy, nonatomic) NSDictionary *keyAndIndexDict;

- (id)initWithQueryPairArray:(id)a0 keyAndIndexDict:(id)a1;
- (void).cxx_destruct;

@end
