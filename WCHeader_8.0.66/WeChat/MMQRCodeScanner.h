@class NSObject;
@protocol MMQRCodeScannerDelegate;

@interface MMQRCodeScanner : MMObject {
    int m_inputWidth;
    int m_inputHeight;
    char *m_scanBuffer;
    struct QBar { struct QBarDecode *x0; } *_qbar;
}

@property (nonatomic) BOOL active;
@property (weak, nonatomic) NSObject<MMQRCodeScannerDelegate> *delegate;

- (id)init;
- (void)dealloc;
- (void)setOutputWidth:(float)a0 andHeight:(float)a1;
- (void)startQRScan;
- (void)stopQRScan;
- (void)scanVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)getStringFromUTF8Bytes:(const char *)a0 LENGTH:(int)a1;
- (void)printArray:(struct vector<QBAR_POINT, std::allocator<QBAR_POINT>> { struct QBAR_POINT *x0; struct QBAR_POINT *x1; struct __compressed_pair<QBAR_POINT *, std::allocator<QBAR_POINT>> { struct QBAR_POINT *x0; } x2; })a0;
- (void).cxx_destruct;

@end
