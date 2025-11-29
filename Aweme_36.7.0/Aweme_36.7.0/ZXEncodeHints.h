@class NSNumber, ZXPDF417Dimensions, ZXQRCodeErrorCorrectionLevel, ZXDimension;

@interface ZXEncodeHints : NSObject

@property (nonatomic) unsigned long long encoding;
@property (nonatomic) int dataMatrixShape;
@property (retain, nonatomic) ZXDimension *minSize;
@property (retain, nonatomic) ZXDimension *maxSize;
@property (retain, nonatomic) ZXQRCodeErrorCorrectionLevel *errorCorrectionLevel;
@property (retain, nonatomic) NSNumber *errorCorrectionLevelPDF417;
@property (retain, nonatomic) NSNumber *errorCorrectionPercent;
@property (retain, nonatomic) NSNumber *margin;
@property (nonatomic) BOOL showLongLines;
@property (nonatomic) BOOL pdf417Compact;
@property (nonatomic) int pdf417Compaction;
@property (retain, nonatomic) ZXPDF417Dimensions *pdf417Dimensions;
@property (retain, nonatomic) NSNumber *aztecLayers;
@property (retain, nonatomic) NSNumber *qrVersion;
@property (nonatomic) BOOL gs1Format;

+ (id)hints;

- (void).cxx_destruct;

@end
