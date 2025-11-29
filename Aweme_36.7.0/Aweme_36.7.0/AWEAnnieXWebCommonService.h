@class NSString;

@interface AWEAnnieXWebCommonService : HTSService <AWEAnnieXWebCommonService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)secUrlString;
+ (BOOL)isToAppStoreRequestURLStr:(id)a0;
+ (id)generateWebSecureLinkConfig:(id)a0;
+ (BOOL)falconSchemeHandlerEnable:(id)a0;
+ (id)additionalRequestHeaderFields;
+ (id)buildBOEURLWithURL:(id)a0;
+ (id)generateUA:(id)a0;
+ (BOOL)p_matchAweFalconList:(id)a0;

- (BOOL)enableFalcon;
- (BOOL)webIntercept;
- (BOOL)isKindOfWebViewController:(id)a0;

@end
