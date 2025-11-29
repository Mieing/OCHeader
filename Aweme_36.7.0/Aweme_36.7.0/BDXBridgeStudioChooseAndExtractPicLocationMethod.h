@interface BDXBridgeStudioChooseAndExtractPicLocationMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)tryShowAlbumPickerWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)showAlbumPickerWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)albumService;
- (void)setAlbumService:(id)a0;
- (long long)authType;
- (id)methodName;

@end
