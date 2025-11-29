@class NSString;

@interface MMFICImageFormat : NSObject <NSCopying>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *family;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly, nonatomic) unsigned int bitmapInfo;
@property (readonly, nonatomic) unsigned int bytesPerPixel;
@property (readonly, nonatomic) unsigned int bitsPerComponent;
@property (nonatomic) unsigned int maxImgCount;
@property (nonatomic) unsigned int cpuzSize;
@property (nonatomic) unsigned int pageSize;
@property (nonatomic) unsigned int version;

+ (id)formatWithName:(id)a0 family:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2 maxImgCount:(unsigned int)a3 version:(unsigned int)a4;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
