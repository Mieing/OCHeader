@class NSString;

@interface AWEUserModuleConfigCommon : NSObject <AWEUserModuleConfigCommon>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableMultiLogin;
+ (BOOL)enableWriteKeychain;
+ (BOOL)shouldStoreUserInfoForChainLogin;
+ (id)wechatUniversalLink;


@end
