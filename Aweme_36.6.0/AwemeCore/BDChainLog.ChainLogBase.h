@interface BDChainLog.ChainLogBase : NSObject <BDChainLogBaseBridgeProtocol> {
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ needCheckGatewayNode;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ level;
    void /* unknown type, empty encoding */ module;
    void /* unknown type, empty encoding */ linkArray;
    void /* unknown type, empty encoding */ selfAddr;
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ tagArray;
    void /* unknown type, empty encoding */ paramDict;
    void /* unknown type, empty encoding */ needTrack;
    void /* unknown type, empty encoding */ fileName;
    void /* unknown type, empty encoding */ funcName;
    void /* unknown type, empty encoding */ lineNumber;
    void /* unknown type, empty encoding */ content;
    void /* unknown type, empty encoding */ hasCommit;
}

- (void)bridge_setAddr:(id)a0;
- (void)bridge_addMsg:(id)a0;
- (void)bridge_addTag:(id)a0;
- (void)bridge_addParamWithKey:(id)a0 value:(id)a1;
- (void)bridge_toWarn:(id)a0;
- (void)bridge_toError:(id)a0;
- (void)bridge_assert;
- (void)bridge_track;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
