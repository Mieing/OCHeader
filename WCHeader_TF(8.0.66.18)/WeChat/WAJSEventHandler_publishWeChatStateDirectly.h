@class NSString;

@interface WAJSEventHandler_publishWeChatStateDirectly : WAJSEventHandler_publishWeChatState <MMImageLoaderObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)doPublish:(id)a0;
- (void)doPublish:(id)a0 image:(id)a1;

@end
