@class NSString;

@interface WAJSEventHandler_publishWeChatState : WAJSEventHandler_BaseEvent <TextStatePublishViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateSourceIdFromAppId:(id)a0 isMiniGame:(BOOL)a1;
+ (id)generateSourceNameFromNickName:(id)a0 debugMode:(unsigned int)a1;

@end
