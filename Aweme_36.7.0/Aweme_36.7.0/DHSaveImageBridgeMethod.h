@interface DHSaveImageBridgeMethod : DHBaseBridgeMethod

@property (copy, nonatomic) id /* block */ completionHandler;

- (Class)paramModelClass;
- (Class)resultModelClass;
- (void)callWithParamModel:(id)a0 completionHandlerWithTracker:(id /* block */)a1;
- (void)showNoAlbumPermissionAlertWithCert:(id)a0 cancelHandler:(id /* block */)a1 confirmHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (long long)authType;
- (id)methodName;
- (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end
