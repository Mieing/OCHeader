@interface WCUploader : MMObject <PBMessageObserverDelegate> {
    long long eventID;
    BOOL isCancelled;
    BOOL isUploading;
}

- (void)dealloc;
- (BOOL)startRequest;
- (void)run;
- (void)setFinished;
- (BOOL)canInterrupt;
- (void)cancelWithBlock:(id /* block */)a0;
- (void)_callbackCancelBlockInterrupted:(id /* block */)a0;
- (BOOL)onSetRequest:(id)a0;
- (void)onRequest:(id)a0 Event:(unsigned int)a1;
- (void)onResponse:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;

@end
