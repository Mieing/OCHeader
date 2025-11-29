@class WCUploader, NSString, WCUploadTask, NSMutableSet;
@protocol WCTaskUploaderDelegate;

@interface WCTaskUploader : MMObject <WCSightVideoCompositeTaskDelegate, WCMediaUploaderDelegate, WCDataUploaderDelegate, IFavoritesExt> {
    WCUploadTask *_uploadTask;
    WCUploader *_uploader;
    NSMutableSet *_runnedSubTask;
    int _runningState;
    id<WCTaskUploaderDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handlePostRequestStart;
- (void)_handlePostRequestSuccess;
- (void)_handlePostRequestError;
- (void)_handlePostRequestCancel;
- (void)_handleUploadMediaStart;
- (void)_handleUploadMediaSuccess;
- (void)_handleUploadMediaError;
- (void)_handleUploadMediaCancel;
- (void)prepareUploadMedias;
- (void)tryStartNextTask;
- (id)initWithTask:(id)a0 withDelegate:(id)a1;
- (void)run;
- (BOOL)canInterrupt;
- (void)cancelWithBlock:(id /* block */)a0;
- (void)setSightVideoProgressBlock:(id /* block */)a0 compositeTask:(id)a1;
- (void)sightVideoCompositeTask:(id)a0 didFinish:(BOOL)a1 withSightDraft:(id)a2;
- (void)dealloc;
- (void)onMediaUploadStarted:(id)a0;
- (void)onMediaUploadFinished:(id)a0 uploadResult:(long long)a1 uploadErrType:(long long)a2 cdnErrCode:(int)a3;
- (void)handleMediaProcessCompletion:(id)a0 result:(long long)a1 errType:(long long)a2 errMsg:(id)a3;
- (void)onDataUploadStarted:(id)a0;
- (void)onDataUploadFinished:(id)a0 uploadResult:(id)a1;
- (void)OnUploadFavoritesItemFinish:(id)a0 ErrCode:(int)a1;
- (void)OnDelFavoritesItems:(id)a0;
- (void).cxx_destruct;

@end
