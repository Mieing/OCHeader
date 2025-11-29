@interface CJPayRequestParam : NSObject

+ (id)commonDeviceInfoDic;
+ (id)sysVersion;
+ (id)passThroughInfo;
+ (id)riskInfoDict;
+ (id)gAppInfoConfig;
+ (BOOL)isSaasEnv;
+ (id)getFinanceRisk:(id)a0;
+ (id)getRiskInfoParams;
+ (void)injectDataProtocol:(Class)a0;
+ (void)setAppInfoConfig:(id)a0;
+ (id)getMergeRiskInfoWithBizParams:(id)a0;
+ (id)riskInfoDictWithFinanceRiskWithPath:(id)a0;
+ (id)riskInfoDictFromOuter:(id)a0;
+ (id)getRiskInfoParamsWith:(id)a0;
+ (id)curContextInjectedDataProtocols;
+ (id)uaInfoString:(id)a0;
+ (id)calcuSign:(id)a0 signKeys:(id)a1 appSecret:(id)a2;
+ (id)calcuBDCreateOrderSign:(id)a0 appSecret:(id)a1;
+ (id)calcuCreateOrderSign:(id)a0 appSecret:(id)a1;
+ (id)calcuIAPSign:(id)a0 appSecret:(id)a1;
+ (id)calcuPreCreateOrderSign:(id)a0 appSecret:(id)a1;
+ (id)appName;
+ (id)deviceType;
+ (id)appVersion;
+ (id)deviceID;
+ (id)accessToken;
+ (id)devicePlatform;
+ (id)ipString;

@end
