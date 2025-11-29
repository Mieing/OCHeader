@class NSMutableDictionary;

@interface HMDPerformanceAggregate : NSObject

@property (nonatomic) BOOL disablePerformanceAggregationFix;
@property (retain, nonatomic) NSMutableDictionary *tracksDictionary;
@property (retain, nonatomic) NSMutableDictionary *indexKeys;

- (id)findMaxValueAggregateWithSessionID:(id)a0 aggregateKeys:(id)a1 needAggregateDictionary:(id)a2 normalDictionary:(id)a3 listDictionary:(id)a4 currentecordIndex:(long long)a5 findMaxValueDictionary:(id)a6;
- (id)getAggregateRecords;
- (id)aggregateWithSessionID:(id)a0 aggregateKeys:(id)a1 needAggregateDictionary:(id)a2 normalDictionary:(id)a3 listDictionary:(id)a4 currentecordIndex:(long long)a5;
- (void)aggregateExtraDictWithNeedAggregateDict:(id)a0 targetCacheDict:(id)a1 aggregateKey:(id)a2 depth:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)init;

@end
