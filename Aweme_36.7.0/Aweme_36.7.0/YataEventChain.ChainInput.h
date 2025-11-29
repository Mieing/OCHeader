@interface YataEventChain.ChainInput : NSObject {
    void /* unknown type, empty encoding */ events;
    void /* unknown type, empty encoding */ chainID;
    void /* unknown type, empty encoding */ initialBizParams;
    void /* unknown type, empty encoding */ chainName;
    void /* unknown type, empty encoding */ passthrough;
}

- (id)initWithEvents:(id)a0 initialBizParams:(id)a1 chainName:(id)a2 chainID:(id)a3 passthrough:(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
