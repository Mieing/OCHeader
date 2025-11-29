@interface EcsMidasPayUtil : NSObject

+ (BOOL)isEnableMidasPay;
+ (id)genPayReqExtraUrl:(id)a0;
+ (id)getSDKVersion;
+ (id)registerAppID;
+ (id)registerUniversalLink;
+ (id)genContextId:(id)a0;
+ (unsigned int)genAutoIncreaceID;
+ (id)genWeChatUniversalLinkWithExtraUrl:(id)a0 contextId:(id)a1 paramsDataStr:(id)a2;

@end
