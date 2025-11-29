@class AWEUITextLoadingView;

@interface AWEUserLoginThirdLoginDataController : AWEUserLoginBaseDataController

@property (retain, nonatomic) AWEUITextLoadingView *thirdLoginLoadingView;
@property (nonatomic) unsigned long long loginPlatform;

+ (Class)aAWEUserModuleServiceDOUYINHTSAdapterClass;

- (id)aAWEUserModuleServiceDOUYINHTSAdapter;
- (void)trackLoginEvent:(long long)a0 platform:(unsigned long long)a1 error:(id)a2;
- (void)handleSuccess:(id)a0 platform:(unsigned long long)a1 ticket:(id)a2;
- (void)requestLoginWithPlatform:(unsigned long long)a0 pageName:(id)a1;
- (void).cxx_destruct;
- (void)showError:(id)a0;

@end
