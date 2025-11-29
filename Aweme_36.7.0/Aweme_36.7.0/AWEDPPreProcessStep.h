@class NSMutableDictionary;

@interface AWEDPPreProcessStep : AWEWorkflowStep

@property (retain, nonatomic) NSMutableDictionary *store;

+ (Class)aAWEDPPreProcessStepCommonAdapterClass;

- (void)onStep:(id)a0 linkSession:(id)a1;
- (id)aAWEDPPreProcessStepCommonAdapter;
- (void)forbidSharePasteboardIfNeededWithQuery:(id)a0;
- (void)popTopControllerIfNeeded;
- (BOOL)shouldRedirectNearbyUndertakeSchema:(id)a0;
- (BOOL)isLifeOfflineSituation:(id)a0;
- (BOOL)isToIMChatCenter:(id)a0;
- (void)preloadIMIfNecessary:(id)a0;
- (void).cxx_destruct;

@end
