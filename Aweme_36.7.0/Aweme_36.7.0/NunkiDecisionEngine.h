@class NSString, NunkiDecisionCache;

@interface NunkiDecisionEngine : NSObject <NunkiDecisionEngineService>

@property (retain, nonatomic) NunkiDecisionCache *decisionCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAllDecisionCache;
- (void)decideWithKey:(id)a0 params:(id)a1 forceSyncPredict:(BOOL)a2 config:(id)a3 completion:(id /* block */)a4;
- (id)decideWithKey:(id)a0 config:(id)a1;
- (void)setupStrategyWithKey:(id)a0 config:(id)a1;
- (id)getSmartServiceConfigWithKey:(id)a0 config:(id)a1;
- (void)smartDecideWithKey:(id)a0 params:(id)a1 forceSyncPredict:(BOOL)a2 config:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;

@end
