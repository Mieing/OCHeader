@interface AWEHamletImpl.XPlayWorldEngine : NSObject <XPlayScreenRecordTaskDelegate, XPlayCloudMessageDelegate, XPlayItemBusinessDelegate, XPlayItemDelegate> {
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ recordDelegate;
    void /* unknown type, empty encoding */ isMuted;
    void /* unknown type, empty encoding */ recordTask;
    void /* unknown type, empty encoding */ currentRTT;
    void /* unknown type, empty encoding */ currentBitrate;
    void /* unknown type, empty encoding */ isLagging;
    void /* unknown type, empty encoding */ bridge;
    void /* unknown type, empty encoding */ experimentService;
    void /* unknown type, empty encoding */ sendMessages;
}

- (void)screenRecordTask:(id)a0 didStart:(id)a1;
- (void)screenRecordTask:(id)a0 didStop:(id)a1;
- (void)screenRecordTask:(id)a0 didCompletion:(id)a1;
- (void)didReceiveRTCCustomMessageWithString:(id)a0;
- (void)didReceivePodMiddlewareMessage:(id)a0;
- (void)playItem:(id)a0 customMessage:(id)a1 didReceiveCustomRequest:(id /* block */)a2;
- (void)playItem:(id)a0 preloadDidFailed:(id)a1;
- (void)playItem:(id)a0 preloadDidSucceed:(id)a1;
- (void)playItem:(id)a0 playStatusDidUpdated:(unsigned long long)a1 info:(id)a2;
- (void)playItem:(id)a0 canJoinQueue:(id)a1 callback:(id /* block */)a2;
- (void)playItem:(id)a0 didUpdateQueueInfo:(id)a1;
- (void)playItem:(id)a0 didDequeue:(id)a1;
- (void)playItem:(id)a0 didFinishQueue:(id)a1;
- (void)playItem:(id)a0 didExpireQueue:(id)a1;
- (BOOL)checkIsShowing;
- (void)playItem:(id)a0 onCustomMessageReceivedWithCode:(int)a1 uniqueSeq:(id)a2 message:(id)a3;
- (void)playItem:(id)a0 playQualityStats:(id)a1;
- (void)playItem:(id)a0 remoteVideoStateChangeWith:(long long)a1 withVideoStateReason:(long long)a2;
- (void)playItemDidLostConnection:(id)a0;
- (void)playItem:(id)a0 networkStatusChangedFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)playItem:(id)a0 remoteVideoRotationChanged:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
