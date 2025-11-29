@interface AWEPayBridgePlugin_SKM : TTBridgePlugin

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)skmSavePayeeCodeToAlbumWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3 command:(id)a4;
- (void)skmVoiceBroadcastSwitchWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3 command:(id)a4;
- (void)skmGetPayeeCodeInfoWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (void)skmVoiceCheckWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;

@end
