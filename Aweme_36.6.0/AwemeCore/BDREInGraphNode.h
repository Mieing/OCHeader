@class NSString;

@interface BDREInGraphNode : BDREGraphNode

@property (copy, nonatomic) NSString *identifier;

- (id)valueWithFootPrint:(id)a0;
- (BOOL)canPassWithFootPrint:(id)a0;
- (void)visitWithFootPrint:(id)a0 previousNode:(id)a1;
- (id)initWithRightIdentifier:(id)a0;
- (void).cxx_destruct;

@end
