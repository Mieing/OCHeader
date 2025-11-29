@class IESLiveThreadSafeDictionary, NSString, GetStrategiesResponse;
@protocol HTSKVStore, IESLiveMonitor;

@interface IESLivePEStrategyStorage : NSObject <IESLivePEStrategyStorage> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _strategy_rwlock;
}

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) id<HTSKVStore> kvStore;
@property (retain, nonatomic) GetStrategiesResponse *strategies;
@property (retain, nonatomic) IESLiveThreadSafeDictionary *innerStrategyDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateStrategies:(id)a0;
- (id)strategyExtra;
- (id)strategyDictionary;
- (void)addLocalStrategys:(id)a0;
- (id)readStrategiesWithKey:(id)a0;
- (void)addStrategys:(id)a0 toDic:(id)a1;
- (void)deleteStrategys:(id)a0 toDic:(id)a1;
- (void)trackStrategyDiffWith:(id)a0;
- (void)writeStrategies:(id)a0 toKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;

@end
