@class ZXQRCodeErrorCorrectionLevel;

@interface ZXQRCodeFormatInformation : NSObject

@property (readonly, nonatomic) ZXQRCodeErrorCorrectionLevel *errorCorrectionLevel;
@property (readonly, nonatomic) char dataMask;

+ (id)doDecodeFormatInformation:(int)a0 maskedFormatInfo2:(int)a1;
+ (id)decodeFormatInformation:(int)a0 maskedFormatInfo2:(int)a1;
+ (int)numBitsDiffering:(int)a0 b:(int)a1;

- (id)initWithFormatInfo:(int)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
