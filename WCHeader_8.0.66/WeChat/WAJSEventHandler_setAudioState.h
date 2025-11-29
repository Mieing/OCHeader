@class NSString;

@interface WAJSEventHandler_setAudioState : WAJSEventHandler_BaseEvent <IJSContextPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onError:(id)a0;
- (void)onSuccess:(id)a0;

@end
