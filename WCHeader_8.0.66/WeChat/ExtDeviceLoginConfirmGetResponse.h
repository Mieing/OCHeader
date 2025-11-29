@class NSString, ExtDeviceLoginConfirmOKRet, ExtDeviceLoginConfirmExpiredRet, ExtDeviceLoginConfirmErrorRet, BaseResponse;

@interface ExtDeviceLoginConfirmGetResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) ExtDeviceLoginConfirmOKRet *okret;
@property (retain, nonatomic) ExtDeviceLoginConfirmErrorRet *errorRet;
@property (retain, nonatomic) ExtDeviceLoginConfirmExpiredRet *expiredRet;
@property (retain, nonatomic) NSString *deviceNameStr;
@property (nonatomic) unsigned int loginClientVersion;
@property (nonatomic) unsigned int funcCtrl;
@property (retain, nonatomic) NSString *autoLoginSwitchTip;
@property (nonatomic) BOOL needShowSyncMsgButton;

+ (void)initialize;

@end
