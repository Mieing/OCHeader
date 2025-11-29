@class NSString;

@interface AWEPerfEvaluateService : HTSService <AWEPerfEvaluateService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (float)getInstanceScore;
- (float)getRecentScore;
- (float)getStableScore;
- (id)appLogService;
- (void)triggerBootCollect;
- (id)strategyService;
- (void)registerResultObserver:(id)a0;
- (void)unregisterResultObserver:(id)a0;

@end
