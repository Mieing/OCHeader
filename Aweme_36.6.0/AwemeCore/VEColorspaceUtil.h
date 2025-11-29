@interface VEColorspaceUtil : NSObject

+ (struct __CFString { } *)colorTransitionFromAVColorSpace:(int)a0;
+ (struct __CFString { } *)colorMatrixFromAVColorSpace:(int)a0;
+ (struct __CFString { } *)colorPrimariesFromAVColorPrimaries:(int)a0;
+ (BOOL)isFullcolorRangeFromAVColorRange:(int)a0;
+ (void)restoreColorInfoToPixelBuffer:(struct __CVBuffer { } *)a0 pipeline:(struct shared_ptr<core::TEVideoPipeline> { struct TEVideoPipeline *x0; struct __shared_weak_count *x1; })a1;
+ (long long)veTransferFunctionFromAVTransferCharacteristic:(int)a0;
+ (void)restoreColorInfoToPixelBuffer:(struct __CVBuffer { } *)a0 colorInfo:(struct tagSTEColorInfo { struct _EnumWrap<int> { int x0; } x0; struct _EnumWrap<int> { int x0; } x1; struct _EnumWrap<int> { int x0; } x2; struct _EnumWrap<int> { int x0; } x3; int x4; })a1;
+ (int)avColorPrimariesFromVEColorPrimaries:(long long)a0;
+ (int)avTransferCharacteristicFromVEColorTransferFunction:(long long)a0;
+ (int)avColorspaceFromVEColorMatrix:(long long)a0;
+ (void)restoreColorInfoToSampleData:(id)a0 pipeline:(struct shared_ptr<core::TEVideoPipeline> { struct TEVideoPipeline *x0; struct __shared_weak_count *x1; })a1;
+ (void)restoreColorInfoToPipeline:(struct shared_ptr<core::TEVideoPipeline> { struct TEVideoPipeline *x0; struct __shared_weak_count *x1; })a0 sampleData:(id)a1;
+ (void)restoreColorSpaceToColorInfo:(void *)a0 colorSpaceInfo:(id)a1;
+ (struct tagSTEColorInfo { struct _EnumWrap<int> { int x0; } x0; struct _EnumWrap<int> { int x0; } x1; struct _EnumWrap<int> { int x0; } x2; struct _EnumWrap<int> { int x0; } x3; int x4; })colorInfoFromPixelBuffer:(struct __CVBuffer { } *)a0;
+ (long long)veTransferFunctionFromFormatDesc:(struct __CFString { } *)a0;
+ (long long)veColorPrimariesFromFormatDesc:(struct __CFString { } *)a0;
+ (long long)veMatrixFromFormatDesc:(struct __CFString { } *)a0;
+ (id)colorspaceInfoFromConfigData:(id)a0;
+ (void)restoreHDRMetadataToSampleData:(id)a0 pipeline:(struct shared_ptr<core::TEVideoPipeline> { struct TEVideoPipeline *x0; struct __shared_weak_count *x1; })a1;
+ (void)restoreHDRMetadataToPixelBuffer:(struct __CVBuffer { } *)a0 pipeline:(struct shared_ptr<core::TEVideoPipeline> { struct TEVideoPipeline *x0; struct __shared_weak_count *x1; })a1;
+ (struct TEHDRMetadata { struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x0; } x2; } x0; struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x0; } x2; } x1; struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x0; } x2; } x2; })hdrMetadataFromPixelBuffer:(struct __CVBuffer { } *)a0;
+ (id)generateContentLightLevelInfo:(float)a0 maxFrameAverageLightLevel:(float)a1;
+ (id)generateMasteringDisplayColorVolume:(float)a0 rY:(float)a1 gX:(float)a2 gY:(float)a3 bX:(float)a4 bY:(float)a5 whiteX:(float)a6 whiteY:(float)a7 luminanceMin:(float)a8 luminanceMax:(float)a9;

@end
