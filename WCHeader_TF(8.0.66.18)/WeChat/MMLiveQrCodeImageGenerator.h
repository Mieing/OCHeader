@interface MMLiveQrCodeImageGenerator : NSObject

+ (id)qrCodeImageWithContent:(id)a0 errorCorrectionLevel:(unsigned long long)a1 minimumDimension:(double)a2;
+ (id)qrCodeImageWithContent:(id)a0 errorCorrectionLevel:(unsigned long long)a1 minimumDimension:(double)a2 paddingRatio:(double)a3 backgroundColor:(id)a4 foregroundColor:(id)a5 centerImage:(id)a6 centerImageRatio:(double)a7 style:(unsigned long long)a8;
+ (id)standardStyleQrCodeImageWithEncodedQrCode:(struct QBAR_IMAGE { int x0; int x1; struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x0; } x2; } x2; })a0 minimumDimension:(double)a1 paddingRatio:(double)a2 backgroundColor:(id)a3 foregroundColor:(id)a4 centerImage:(id)a5 centerImageRatio:(double)a6;
+ (id)bulletsStyleQrCodeImageWithEncodedQrCode:(struct QBAR_IMAGE { int x0; int x1; struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x0; } x2; } x2; })a0 minimumDimension:(double)a1 paddingRatio:(double)a2 backgroundColor:(id)a3 foregroundColor:(id)a4 centerImage:(id)a5 centerImageRatio:(double)a6;
+ (struct CGImage { } *)createSquareCgImageForCenterImage:(id)a0;

@end
