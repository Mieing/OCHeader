@class VEScan, UIImage;

@interface ACCScanPhotoServiceImp : NSObject

@property (retain, nonatomic) VEScan *scanSession;
@property (retain, nonatomic) UIImage *inputImage;

+ (void)preloadDetectResourcesModel;

- (void)cancelScanSession;
- (BOOL)canSupportQrcodeDetect;
- (id)qrCodeDectectParam;
- (void)scanInputImage;
- (id)startScanWithScanType:(unsigned long long)a0 scanImage:(id)a1;
- (void)startScanWithDelegate:(id)a0 scanType:(unsigned long long)a1 scanImage:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
