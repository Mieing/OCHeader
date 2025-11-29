@class NSString;

@interface AWEOpenPlatformHandleOAuthService : NSObject <BDPlatformSDKURLServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)consumerGetReqFromURL:(id)a0;
+ (BOOL)handleConsumerGetReq:(id)a0 withUserInfo:(id)a1 completion:(id /* block */)a2;
+ (id)URLFromProviderGetResp:(id)a0;
+ (BOOL)isUniversalLink:(id)a0;
+ (BOOL)isOpenURLOptionUniversalLinksOnly:(id)a0;
+ (BOOL)ignoreLogin;
+ (BOOL)checkNeedSkipMobileBind:(id)a0;
+ (id)serviceName;


@end
