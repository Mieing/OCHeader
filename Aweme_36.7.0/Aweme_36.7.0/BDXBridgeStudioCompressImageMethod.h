@interface BDXBridgeStudioCompressImageMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)saveImage:(id)a0;
- (struct { BOOL x0; id x1; id x2; struct CGSize { double x0; double x1; } x3; })compressImage:(id)a0 originPath:(id)a1 config:(id)a2;
- (long long)authType;
- (id)methodName;

@end
