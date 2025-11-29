@class NSString;

@interface LocalJSEventHandler_postComments : LocalJSEventHandler_BaseEvent <ITopStoryPluginMsgExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onRequestPostCommentEnd:(id)a0 oriRequest:(id)a1 docId:(id)a2;

@end
