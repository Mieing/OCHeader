@class NSString, NSMutableDictionary;

@interface WCPayNetworkMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol> {
    NSMutableDictionary *_startedTimeDic;
}

@property (retain, nonatomic) NSMutableDictionary *callbacks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (unsigned int)commonQueryCmdID:(unsigned int)a0 bizParams:(id)a1 wxParams:(id)a2 completion:(id /* block */)a3;
- (unsigned int)commonQueryCmdID:(unsigned int)a0 bizParams:(id)a1 wxParams:(id)a2 routeInfo:(unsigned char)a3 completion:(id /* block */)a4;
- (unsigned int)commonQueryCmdIDWithTimeout:(unsigned int)a0 bizParams:(id)a1 wxParams:(id)a2 timeout:(double)a3 routeInfo:(unsigned char)a4 completion:(id /* block */)a5;
- (unsigned int)getIAPOrderDetailWithOrderID:(id)a0 completion:(id /* block */)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (unsigned int)sendRequest:(id)a0 cgi:(unsigned int)a1 completion:(id /* block */)a2;
- (unsigned int)sendRequestWithTimeout:(id)a0 cgi:(unsigned int)a1 timeout:(double)a2 routeInfo:(unsigned char)a3 completion:(id /* block */)a4;
- (void)handleCommonErrorAndCleanForKey:(id)a0 completion:(id /* block */)a1;
- (void)handleErrorAndClean:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)cleanForKey:(id)a0;
- (void)debugPrintResponseWithCGIWrap:(id)a0;
- (void)debugPrintRequestWithCGIWrap:(id)a0;
- (void).cxx_destruct;

@end
