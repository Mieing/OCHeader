@class NSString;

@interface IESPrefetchRuleQueryNode : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *valueRegex;

- (void).cxx_destruct;
- (id)jsonRepresentation;

@end
