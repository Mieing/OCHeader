@interface AWEPigeonIMImpl : NSObject

+ (id)pigeonMethodName;
+ (id)create;

- (void)callMethod:(id)a0 arguments:(id)a1 completion:(id /* block */)a2;
- (void)__sendMessageWithparams:(id)a0 completion:(id /* block */)a1;
- (void)__getCurrentSecUidWithparams:(id)a0 completion:(id /* block */)a1;
- (void)__getSkinModeWithCompletion:(id /* block */)a0;
- (void)__getOneCardLogParamsWithparams:(id)a0 completion:(id /* block */)a1;
- (void)__didEndDisplayOneCardWithparams:(id)a0 completion:(id /* block */)a1;
- (void)__getOneCardMessageUIConfigWithparams:(id)a0 completion:(id /* block */)a1;
- (void)__getConversationInfoWithParams:(id)a0 completion:(id /* block */)a1;
- (void)__getCurrentUserIdWithParams:(id)a0 completion:(id /* block */)a1;
- (void)__deleteOneCardMessageCellWithParams:(id)a0 completion:(id /* block */)a1;
- (void)__showAuthIMMessageViewWithParams:(id)a0 completion:(id /* block */)a1;
- (void)__closePrivateMessageViewWithParams:(id)a0 completion:(id /* block */)a1;

@end
