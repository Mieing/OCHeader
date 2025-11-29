@class NSData;

@interface VEColorSpaceInfo : NSObject <NSCopying>

@property (nonatomic) long long colorPrimaries;
@property (nonatomic) long long transferFunction;
@property (nonatomic) long long ycbcrMatrix;
@property (nonatomic) BOOL isFullRange;
@property (retain, nonatomic) NSData *masteringDisplayColorVolumeData;
@property (retain, nonatomic) NSData *contentLightLevelInfoData;
@property (retain, nonatomic) NSData *ambientViewingEnvironmentData;

+ (BOOL)isExtendColorSpaceFromAssets:(id)a0;
+ (id)determineMainColorInfoForVideoAssets:(id)a0 colorInfoCacheDict:(id)a1 photoInfoAssets:(id)a2;
+ (int)fetchBitsPerComponentFromTracks:(id)a0;
+ (id)fetchImageColorSpaceSuffix:(struct __CVBuffer { } *)a0;
+ (int)selectColorSpaceForEffect:(id)a0;
+ (unsigned int)pixelFormatFromVideoTracks:(id)a0 transPixelFormat:(unsigned long long)a1 isEncode:(BOOL)a2;
+ (unsigned int)pixelFormatFromTransferFunction:(long long)a0 transPixelFormat:(unsigned long long)a1 isEncode:(BOOL)a2;
+ (int)fetchBitsPerComponentFromFormat:(struct opaqueCMFormatDescription { } *)a0;
+ (BOOL)isExtendColorSpace:(struct opaqueCMFormatDescription { } *)a0;
+ (BOOL)isSDR2020ColorSpace:(struct opaqueCMFormatDescription { } *)a0;
+ (void *)formatDescriptionColorPrimaries:(long long)a0;
+ (void *)formatDescriptionTransferFunction:(long long)a0;
+ (void)determineColorspaceImage:(id)a0 asset:(id)a1 mainColorSpaceInfoCache:(id)a2 mainColorSpaceInfo:(id)a3;
+ (BOOL)isHDRColorSpace:(struct opaqueCMFormatDescription { } *)a0;
+ (BOOL)isHDRPQSpecialColorSpace:(struct opaqueCMFormatDescription { } *)a0;
+ (BOOL)isHDRPixelBuffer:(struct __CVBuffer { } *)a0;
+ (BOOL)isSDR2020ColorSpaceFromAssets:(id)a0;
+ (BOOL)resetPixelBufferHaveAttachments:(struct __CVBuffer { } *)a0 targetPixelBuffer:(struct __CVBuffer { } *)a1;
+ (id)fetchImageColorSpaceSuffixWithColorPrimaries:(long long)a0 transferFunction:(long long)a1;
+ (id)fetchImagePathColorSuffix:(id)a0;
+ (id)determineMainColorInfoForVideoFiles:(id)a0 colorInfoCacheDict:(id)a1 photoInfoAssets:(id)a2;
+ (BOOL)isP3PixelBuffer:(struct __CVBuffer { } *)a0;
+ (BOOL)isAppleLogColorSpace:(struct __CVBuffer { } *)a0;
+ (unsigned int)pixelFormatFromVideoTracks:(id)a0 transPixelFormat:(unsigned long long)a1;

- (void)copyValue:(id)a0;
- (void *)formatDescriptionColorPrimaries;
- (void *)formatDescriptionTransferFunction;
- (void *)formatDescriptionYCbCrMatrix;
- (id)avColorPrimaries;
- (id)avTransferFunction;
- (id)avYCbCrMatrix;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
