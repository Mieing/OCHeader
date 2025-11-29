@interface BDChainLog.ChainLog : BDChainLog.ChainLogBase <BDChainLogBridgeProtocol> {
    void /* unknown type, empty encoding */ asyncSourceUuid;
}

+ (id)bridge_createWithType:(unsigned long long)a0 message:(id)a1 module:(id)a2 links:(id)a3 fileName:(id)a4 funcName:(id)a5 lineNumber:(long long)a6;

- (void)bridge_setHost:(id)a0;
- (void)bridge_noGateway;
- (void)bridge_asyncFromToken:(id)a0;
- (void)bridge_writeLogWithFileName:(id)a0 funcName:(id)a1 lineNumber:(long long)a2;
- (id)bridge_getTokenWithFileName:(id)a0 funcName:(id)a1 lineNumber:(long long)a2;
- (void).cxx_destruct;

@end
