@interface TPThumbplayerCapabilityHelper : NSObject

+ (BOOL)isVCodecCapabilitySupport:(int)a0 codecid:(int)a1 width:(int)a2 height:(int)a3 profile:(int)a4 level:(int)a5;
+ (BOOL)isVCodecCapabilitySupport:(int)a0 codecid:(int)a1 width:(int)a2 height:(int)a3 profile:(int)a4 level:(int)a5 framerate:(int)a6;
+ (BOOL)isVCodecCapabilityCanSupport:(int)a0 width:(int)a1 height:(int)a2 profile:(int)a3 level:(int)a4;
+ (BOOL)isVCodecCapabilityCanSupport:(int)a0 width:(int)a1 height:(int)a2 profile:(int)a3 level:(int)a4 framerate:(int)a5;
+ (BOOL)addVCodecBlacklist:(int)a0 codecid:(int)a1 blackPropertyRange:(struct TPVCodecPropertyRange { int x0; int x1; int x2; int x3; int x4; int x5; })a2;
+ (BOOL)addVCodecWhitelist:(int)a0 codecid:(int)a1 whitePropertyRange:(struct TPVCodecPropertyRange { int x0; int x1; int x2; int x3; int x4; int x5; })a2;
+ (struct map<TPCodecID, TPVCodecMaxCapability, std::less<TPCodecID>, std::allocator<std::pair<const TPCodecID, TPVCodecMaxCapability>>> { struct __tree<std::__value_type<TPCodecID, TPVCodecMaxCapability>, std::__map_value_compare<TPCodecID, std::__value_type<TPCodecID, TPVCodecMaxCapability>, std::less<TPCodecID>>, std::allocator<std::__value_type<TPCodecID, TPVCodecMaxCapability>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TPCodecID, TPVCodecMaxCapability>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<TPCodecID, std::__value_type<TPCodecID, TPVCodecMaxCapability>, std::less<TPCodecID>>> { unsigned long long x0; } x2; } x0; })getVCodecDecoderMaxCapabilityMap:(int)a0;
+ (struct TPVCodecMaxCapability { int x0; int x1; int x2; int x3; })getVCodecMaxCapability:(int)a0;
+ (BOOL)isDDSupported;
+ (BOOL)isDDPlusSupported;
+ (BOOL)isDolbyDSSupported;
+ (struct vector<tpdrm::DrmSchemeType, std::allocator<tpdrm::DrmSchemeType>> { int *x0; int *x1; struct __compressed_pair<tpdrm::DrmSchemeType *, std::allocator<tpdrm::DrmSchemeType>> { int *x0; } x2; })getDRMCapabilities;
+ (BOOL)isDRMsupport:(int)a0;
+ (BOOL)isHDRVividSupported;
+ (BOOL)isDolbyVisionSupported;
+ (BOOL)isHDR10Supported;
+ (BOOL)isACodecCapabilitySupport:(int)a0 codecid:(int)a1 profile:(int)a2 level:(int)a3;
+ (BOOL)isACodecCapabilitySupport:(int)a0 codecid:(int)a1 samplerate:(int)a2 channels:(int)a3 bitrate:(int)a4 profile:(int)a5 level:(int)a6;
+ (BOOL)addACodecBlacklist:(int)a0 codecid:(int)a1 blackProperty:(struct TPACodecPropertyRange { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; })a2;
+ (BOOL)addACodecWhitelist:(int)a0 codecid:(int)a1 whiteProperty:(struct TPACodecPropertyRange { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; })a2;

@end
