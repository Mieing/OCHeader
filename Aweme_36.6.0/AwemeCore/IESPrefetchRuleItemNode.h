@class NSString, NSArray;

@interface IESPrefetchRuleItemNode : NSObject

@property (copy, nonatomic) NSString *fragment;
@property (copy, nonatomic) NSArray *apis;
@property (copy, nonatomic) NSArray *queryNodes;

- (void).cxx_destruct;
- (id)jsonRepresentation;

@end
