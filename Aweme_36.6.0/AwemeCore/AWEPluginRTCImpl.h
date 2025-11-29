@class AWERTCEngine, NSString;

@interface AWEPluginRTCImpl : NSObject <BDPRTCPluginDelegate, ByteRTCEngineDelegate, ByteRTCMonitorDelegate>

@property (retain, nonatomic) AWERTCEngine *engine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (id)createRtcEngine:(id)a0 cb:(id)a1 businessID:(id)a2;
- (id)createRtcEngine:(id)a0 cb:(id)a1;
- (void)onMonitorLog:(id)a0 withType:(id)a1;
- (void)rtcEngine:(id)a0 onConnectionStateChanged:(long long)a1;
- (void)rtcEngine:(id)a0 onError:(long long)a1;
- (void)rtcEngine:(id)a0 onFirstLocalAudioFrame:(long long)a1;
- (void)rtcEngine:(id)a0 onFirstRemoteAudioFrame:(id)a1;
- (void)rtcEngine:(id)a0 onLocalAudioPropertiesReport:(id)a1;
- (void)rtcEngine:(id)a0 onRemoteAudioPropertiesReport:(id)a1 totalRemoteVolume:(long long)a2;
- (void)rtcEngine:(id)a0 onUserStartAudioCapture:(id)a1 uid:(id)a2;
- (void)rtcEngine:(id)a0 onUserStopAudioCapture:(id)a1 uid:(id)a2;
- (void)rtcEngine:(id)a0 onWarning:(long long)a1;
- (void).cxx_destruct;

@end
