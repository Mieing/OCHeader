@class NSString, NSArray;

@interface IESPrefetchRuleNode : NSObject

@property (copy, nonatomic) NSString *ruleName;
@property (copy, nonatomic) NSArray *itemNodes;

- (void).cxx_destruct;
- (id)jsonRepresentation;

@end
