@class NSRecursiveLock;

@interface IntelligentOCRPassport : NSObject {
    BOOL m_intelligentOCRInitSuccess;
    NSRecursiveLock *m_lock;
    struct shared_ptr<wevision2::CertificateDetector> { struct CertificateDetector *__ptr_; struct __shared_weak_count *__cntrl_; } m_passportDetector;
}

- (id)init;
- (id)getPassportModelPath;
- (void)InitModel;
- (BOOL)isEnableDataReport;
- (BOOL)checkModelFilesExist;
- (BOOL)checkOCRInitSuccess;
- (BOOL)releaseXNetCache;
- (int)detectPassportWithImage:(id)a0 passport:(void *)a1;
- (void)setDetectPassportWithMinArea:(int)a0 withMinCoverArea:(int)a1 withMinReflectArea:(int)a2 withMinBlurArea:(int)a3;
- (id)WarpPerspectiveRect:(id)a0 passport:(const void *)a1 padding_border:(int)a2;
- (id)UIImageFromPixelBuffer:(struct shared_ptr<wevision2::PixelBuffer> { struct PixelBuffer *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
