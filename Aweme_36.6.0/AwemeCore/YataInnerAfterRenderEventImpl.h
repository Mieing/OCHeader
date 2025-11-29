@class NSMutableDictionary;

@interface YataInnerAfterRenderEventImpl : YataEventBaseImpl

@property (retain, nonatomic) NSMutableDictionary *afterRenderMap;

- (id)initWithYataInstance:(id)a0;
- (void)triggerEventWithEventData:(id)a0;
- (void)registerTriggerEvents:(id)a0 renderNode:(id)a1;
- (BOOL)isTriggerEventsEmpty;
- (void).cxx_destruct;
- (id)name;

@end
