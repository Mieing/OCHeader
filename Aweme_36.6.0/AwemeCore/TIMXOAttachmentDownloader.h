@class TIMXThreadSafeMutableDictionary, NSString, TIMXSDKInstance;

@interface TIMXOAttachmentDownloader : NSObject <TIMXFileDownloadDelegate, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXThreadSafeMutableDictionary *filesToAlive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadRequest:(id)a0 progressDidUpdate:(float)a1;
- (void)downloadRequest:(id)a0 didFailedWithError:(id)a1;
- (void)downloadRequest:(id)a0 didSuccessWithInfo:(id)a1;
- (void)downloadForFile:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
