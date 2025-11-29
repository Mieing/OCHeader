@interface CJPayBridgePlugin_saveImgToAlbum : TTBridgePlugin

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)saveImgToAlbumWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3 command:(id)a4;
- (void)trySaveToAlbumWithData:(id)a0 callback:(id /* block */)a1 command:(id)a2;
- (void)p_callBackFailWithMsg:(id)a0 callback:(id /* block */)a1;
- (void)saveToAlbumWithData:(id)a0 callback:(id /* block */)a1;
- (BOOL)p_isAuthorizedWithStatus:(long long)a0;

@end
