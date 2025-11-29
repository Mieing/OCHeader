@class BDCommonClientABTestLayer;

@interface BDCommonClientABTestExperiment : BDCommonABTestBaseExperiment

@property (readonly, copy, nonatomic) BDCommonClientABTestLayer *clientLayer;

- (id)initWithKey:(id)a0 owner:(id)a1 description:(id)a2 defaultValue:(id)a3 valueType:(unsigned long long)a4 isSticky:(BOOL)a5 clientLayer:(id)a6;
- (id)freshValue;
- (void).cxx_destruct;

@end
