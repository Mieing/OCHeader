@class NSRecursiveLock;

@interface IntelligentOCR : NSObject {
    BOOL m_intelligentOCRInitSuccess;
    BOOL m_intelligentOCRNPUInitSuccess;
    BOOL m_intelligentOCRSMEInitSuccess;
    BOOL m_intelligentOCRAMXInitSuccess;
    NSRecursiveLock *m_lock;
    struct shared_ptr<wevision2::TextRecognizer> { struct TextRecognizer *__ptr_; struct __shared_weak_count *__cntrl_; } _textRecognizer;
    struct shared_ptr<wevision2::TextRecognizer> { struct TextRecognizer *__ptr_; struct __shared_weak_count *__cntrl_; } _textRecognizerNPU;
    struct shared_ptr<wevision2::TextRecognizer> { struct TextRecognizer *__ptr_; struct __shared_weak_count *__cntrl_; } _textRecognizerSME;
    struct shared_ptr<wevision2::TextRecognizer> { struct TextRecognizer *__ptr_; struct __shared_weak_count *__cntrl_; } _textRecognizerAMX;
    struct shared_ptr<wevision2::PaymentCodeDetector> { struct PaymentCodeDetector *__ptr_; struct __shared_weak_count *__cntrl_; } _paymentCodeDetector;
    struct shared_ptr<wevision2::OCRReporter> { struct OCRReporter *__ptr_; struct __shared_weak_count *__cntrl_; } _ocrReporter;
}

+ (id)generatePHashWithImage:(id)a0;
+ (struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })rgbaMatFromUIImage:(id)a0 bgColor:(id)a1;

- (id)init;
- (void)dealloc;
- (void)InitModel;
- (BOOL)isEnableDataReport;
- (BOOL)checkNPUModel;
- (BOOL)canSupportNPU;
- (BOOL)canSupportSME;
- (BOOL)canSupportAMX;
- (BOOL)checkModelFilesExist;
- (BOOL)checkOCRInitSuccess;
- (BOOL)releaseXNetCache;
- (id)getOcrCopTextWithImage:(id)a0;
- (id)getOcrTextWithImage:(id)a0;
- (id)getOcrLineTextWithImage:(id)a0;
- (id)batchExecuteOcrText:(id)a0 error:(id)a1;
- (id)locateOcrTextPointInImage:(id)a0 searchText:(id)a1;
- (BOOL)executeOcrForEmoticonWithImageData:(id)a0 cpkey:(id)a1 result:(id *)a2 error:(id)a3;
- (id)getCodeClassify:(id)a0;
- (void)doReportIntelligentOCR;
- (id)getIntelligentOCRPerfEveryDayId;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
