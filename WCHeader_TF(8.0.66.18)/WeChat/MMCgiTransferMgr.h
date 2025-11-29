@class NSString, NSMutableArray, NSDictionary;

@interface MMCgiTransferMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>

@property (retain, nonatomic) NSString *h5AuthToken;
@property (retain, nonatomic) NSString *pubKeyToken;
@property (retain, nonatomic) NSMutableArray *waitingAuthQueue;
@property (nonatomic) unsigned int tokenExpiredtime;
@property (retain, nonatomic) NSDictionary *cgiRouteMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isCgiInfoValid:(id)a0;
+ (BOOL)isCgiInfoInWhiteList:(id)a0;

- (unsigned int)cgiIdFromParams:(id)a0;
- (id)generateCGIWrapWithReqParam:(id)a0;
- (void)updateCgiInfoArr:(id)a0;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)startExtTransferReq:(id)a0;
- (void)startWebTransferReq:(id)a0;
- (void)startAppBrandExtTransferReq:(id)a0;
- (void)startAppBrandWebTransferReq:(id)a0;
- (void)startLiteAppExtTransferReq:(id)a0;
- (void)startLiteAppWebTransferReq:(id)a0;
- (void)sendReqWithParams:(id)a0;
- (void)doCgiTransferReqWithParams:(id)a0;
- (void)sendH5AuthReq:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleH5AuthResponse:(id)a0;
- (void)handleTransferResp:(id)a0;
- (void)handleErrorWithResp:(int)a0 param:(id)a1 resp:(id)a2;
- (void).cxx_destruct;

@end
