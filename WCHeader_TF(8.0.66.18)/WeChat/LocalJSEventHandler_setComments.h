@class NSString;

@interface LocalJSEventHandler_setComments : LocalJSEventHandler_BaseEvent <ITopStoryPluginMsgExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onRequestSetCommontEnd:(id)a0 requestOpType:(unsigned int)a1;

@end
