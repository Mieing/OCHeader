@interface BDXBridgeDeleteGuestDataMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)showConfirmDeleteGuestDataDialogWithClickBlock:(id /* block */)a0;
- (long long)authType;
- (id)methodName;

@end
