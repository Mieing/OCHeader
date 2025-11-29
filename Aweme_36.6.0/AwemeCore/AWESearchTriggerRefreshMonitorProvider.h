@class NSString;

@interface AWESearchTriggerRefreshMonitorProvider : NSObject <AWESearchStageMonitorEventProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldSwitchToV3Cost;
+ (BOOL)shouldFixTimingTotalError;
+ (BOOL)shouldFixJsonParse;

- (id)handleEventDidStart:(id)a0;
- (id)handleEventDidBindContext:(id)a0;
- (id)handleEventAddStage:(id)a0 withAppendParams:(id)a1;
- (id)handleEventDidEnd:(id)a0;
- (id)eliminateKeysBeforeSendEvent;
- (void)handleFlowDetailEventsWith:(id)a0 monitorValue:(id)a1 firstScreenEndTS:(double)a2;
- (void)handleStageMergeCostWith:(id)a0 monitorValue:(id)a1;
- (unsigned long long)stageCostWithPreStageTSArray:(id)a0 curStageTSArray:(id)a1;
- (id)eventName;

@end
