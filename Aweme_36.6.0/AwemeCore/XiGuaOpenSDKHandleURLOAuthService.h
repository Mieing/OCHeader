@class NSString;

@interface XiGuaOpenSDKHandleURLOAuthService : NSObject <XiGuaOpenSDKURLServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reqClassName;
+ (id)URLFromConsumerSendReq:(id)a0;
+ (id)consumerSendRespFromURL:(id)a0;
+ (id)serviceName;


@end
