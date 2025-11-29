@interface BDXBridgeSearchMusicActionMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)postLynxAudioPlayNotification:(BOOL)a0 lynxView:(id)a1;
- (id)methodName;

@end
