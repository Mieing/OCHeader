@interface PixelTextureFormat : NSObject

@property unsigned int pixelBufferFormat;
@property unsigned long long texture1Format;
@property unsigned long long texture2Format;
@property unsigned long long texture3Format;
@property int planeCount;

+ (id)getPixelBufferFormatForDefaultRGB;
+ (id)getPixelBufferFormatFor64RGBAHalf;
+ (id)getPixelBufferFormatFromCVPixelFormat:(unsigned int)a0;
+ (id)getPixelBufferFormatFor10bitRGB;
+ (id)getPixelBufferFormatForDefaultNV12;
+ (id)getPixelBufferFormatForNV12FullRange;
+ (id)getPixelBufferFormatFor10bitNV12;
+ (id)getPixelBufferFormatFor10bitNV12FullRange;
+ (id)getPixelBufferFormatFor8bitI420;
+ (id)getPixelBufferFormatFor8bitI420FullRange;

- (unsigned long long)getTexFomat:(int)a0;
- (id)initWithPixelBufferFormat:(unsigned int)a0 texFmt:(unsigned long long)a1 secTexFmt:(unsigned long long)a2 thirdTexFmt:(unsigned long long)a3;
- (id)initWithPixelBufferFormat:(unsigned int)a0 texFmt:(unsigned long long)a1;
- (id)initWithPixelBufferFormat:(unsigned int)a0 texFmt:(unsigned long long)a1 secTexFmt:(unsigned long long)a2;

@end
