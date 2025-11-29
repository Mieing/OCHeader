@class NSString, LynxFetchModuleEventSender;

@interface LynxHttpStreamingDelegate : NSObject {
    LynxFetchModuleEventSender *_eventSender;
    NSString *_streamingId;
}

- (void)onData:(id)a0;
- (id)initWithParam:(id)a0 withStreamingId:(id)a1;
- (BOOL)sendSseChunkIfComplete:(id)a0;
- (void)getStreamingLength:(id)a0 chunkSize:(long long *)a1 nextIdx:(unsigned long long *)a2;
- (void)streamingChunk:(id)a0 chunkSize:(long long)a1 nextIdx:(unsigned long long)a2;
- (void)processSseData:(id)a0 withData:(id)a1;
- (void)processChunkedData:(id)a0 withData:(id)a1;
- (void).cxx_destruct;
- (void)onError:(id)a0;
- (void)onEnd;

@end
