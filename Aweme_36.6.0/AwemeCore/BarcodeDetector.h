@class VNDetectBarcodesRequest;

@interface BarcodeDetector : NSObject

@property (retain, nonatomic) VNDetectBarcodesRequest *request;
@property (nonatomic) BOOL isProcessing;
@property (copy, nonatomic) id /* block */ resultCallback;
@property (nonatomic) struct __CVBuffer { } *currentPixelBuffer;
@property (nonatomic) BOOL isMultiCodeDetected;

- (id)initWithCodeType:(long long)a0 completion:(id /* block */)a1;
- (void)detectBarcodesInCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)p_cleanCachedPixelBuffer;
- (void)p_holdPixelBuffer:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
