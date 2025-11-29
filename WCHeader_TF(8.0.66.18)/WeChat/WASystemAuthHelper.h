@interface WASystemAuthHelper : NSObject

+ (unsigned int)authorizationStatusFor:(unsigned int)a0 appid:(id)a1;
+ (unsigned int)authorizationStatusFor:(unsigned int)a0 scene:(unsigned long long)a1;
+ (void)requestAuthFor:(unsigned int)a0 appid:(id)a1 completionHandler:(id /* block */)a2;
+ (void)requestWeChatAndSystemAuthFor:(unsigned int)a0 appid:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)isAuthRequestFrequencyLimitedFor:(unsigned int)a0 appid:(id)a1;
+ (unsigned long long)convertSceneFromAppid:(id)a0;
+ (unsigned long long)convertFrequencyTypeFromCapability:(unsigned int)a0;

@end
