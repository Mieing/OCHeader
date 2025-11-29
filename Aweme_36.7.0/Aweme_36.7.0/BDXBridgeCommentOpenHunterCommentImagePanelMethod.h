@interface BDXBridgeCommentOpenHunterCommentImagePanelMethod : BDXBridgeMethod

+ (void)publishCommentPanelJSBEventWithName:(id)a0 params:(id)a1;
+ (void)openLongPressPanel:(id)a0 commentModel:(id)a1 index:(long long)a2 longPressPanelCustomConfig:(id)a3;
+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)attachTrackServiceTo:(id)a0 paramModel:(id)a1;
- (void)invokeMultiMediaWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)commentDataConversio:(id)a0;
- (void)preloadImage:(id)a0 dataList:(id)a1;
- (id)makeParams:(id)a0;
- (long long)authType;
- (id)methodName;

@end
