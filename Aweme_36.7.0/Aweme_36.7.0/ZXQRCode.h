@class ZXByteMatrix, ZXQRCodeMode, ZXQRCodeErrorCorrectionLevel, ZXQRCodeVersion;

@interface ZXQRCode : NSObject

@property (retain, nonatomic) ZXQRCodeMode *mode;
@property (retain, nonatomic) ZXQRCodeErrorCorrectionLevel *ecLevel;
@property (retain, nonatomic) ZXQRCodeVersion *version;
@property (nonatomic) int maskPattern;
@property (retain, nonatomic) ZXByteMatrix *matrix;

+ (BOOL)isValidMaskPattern:(int)a0;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
