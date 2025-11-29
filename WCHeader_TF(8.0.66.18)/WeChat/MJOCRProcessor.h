@class NSObject, NSRecursiveLock;
@protocol OS_dispatch_queue;

@interface MJOCRProcessor : NSObject {
    BOOL _isInitSuccess;
    NSRecursiveLock *_lock;
    struct shared_ptr<wevision2::TextRecognizer> { struct TextRecognizer *__ptr_; struct __shared_weak_count *__cntrl_; } _textRecognizer;
    NSObject<OS_dispatch_queue> *_ocrQueue;
}

+ (id)convertToSDRWithImage:(id)a0;

- (id)init;
- (void)dealloc;
- (void)InitModel;
- (BOOL)checkModelFilesExist;
- (BOOL)checkIfInitSuccess;
- (double)detectTextWithImage:(id)a0;
- (id)extractTextWithImage:(id)a0;
- (void)asyncDetectTextWithImage:(id)a0 completionHandler:(id /* block */)a1;
- (void)asyncExtractTextWithImage:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
