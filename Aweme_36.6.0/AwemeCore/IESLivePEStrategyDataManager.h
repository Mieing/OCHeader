@class NSMutableDictionary;

@interface IESLivePEStrategyDataManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *strategyModels;

- (id)getRelatedStrategyWithFactorKey:(id)a0;
- (void)addStrategyModel:(id)a0;
- (id)getStrategyModelWithStrategyKey:(id)a0;
- (id)getRelatedStrategyWithFactorKeyArray:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
