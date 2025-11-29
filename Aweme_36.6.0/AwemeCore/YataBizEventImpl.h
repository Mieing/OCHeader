@interface YataBizEventImpl : YataEventBaseImpl

- (void)triggerEventWithEventData:(id)a0;
- (void)onEventSubscribeNotFoundError:(id)a0 renderKey:(id)a1 eventName:(id)a2 params:(id)a3;
- (id)name;

@end
