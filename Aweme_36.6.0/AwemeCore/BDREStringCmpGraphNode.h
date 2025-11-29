@class NSArray;

@interface BDREStringCmpGraphNode : BDREGraphNode

@property (retain, nonatomic) NSArray *comparedStrs;

- (BOOL)canPassWithFootPrint:(id)a0;
- (void)visitWithFootPrint:(id)a0 previousNode:(id)a1;
- (id)initWithComparedStrs:(id)a0;
- (BOOL)compareStrA:(id)a0 strB:(id)a1;
- (void).cxx_destruct;

@end
