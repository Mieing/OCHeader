@class NSMutableDictionary;
@protocol AWEPOIVirgoOptiStrategyResultsUpdateProtocol;

@interface AWEPOIVirgoOptiStrategyResults : NSObject

@property (retain, nonatomic) NSMutableDictionary *strategyResults;
@property (weak, nonatomic) id<AWEPOIVirgoOptiStrategyResultsUpdateProtocol> delegate;

- (void)updateResultsWithRule:(id)a0;
- (id)resultWithStrategyKey:(id)a0;
- (id)resultsWithStrategyKeys:(id)a0;
- (void).cxx_destruct;

@end
