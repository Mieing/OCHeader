@class NSArray;

@interface AWEEcomSearchPreRequestCoreParamsComparator : AWEEcomSearchPreRequestComparator

@property (nonatomic) BOOL useCompleteCompare;
@property (retain, nonatomic) NSArray *checkList;

- (id)initWithExemptionRules:(id)a0;
- (id)exemptCompareDictionary:(id)a0 withDictionary:(id)a1;
- (id)initWithExemptionRules:(id)a0 coreParamsRule:(id)a1;
- (void).cxx_destruct;

@end
