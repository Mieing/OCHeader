@interface AWEFormatImpl.XPlayClientManager : NSObject <AWEFormatXPlayItemDelegate> {
    void /* unknown type, empty encoding */ xplayClient;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ hasSetValue;
    void /* unknown type, empty encoding */ isHotLoad;
    void /* unknown type, empty encoding */ hasTriedSendHotloadMessage;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ roomModel;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ isDestroying;
}

- (void)itemLoadSuccess:(id)a0;
- (void)itemLoadFailed:(id)a0 error:(id)a1 logId:(id)a2;
- (void)playItem:(id)a0 preloadDidFailed:(id)a1;
- (void)playItem:(id)a0 preloadDidSucceed:(id)a1;
- (void)playItem:(id)a0 playStatusDidUpdated:(long long)a1 info:(id)a2;
- (void)didReceiveRTCCustomMessageWithString:(id)a0;
- (void)didReceivePodMiddlewareMessage:(id)a0;
- (void)needQueue;
- (BOOL)canJoinQueue:(id)a0;
- (void)didUpdateQueueInfo:(id)a0;
- (void)didFinishQueueInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
