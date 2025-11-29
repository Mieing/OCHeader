@class NSString;

@interface AWEIMXBridgeImPresentGroupPanelMethod : BDXBridgeMethod <AWEIMGroupChatPanelControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)didCreateGroupWithResult:(id)a0;
- (void)__invokeBlockWithResult:(id)a0 status:(id)a1;
- (void)__didCreateGroupWithResult:(id)a0;
- (long long)authType;
- (void)setCompletionHandler:(id /* block */)a0;
- (id /* block */)completionHandler;
- (id)methodName;

@end
