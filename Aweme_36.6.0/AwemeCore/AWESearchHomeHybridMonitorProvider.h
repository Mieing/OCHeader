@class NSString;

@interface AWESearchHomeHybridMonitorProvider : NSObject <AWESearchStageMonitorEventProvider>

@property (copy, nonatomic) NSString *customEventName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)handleEventDidStart:(id)a0;
- (id)handleEventAddStage:(id)a0 withAppendParams:(id)a1;
- (id)handleEventDidEnd:(id)a0;
- (id)eliminateKeysBeforeSendEvent;
- (void).cxx_destruct;
- (id)initWithEventName:(id)a0;
- (id)eventName;

@end
