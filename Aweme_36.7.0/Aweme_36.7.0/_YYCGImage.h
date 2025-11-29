@interface _YYCGImage : NSObject <NSCoding, NSCopying>

@property (nonatomic) struct CGImage { } *CGImage;

+ (id)imageWithCGImage:(struct CGImage { } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
