@interface BDXBridgePlayMusicWithActionMethod : BDXBridgeMethod

+ (void)postLynxAudioPlayNotification:(BOOL)a0 lynxView:(id)a1 extraParam:(id)a2;
+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)methodName;

@end
