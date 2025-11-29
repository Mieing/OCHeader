@class NSString;

@interface LiteAppJsApiEmoticonGetEmoticonDesigner : LiteAppJsApi <IStoreEmotionDesignerInfoMgrExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)onGetDesignerForDesignerId:(id)a0 AndDesigner:(id)a1;

@end
