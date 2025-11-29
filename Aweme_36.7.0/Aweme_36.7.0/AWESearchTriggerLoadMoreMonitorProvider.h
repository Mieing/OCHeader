@class NSString;

@interface AWESearchTriggerLoadMoreMonitorProvider : NSObject <AWESearchStageMonitorEventProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)handleEventDidStart:(id)a0;
- (id)handleEventAddStage:(id)a0 withAppendParams:(id)a1;
- (id)handleEventDidEnd:(id)a0;
- (id)eliminateKeysBeforeSendEvent;
- (id)eventName;

@end
