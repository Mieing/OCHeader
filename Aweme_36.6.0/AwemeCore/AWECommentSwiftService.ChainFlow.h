@interface AWECommentSwiftService.ChainFlow : NSObject <AWEChainFlowProtocol> {
    void /* unknown type, empty encoding */ chainQueueManager;
    void /* unknown type, empty encoding */ subscriberManager;
    void /* unknown type, empty encoding */ enableLog;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ chainAutoDisposeTime;
    void /* unknown type, empty encoding */ autoDispose;
}

- (id)flowBegin:(id)a0 snapShot:(id)a1;
- (id)flowBegin:(id)a0 snapShot:(id)a1 preChainNode:(id)a2;
- (id)flowBegin:(id)a0 snapShot:(id)a1 preChainNode:(id)a2 host:(id)a3;
- (id)flowBegin:(id)a0 snapShot:(id)a1 preChainNode:(id)a2 host:(id)a3 asynNode:(BOOL)a4;
- (id)flowAppend:(id)a0 snapShot:(id)a1;
- (id)flowAppend:(id)a0 snapShot:(id)a1 preChainNode:(id)a2;
- (id)flowAppend:(id)a0 snapShot:(id)a1 preChainNode:(id)a2 host:(id)a3;
- (id)flowAppend:(id)a0 snapShot:(id)a1 preChainNode:(id)a2 host:(id)a3 asynNode:(BOOL)a4;
- (id)flowEnd:(id)a0 snapShot:(id)a1;
- (id)flowEnd:(id)a0 snapShot:(id)a1 preChainNode:(id)a2;
- (id)flowEnd:(id)a0 snapShot:(id)a1 preChainNode:(id)a2 host:(id)a3;
- (void)flowSingleNode:(id)a0 snapShot:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
