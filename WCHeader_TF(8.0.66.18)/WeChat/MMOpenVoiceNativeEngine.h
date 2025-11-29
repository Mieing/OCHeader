@interface MMOpenVoiceNativeEngine : NSObject

+ (struct IWXConfService { void /* function */ **x0; } *)getConfInst;
+ (int)initEngine:(id)a0 subAppId:(id)a1 sessionKey:(id)a2 audioType:(int)a3 maxWidth:(int)a4 maxHeight:(int)a5 videoRatio:(int)a6 videoConfig:(int)a7 forceCellularNetwork:(BOOL)a8 nCallback:(struct IWXConfCallback { void /* function */ **x0; } *)a9;
+ (int)GetCPUCapacity;
+ (id)generateInitInfo:(id)a0 subAppId:(id)a1 sessionKey:(id)a2 audioType:(int)a3 maxWidth:(int)a4 maxHeight:(int)a5 videoRatio:(int)a6 videoConfig:(int)a7 forceCellularNetwork:(BOOL)a8;
+ (int)updateSessionKey:(id)a0;
+ (int)joinRoom:(long long)a0 roomType:(int)a1 networkType:(int)a2 muteAudio:(BOOL)a3 videoConfig:(int)a4 videoRatio:(int)a5 fixedVideoRes:(int)a6 maxFPS:(int)a7;
+ (int)sendAudioData:(id)a0 delay:(int)a1;
+ (int)getAudioData:(char *)a0 dataLength:(int)a1;
+ (int)sendVideoData:(char *)a0 dataLen:(int)a1 width:(int)a2 height:(int)a3 format:(int)a4;
+ (int)sendVideoData:(struct ImagePlane { int x0; int x1; int x2; void *x3; void *x4[4]; long long x5[4]; } *)a0;
+ (int)getVoiceActivity:(int)a0;
+ (int)SwitchAV:(BOOL)a0 bOpenVideo:(BOOL)a1 bScreenStatus:(BOOL)a2;
+ (int)setCmdData:(int)a0 data:(id)a1;
+ (int)setCmdData:(int)a0 dataPtr:(char *)a1 dataLen:(int)a2;
+ (void)onNetworkChanged:(int)a0;
+ (int)exitRoom:(int)a0;
+ (int)uninit;
+ (int)imageConvert:(void *)a0 dstImg:(void *)a1;
+ (int)subScribeVideoAndResList:(id)a0 screenMembers:(id)a1;
+ (int)sendCmdMsg:(id)a0 targetMemberId:(int)a1;

@end
