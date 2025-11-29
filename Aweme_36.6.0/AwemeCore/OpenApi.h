@class NSString;
@protocol TencentLoginDelegate, TencentSessionDelegate;

@interface OpenApi : NSObject

@property (copy, nonatomic) NSString *appSchema;
@property (copy, nonatomic) NSString *pasteBoardName;
@property (weak, nonatomic) id<TencentLoginDelegate> loginDelegate;
@property (weak, nonatomic) id<TencentSessionDelegate> sessionDelegate;
@property (nonatomic) unsigned long long tencentAuthorizeState;
@property (nonatomic) BOOL isUserAgreedAuthorization;

+ (BOOL)registerApp:(id)a0;
+ (id)processExpirationDate:(id)a0;
+ (BOOL)canHandleOpenURL:(id)a0;
+ (id)getGeneralPastboardNameKey;
+ (id)saveDictionaryToPB_or_URL:(id)a0 pbName:(id)a1;
+ (BOOL)isSupportGeneralPastboard;
+ (id)saveDictionaryByGeneralPastboard:(id)a0;
+ (id)saveDictionary:(id)a0 toPasteBoard:(id)a1;
+ (id)getDictionaryFromGeneralPasteBoard:(id)a0;
+ (id)getDictionaryFromPasteBoard:(id)a0;
+ (id)dictionaryByParseUrlFromSeparator:(id)a0 separator:(id)a1;
+ (id)getLargeDataFromParams:(id)a0;
+ (void)processMessage_Auth:(id)a0;
+ (void)processMessage_Share:(id)a0;
+ (void)processMessage_Other:(id)a0 msgTypeStr:(id)a1;
+ (void)setTencentAuthorizeState:(unsigned long long)a0;
+ (void)_processMessage_Auth:(id)a0;
+ (void)processSaveAppSignInfo:(id)a0;
+ (id)dictionaryByParseURL:(id)a0;
+ (id)getExtraInfoInParams:(id)a0;
+ (BOOL)openQQWithCommand:(unsigned long long)a0 andPasteBoardName:(id)a1 data:(id)a2 callApp:(unsigned long long)a3 completionHandler:(id /* block */)a4;
+ (BOOL)isQZoneSupportGeneralPastboard;
+ (BOOL)processUniversallink_Sign:(id)a0;
+ (BOOL)processUniversallink_Bizlogic:(id)a0;
+ (BOOL)checkSignAuthIfNeed:(id)a0;
+ (void)setIsUserAgreedAuthorization:(BOOL)a0;
+ (BOOL)isUserAgreedAuthorization;
+ (BOOL)registerApp:(id)a0 withDelegate:(id)a1;
+ (void)unRegisterApp:(id)a0 withDelegate:(id)a1;
+ (void)unRegisterAppSessionDelegate:(id)a0;
+ (BOOL)canParseURL:(id)a0;
+ (BOOL)doHandleUniversallink:(id)a0;
+ (BOOL)doCanHandleUniversallink:(id)a0;
+ (BOOL)authorizeWithPermission:(id)a0 delegate:(id)a1 oauth:(id)a2 extraParams:(id)a3 completionHandler:(id /* block */)a4;
+ (void)clearParam;
+ (unsigned long long)tencentAuhorizeState;
+ (BOOL)canUseSDK;
+ (id)getAppSignToken;
+ (void)setupAppSignToken:(id)a0;
+ (BOOL)processMessage:(id)a0;
+ (id)shareInstance;
+ (BOOL)handleOpenURL:(id)a0;

- (void).cxx_destruct;

@end
