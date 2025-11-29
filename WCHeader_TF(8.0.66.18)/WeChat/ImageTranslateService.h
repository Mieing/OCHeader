@class NSString, ImageTranslateRequest, NSObject;
@protocol OS_dispatch_queue;

@interface ImageTranslateService : MMUserService <MMServiceProtocol, PBMessageObserverDelegate> {
    struct shared_ptr<wevision2::TextRecognizer> { struct TextRecognizer *__ptr_; struct __shared_weak_count *__cntrl_; } _text_recognizer;
    NSObject<OS_dispatch_queue> *_asyncQueue;
}

@property (retain, nonatomic) ImageTranslateRequest *currentRequest;
@property (nonatomic) BOOL initOCRSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportIDKey:(unsigned int)a0 value:(unsigned int)a1;

- (id)init;
- (BOOL)isForbidOCREntry;
- (BOOL)isOpenMobileOCR;
- (BOOL)checkWordDetectSwitch:(unsigned int)a0;
- (BOOL)checkWordDetectSwitchInOCR:(unsigned int)a0;
- (BOOL)isPicTranslationAvaliable:(unsigned int)a0;
- (BOOL)isPicTranslationSupportUserLanguage;
- (long long)isMobileOCRModelExsit;
- (BOOL)initModel;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)asyncDetectWord:(id)a0 imageId:(id)a1 completionHandler:(id /* block */)a2;
- (id)detectImageWithMobileOCR:(id)a0;
- (id)detectImage:(id)a0;
- (void)translateImage:(id)a0 statInfo:(id)a1 completionHandler:(id /* block */)a2;
- (void)clearCurrentRequest;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
