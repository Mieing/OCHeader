@class NSString, NSArray;

@interface WCNativeExtMgr : MMRootService <MMServiceProtocol> {
    BOOL _bLoad;
    NSArray *_arrPBCgi;
    NSArray *_arrCmdID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)resetLoad;
- (const struct PBCGIHelperWrap { Class x0; Class x1; int x2; unsigned int x3; id x4; id x5; } *)queryCgiConfigAtIndexInVM:(unsigned int)a0;
- (const struct PBCGIHelperWrap { Class x0; Class x1; int x2; unsigned int x3; id x4; id x5; } *)queryCgiConfigFromVM:(unsigned int)a0;
- (unsigned int)getPbCgiListLenFromVM;
- (unsigned int)CgiToReqCmdInVM:(unsigned int)a0;
- (unsigned int)CgiToRespCmdInVM:(unsigned int)a0;
- (unsigned int)ReqCmdToCgiInVM:(unsigned int)a0;
- (BOOL)CgiSendByLongConnInVM:(unsigned int)a0;
- (BOOL)IsValidCommandInVM:(unsigned int)a0;
- (void)checkAndLoad;
- (void).cxx_destruct;

@end
