@class NSString, NSMutableDictionary;
@protocol WCPayNetworkHelperDelegate;

@interface WCPayNetworkHelper : MMObject <PBMessageObserverDelegate> {
    NSMutableDictionary *m_dicCGIStartedTime;
}

@property (weak, nonatomic) id<WCPayNetworkHelperDelegate> m_delegate;
@property (retain, nonatomic) NSString *m_nsCurrentControlLogicName;

+ (id)AuthenKey;
+ (id)QrcodeUseBindQueryKey;
+ (id)CMDIdKeyDicWithSceneIdDic:(id)a0 InternalDic:(id)a1;
+ (id)AuthenCMDIdKey;
+ (id)SnsAAAuthenCMDIdKey;
+ (id)SnsAuthenCMDIdKey;
+ (id)SnsTfAuthenCMDIdKey;
+ (id)SnsF2FAuthenCMDIdKey;
+ (id)TsAuthenCMDIdKey;
+ (id)QrcodeUseBindQueryCMDIdKey;
+ (id)SnsQrcodeUseBindQueryCMDIdKey;
+ (id)SnsAAQrcodeUseBindQueryCMDIdKey;
+ (id)SnsTfQrcodeUseBindQueryCMDIdKey;
+ (id)SnsF2FQrcodeUseBindQueryCMDIdKey;
+ (id)TsQrcodeUseBindQueryCMDIdKey;
+ (void)initialize;
+ (void)idkeyCmdReport:(unsigned int)a0 scene:(unsigned int)a1 keyName:(id)a2;
+ (void)idkeyCmdReport:(unsigned int)a0 scene:(unsigned int)a1 keyName:(id)a2 value:(unsigned int)a3;
+ (void)idkeyCgiReport:(unsigned int)a0 keyName:(id)a1;
+ (void)idkeyCgiReport:(unsigned int)a0 keyName:(id)a1 value:(unsigned int)a2;

- (id)init;
- (void)dealloc;
- (void)removeAllObserver;
- (void)performHardCodeCallback:(id)a0;
- (void)WCToTenpayCommonRequest:(id)a0 RetryCount:(unsigned int)a1;
- (void)WCToTenpayCommonRequest:(id)a0 RetryCount:(unsigned int)a1 routeInfo:(unsigned char)a2;
- (void)WCToSnsTenpayCommonRequest:(id)a0 RetryCount:(unsigned int)a1;
- (void)WCToTenpayCommonRequest:(id)a0;
- (void)WCPayIAPOrderHistoryDetailRequest:(id)a0;
- (void)WCPayGetAppAuthUrl:(id)a0;
- (void)WCPayGenPrepay:(id)a0;
- (void)WCPaySubmitMallPrepay:(id)a0;
- (void)WCPayCheckJSApiAuthority:(id)a0;
- (void)WCPayQuitQRScanPay:(id)a0;
- (void)WCPaySubscribeServiceApp:(id)a0;
- (void)WCPaySetMainBindCard:(id)a0;
- (void)GetA8KeyLogic:(id)a0 withUrlStr:(id)a1;
- (void)WCPayConfirmOfflinePay:(id)a0 routeInfo:(unsigned char)a1;
- (void)GetBanPayMobileInfo:(id)a0;
- (unsigned int)createProtobufEvent:(id)a0 usePayNewDNS:(BOOL)a1;
- (void)OnMessageReturnInTenpayCommon:(id)a0 Event:(unsigned int)a1;
- (void)OnMessageReturnInGetAppAuthUrl:(id)a0 Event:(unsigned int)a1;
- (void)OnMessageReturnInGenPrepay:(id)a0 Event:(unsigned int)a1;
- (void)OnMessageReturnInCancelQRPay:(id)a0 Event:(unsigned int)a1;
- (void)OnMessageReturnInPaySubscribeServiceApp:(id)a0 Event:(unsigned int)a1;
- (void)OnMessageReturnInGetA8KeyLogic:(id)a0 Event:(unsigned int)a1;
- (void)OnMessageReturnInMallPay:(id)a0 Event:(unsigned int)a1;
- (void)OnMessageReturnInBizIapDetail:(id)a0 Event:(unsigned int)a1;
- (void)OnCheckJsapiResponse:(id)a0 Event:(unsigned int)a1;
- (void)OnMessageReturnOfflinePayConfirm:(id)a0 Event:(unsigned int)a1;
- (void)OnMessageReturnSetMainBankCard:(id)a0 Event:(unsigned int)a1;
- (void)OnMessageReturnGetBanPayMobileInfo:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)transformTenpayCGI:(BOOL)a0 pbCGIWrap:(id)a1 payScene:(unsigned int)a2;
- (void).cxx_destruct;

@end
