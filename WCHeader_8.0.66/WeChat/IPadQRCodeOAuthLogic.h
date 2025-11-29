@class QRCodeOAuthData, MMTimer, OpenSDKOAuthRequest;
@protocol IPadQRCodeOAuthLogicDelegate;

@interface IPadQRCodeOAuthLogic : MMObject

@property (retain, nonatomic) OpenSDKOAuthRequest *reqInfo;
@property (retain, nonatomic) QRCodeOAuthData *authData;
@property (nonatomic) BOOL hasStartQuery;
@property (retain, nonatomic) MMTimer *timer;
@property (nonatomic) unsigned int refreshQRcodeRetryCount;
@property (nonatomic) unsigned int svrErrRetryCount;
@property (nonatomic) unsigned int networkErrRetryCount;
@property (nonatomic) unsigned int lastQueryErrCode;
@property (nonatomic) unsigned long long queryStartTimeInMs;
@property (nonatomic) unsigned int queryTimeout;
@property (nonatomic) unsigned long long queryIntervalInMs;
@property (weak, nonatomic) id<IPadQRCodeOAuthLogicDelegate> delegate;

- (void)dealloc;
- (void)startLogicWithReqInfo:(id)a0;
- (void)restartLogic;
- (void)sendCancelOperationToSvr;
- (void)resetState;
- (void)requestAuthData;
- (void)handleReqAuthResp:(id)a0 error:(id)a1;
- (void)startQueryQRCodeScanState;
- (void)checkStartQueryQRCodeScanState;
- (void)handleQueryState:(id)a0 error:(id)a1;
- (void)onOccurError:(id)a0 errCode:(int)a1 errType:(unsigned int)a2;
- (void).cxx_destruct;

@end
