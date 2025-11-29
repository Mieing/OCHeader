@class AWESearchTriggerRefreshMonitorProvider, NSString;

@interface AWETopicTriggerRefreshMonitorProvider : NSObject <AWESearchStageMonitorEventProvider>

@property (retain, nonatomic) AWESearchTriggerRefreshMonitorProvider *realImp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)handleEventDidStart:(id)a0;
- (id)handleEventAddStage:(id)a0 withAppendParams:(id)a1;
- (id)handleEventDidEnd:(id)a0;
- (id)eliminateKeysBeforeSendEvent;
- (void).cxx_destruct;
- (id)init;
- (id)eventName;

@end
