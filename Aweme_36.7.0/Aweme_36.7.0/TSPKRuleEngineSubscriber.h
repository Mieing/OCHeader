@class NSString;

@interface TSPKRuleEngineSubscriber : NSObject <TSPKSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canHandelEvent:(id)a0;
- (id)hanleEvent:(id)a0;
- (id)convertEventDataToParams:(id)a0 source:(id)a1;
- (void)appendExecuteResult:(id)a0 toEventData:(id)a1 input:(id)a2;
- (void)reportInfoWithParams:(id)a0 ruleSetNames:(id)a1 ruleResult:(id)a2 usedParameters:(id)a3 needFuse:(BOOL)a4 backtraces:(id)a5 eventData:(id)a6;
- (id)addExtraInfoForParams:(id)a0;
- (id)buildDefaultFilterParameter:(id)a0;
- (id)uniqueId;

@end
