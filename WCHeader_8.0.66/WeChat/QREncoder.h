@class UIImage;

@interface QREncoder : NSObject

@property (retain, nonatomic) UIImage *image;

+ (struct shared_ptr<unsigned char> { char *x0; struct __shared_weak_count *x1; })imageDataFromImage:(id)a0;
+ (unsigned int)getCoverColorWithCurrentIndex:(int)a0 baseSize:(struct CGSize { double x0; double x1; })a1 baseColor:(unsigned int)a2 coverRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 coverImageData:(struct shared_ptr<unsigned char> { char *x0; struct __shared_weak_count *x1; })a4;

- (void)dealloc;
- (id)AESEncryptString:(id)a0 withPassphrase:(id)a1;
- (id)encodeCStringWithECLevel:(int)a0 version:(int)a1 cstring:(const char *)a2;
- (id)encodeWithECLevel:(int)a0 version:(int)a1 string:(id)a2 AESPassphrase:(id)a3;
- (id)encodeWithECLevel:(int)a0 version:(int)a1 string:(id)a2;
- (id)renderDataMatrix:(id)a0 imageDimension:(int)a1 coverImage:(id)a2;
- (id)renderDataMatrix:(id)a0 imageDimension:(int)a1;
- (int)getApproximatePadding:(id)a0 imageDimension:(int)a1;

@end
