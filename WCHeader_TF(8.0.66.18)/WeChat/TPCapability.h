@interface TPCapability : NSObject

+ (BOOL)isVCodecCapabilitySupport:(long long)a0 codecId:(long long)a1 width:(int)a2 height:(int)a3 profile:(int)a4 level:(int)a5;
+ (BOOL)isVCodecCapabilitySupport:(long long)a0 codecId:(long long)a1 width:(int)a2 height:(int)a3 profile:(int)a4 level:(int)a5 framerate:(int)a6;
+ (BOOL)isVCodecCapabilityCanSupport:(long long)a0 width:(int)a1 height:(int)a2 profile:(int)a3 level:(int)a4;
+ (BOOL)isVCodecCapabilityCanSupport:(long long)a0 width:(int)a1 height:(int)a2 profile:(int)a3 level:(int)a4 framerate:(int)a5;
+ (BOOL)addVCodecBlacklist:(long long)a0 codecId:(long long)a1 blackPropertyRange:(id)a2;
+ (id)getVCodecDecoderMaxCapability:(long long)a0 codecId:(long long)a1;
+ (id)getVCodecMaxCapability:(long long)a0;
+ (BOOL)isDolbyVisionSupported;
+ (BOOL)isDDSupported;
+ (BOOL)isDDPlusSupported;
+ (BOOL)isDolbyDSSupported;
+ (BOOL)isHDR10Supported;
+ (BOOL)isHighFrameRateHDR10SupportedWithFps:(int)a0;
+ (BOOL)isHDRsupport:(long long)a0 profile:(int)a1 level:(int)a2;
+ (BOOL)isACodecCapabilitySupport:(long long)a0 codecid:(long long)a1 profile:(int)a2 level:(int)a3;
+ (BOOL)isPictureInPictureSupported;
+ (BOOL)supportMetal;
+ (double)maxPlaySpeed;
+ (long long)nativeDrmTypeToTPDrmType:(int)a0;
+ (id)getDRMCapabilities;
+ (BOOL)isFairPlaySupport;
+ (BOOL)isDRMSupport:(long long)a0;

@end
