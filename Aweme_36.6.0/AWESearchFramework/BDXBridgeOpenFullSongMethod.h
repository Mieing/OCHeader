@interface BDXBridgeOpenFullSongMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)openPlayerWithPlaylistId:(id)a0 extra:(id)a1 trackParams:(id)a2;
- (void)openPlayerWithModel:(id)a0 extra:(id)a1 trackParams:(id)a2;
- (id)findCurrentVCWithView:(id)a0;
- (long long)authType;
- (id)methodName;

@end
