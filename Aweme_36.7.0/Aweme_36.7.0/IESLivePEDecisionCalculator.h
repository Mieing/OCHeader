@class NSMutableDictionary;
@protocol HTSKVStore;

@interface IESLivePEDecisionCalculator : NSObject

@property (retain, nonatomic) NSMutableDictionary *dealDic;
@property (retain, nonatomic) NSMutableDictionary *functionDic;
@property (retain, nonatomic) id<HTSKVStore> kvStore;

+ (id)sharedInstance;

- (void)addNodeType:(long long)a0 withDeal:(id /* block */)a1;
- (void)setupFunctionMap;
- (void)setupDealMap;
- (void).cxx_destruct;
- (id)init;

@end
