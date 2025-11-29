@class NSString;

@interface WAJSEventHandler_openWCPaySpecificView : WAJSEventHandler_BaseEvent <MMUseCaseCallback>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)call:(id)a0;

@end
