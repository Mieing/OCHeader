@interface BDXBridgeOpenPlatformOpenEntertainmentVideoDetailMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)openVideoDetailWithElement:(id)a0 paramModel:(id)a1 completionHandler:(id /* block */)a2;
- (void)openEntertainmentVideoNewDetailWithElement:(id)a0 paramModel:(id)a1 completionHandler:(id /* block */)a2;
- (void)enterLiveRoomWithElement:(id)a0 completionHandler:(id /* block */)a1;
- (void)enterPlayBackRoomWithElement:(id)a0 completionHandler:(id /* block */)a1;
- (long long)authType;
- (id)methodName;

@end
