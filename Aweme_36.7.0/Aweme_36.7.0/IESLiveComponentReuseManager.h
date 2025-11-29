@class NSMutableDictionary;

@interface IESLiveComponentReuseManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *roomParamContexts;
@property (nonatomic) BOOL enable;

+ (id)manager;

- (id)contextWithIndex:(id)a0;
- (id)componentReusePoolWithIndex:(id)a0;
- (void)recordIndex:(id)a0 startSceneType:(long long)a1 processComplete:(id /* block */)a2;
- (void)recordIndex:(id)a0 reuseState:(long long)a1;
- (id)recordIndex:(id)a0 mergeRoom:(id)a1;
- (void)recordIndex:(id)a0 reusePool:(id)a1;
- (id)reuseIndex:(id)a0 reusePool:(id)a1;
- (void)callChangeSceneIndex:(id)a0 reusePool:(id)a1 callback:(id /* block */)a2;
- (void)callIndex:(id)a0 reusePool:(id)a1 component:(id)a2 stateCallback:(id /* block */)a3;
- (id)contextWithIndex:(id)a0 needCreate:(BOOL)a1;
- (void).cxx_destruct;
- (void)clear:(BOOL)a0;
- (id)init;

@end
