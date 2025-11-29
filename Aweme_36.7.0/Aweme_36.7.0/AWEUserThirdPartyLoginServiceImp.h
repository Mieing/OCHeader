@class NSString;

@interface AWEUserThirdPartyLoginServiceImp : HTSService <AWEUserThirdPartyLoginService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)settingPage;
+ (void)loginWithPlatform:(unsigned long long)a0;
+ (Class)aAWEUserModuleServiceDOUYINHTSAdapterClass;
+ (void)whitePageThirdPartyLogin:(unsigned long long)a0;

- (id)aAWEUserModuleServiceDOUYINHTSAdapter;

@end
