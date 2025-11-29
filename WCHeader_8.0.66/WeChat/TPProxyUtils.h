@interface TPProxyUtils : NSObject

+ (id)convertProxyDownloadParamWithUrl:(id)a0 defaultDownlType:(long long)a1 paramData:(id)a2 httpHeader:(id)a3 proxyConfig:(id)a4;
+ (void)setObjectToExtraInfo:(id)a0 withParamData:(id)a1;
+ (void)setNumberToExtraInfo:(id)a0 withParamData:(id)a1;
+ (unsigned long long)convertToProxyPlayCallBackMsg:(int)a0;
+ (BOOL)isOnlineUrl:(id)a0;

@end
