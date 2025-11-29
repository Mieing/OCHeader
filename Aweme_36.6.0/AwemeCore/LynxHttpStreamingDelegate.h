@class NSString, LynxFetchModuleEventSender;

@interface LynxHttpStreamingDelegate : NSObject {
    LynxFetchModuleEventSender *_eventSender;
    NSString *_streamingId;
}

- (void)onData:(id)a0;
- (id)initWithParam:(id)a0 withStreamingId:(id)a1;
- (void)getStreamingLength:(id)a0 chunkSize:(long long *)a1 nextIdx:(unsigned long long *)a2;
- (void)streamingChunk:(id)a0 chunkSize:(long long)a1 nextIdx:(unsigned long long)a2;
- (void)processChunkedData:(id)a0 withData:(id)a1;
- (void).cxx_destruct;
- (void)onError:(id)a0;
- (void)onEnd;

@end
