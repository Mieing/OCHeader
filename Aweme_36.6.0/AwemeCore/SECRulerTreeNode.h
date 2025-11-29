@class NSString, NSArray;

@interface SECRulerTreeNode : NSObject

@property (copy, nonatomic) NSString *cel;
@property (copy, nonatomic) NSArray *rules;

- (BOOL)executeWithParams:(id)a0;
- (void)buildNodeWithDict:(id)a0;
- (BOOL)executeSubRulesWithParams:(id)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
