@interface KSUPnPController_AVTransport : KSUPnPController

- (void)setAVTransportURI:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)setAVTransportURI:(id)a0 title:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)playWithCompletionHandler:(id /* block */)a0;
- (void)pauseWithCompletionHandler:(id /* block */)a0;
- (void)stopWithCompletionHandler:(id /* block */)a0;

@end
