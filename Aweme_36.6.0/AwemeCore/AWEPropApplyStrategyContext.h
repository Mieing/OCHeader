@class NSArray, AWEPropApplyRawTypeStrategy, AWEPropApplyNormalStrategy, YYMemoryCache;
@protocol AWEPropApplyStrategyProtocol, AWEPropApplyContextProtocol;

@interface AWEPropApplyStrategyContext : NSObject

@property (copy, nonatomic) NSArray *strategyArray;
@property (retain, nonatomic) id<AWEPropApplyStrategyProtocol> currentStrategy;
@property (retain, nonatomic) AWEPropApplyNormalStrategy *normalStrategy;
@property (retain, nonatomic) AWEPropApplyRawTypeStrategy *rawTypeStrategy;
@property (retain, nonatomic) id<AWEPropApplyContextProtocol> applyContext;
@property (retain, nonatomic) YYMemoryCache *cache;
@property (nonatomic) BOOL isPrepareProcessRunning;

- (id)initWithApplyContext:(id)a0;
- (void)updateStrategyWithEffectModel:(id)a0;
- (void)applyProp:(id)a0 currentProp:(id)a1;
- (void).cxx_destruct;

@end
