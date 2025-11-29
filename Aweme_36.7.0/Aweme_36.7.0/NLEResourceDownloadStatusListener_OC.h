@class NSString;
@protocol NLEResourceDownloadStatusDelegate;

@interface NLEResourceDownloadStatusListener_OC : NSObject <NLEResourceDownloadStatusDelegate> {
    struct shared_ptr<NLEResourceDownloadStatusListener> { struct NLEResourceDownloadStatusListener *__ptr_; struct __shared_weak_count *__cntrl_; } _observer;
}

@property (weak, nonatomic) id<NLEResourceDownloadStatusDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct shared_ptr<NLEResourceDownloadStatusListener> { struct NLEResourceDownloadStatusListener *x0; struct __shared_weak_count *x1; })cppListener;
- (void)onSuccess:(id)a0 isFromCache:(BOOL)a1;
- (void)onFail:(id)a0 errorCode:(long long)a1 errorMsg:(id)a2;
- (void)onAllResourceDownloadFinished;
- (void)onStart:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
