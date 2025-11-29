@class NSString;

@interface FICImageDescription : NSObject

@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (nonatomic) double imageScale;
@property (nonatomic) unsigned int bitmapInfo;
@property (nonatomic) unsigned long long bitsPerPixel;
@property (nonatomic) unsigned long long bitsPerComponent;
@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (nonatomic) unsigned long long bytesPerRow;
@property (readonly, nonatomic) unsigned long long imageByteLength;
@property (readonly, nonatomic) unsigned long long imageOriginByteLength;
@property (retain, nonatomic) NSString *colorSpaceName;
@property (nonatomic) long long renderingModel;
@property (nonatomic) BOOL hasDecodeBefore;

- (void)updateImageByteLength:(unsigned long long)a0;
- (id)initWithDescriptionDict:(id)a0;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (id)toDict;

@end
