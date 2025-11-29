@class WCDataUploaderResult, WCUploadTask;
@protocol WCDataUploaderDelegate;

@interface WCDataUploader : WCUploader {
    long long currentPos;
    WCDataUploaderResult *uploadResult;
}

@property (copy, nonatomic) id /* block */ cancelResultBlock;
@property (retain, nonatomic) WCUploadTask *m_task;
@property (weak, nonatomic) id<WCDataUploaderDelegate> m_delegate;

- (void)dealloc;
- (id)xmlForUploadTask:(id)a0;
- (BOOL)onSetRequest:(id)a0;
- (void)setFinished;
- (BOOL)canInterrupt;
- (void)cancelWithBlock:(id /* block */)a0;
- (void)onRequest:(id)a0 Event:(unsigned int)a1;
- (void)onResponse:(id)a0 Event:(unsigned int)a1;
- (void)_onResponse:(id)a0 Event:(unsigned int)a1;
- (BOOL)isSightUploadTask;
- (void)run;
- (void)_run;
- (void)onCalculateVideoMd5:(id)a0 finishedWithResult:(id)a1;
- (void).cxx_destruct;

@end
