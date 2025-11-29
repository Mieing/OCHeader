@interface WCPayNetworkUtil : NSObject

+ (id)AddLocationToDic:(id)a0;
+ (id)GenTenPayUrlArgumentFromDic:(id)a0;
+ (id)queryBufferWithDic:(id)a0;
+ (id)innerBufferWithDic:(id)a0;
+ (id)addEncryptInfoToDic:(id)a0;
+ (BOOL)isCgiNoInSignBlackList:(unsigned int)a0;
+ (void)fillTenpayRequestWithSignAndCrtNo:(id)a0 CgiNo:(unsigned int)a1;
+ (void)reportSignError:(int)a0;
+ (BOOL)ABTestOpenPayCgiSeperateOpen;
+ (id)authenArray;
+ (id)verifyArray;
+ (id)verifyRegArray;
+ (id)qrcodeUseBindQueryArray;
+ (id)payOrderQueryArray;
+ (unsigned int)CgiCmdForAuthenWithReqKey:(id)a0;
+ (unsigned int)CgiCmdForVerifyWithReqKey:(id)a0;
+ (unsigned int)CgiCmdForVerifyRegWithReqKey:(id)a0;
+ (unsigned int)CgiCmdForQrcodeUseBindQueryWithReqKey:(id)a0;
+ (unsigned int)CgiCmdForPayOrderQueryWithReqKey:(id)a0;
+ (id)queryParamDictFromParamString:(id)a0 WithKey:(id)a1;
+ (unsigned int)MMFuncForGenPrePayWithParamString:(id)a0;
+ (unsigned int)MMFuncForPayAuthAppWithPrepayId:(id)a0;
+ (unsigned int)MMFuncForPayAuthNativeWithUrl:(id)a0;
+ (BOOL)isAuthenCMD:(unsigned int)a0;
+ (BOOL)isVerifyCMD:(unsigned int)a0;
+ (BOOL)isVerifyRegCMD:(unsigned int)a0;
+ (BOOL)isQRCodeUseBindQueryCMD:(unsigned int)a0;
+ (BOOL)isPayOrderQueryCMD:(unsigned int)a0;
+ (BOOL)isSnsPayment:(id)a0;
+ (BOOL)isGetPaidOrderDetail:(unsigned int)a0;
+ (unsigned char)routeInfoFromReqKey:(id)a0;

@end
