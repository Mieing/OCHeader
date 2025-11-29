@interface AWECommentSwiftService.ChainNode : NSObject <AWEChainNodeProtocol> {
    void /* unknown type, empty encoding */ functionID;
    void /* unknown type, empty encoding */ queueID;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ snapShot;
    void /* unknown type, empty encoding */ potentialChains;
    void /* unknown type, empty encoding */ threadName;
    void /* unknown type, empty encoding */ preNode;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ asynNode;
    void /* unknown type, empty encoding */ _stage;
    void /* unknown type, empty encoding */ lock;
}

- (id)chainID;
- (id)nodeSnapShot;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)stage;

@end
