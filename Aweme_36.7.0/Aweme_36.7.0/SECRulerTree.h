@class NSArray;

@interface SECRulerTree : NSObject

@property (copy, nonatomic) NSArray *rules;

- (BOOL)executeWithParams:(id)a0;
- (void)buildupTreeWithRules:(id)a0;
- (void).cxx_destruct;
- (id)initWithRules:(id)a0;

@end
