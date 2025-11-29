@class NSArray;

@interface AWEUGKitImpl.AWEDynamicTriggerTimeLiveActivityListener : NSObject <AWEUGEventListenerDelegate> {
    void /* unknown type, empty encoding */ triggerTimeConditionModel;
    void /* function */ eventList;
    void /* unknown type, empty encoding */ actionDelegate;
}

@property (nonatomic, copy) NSArray *eventList;

- (void)reportEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
