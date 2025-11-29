@class NSDictionary, NSString;

@interface SECEventFlowRELogicTree : NSObject

@property (copy, nonatomic) NSDictionary *tree;
@property (copy, nonatomic) NSString *celKeyword;
@property (copy, nonatomic) NSString *childKeyword;

- (BOOL)tranversalTree:(id)a0 children:(id)a1 params:(id)a2;
- (id)initWithTreeDict:(id)a0 celKeyword:(id)a1 childKeyword:(id)a2;
- (BOOL)executeWithParams:(id)a0 error:(id *)a1 defaultValue:(BOOL)a2;
- (void).cxx_destruct;

@end
