@class NSString, NLEResourceDownloadStatusListener_OC, NSHashTable, NLEMediaWrapper;

@interface NLEResourceSession : NSObject <NLEResourceDownloadStatusDelegate>

@property (retain, nonatomic) NLEMediaWrapper *nleMediaWrapper;
@property (retain, nonatomic) NLEResourceDownloadStatusListener_OC *downloadListener;
@property (retain, nonatomic) NSHashTable *downloadListenerArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelAsyncRender;
- (id)initWithNLEMedia:(id)a0;
- (void)onSuccess:(id)a0 isFromCache:(BOOL)a1;
- (void)onFail:(id)a0 errorCode:(long long)a1 errorMsg:(id)a2;
- (void)onAllResourceDownloadFinished;
- (void)addNLEResourceDownloadStatusListener:(id)a0;
- (void)setResourceDownloadConfig:(id)a0;
- (void)clearNLEResourceDownloadStatusListener;
- (void)setAsyncRenderPlayStatusListener:(id)a0;
- (void)removeNLEResourceDownloadStatusListener:(id)a0;
- (void)onStart:(id)a0;
- (void).cxx_destruct;
- (void)setResourceManager:(id)a0;

@end
