@class NSString;

@interface HMDUserExceptionModuleReporter : HMDExceptionModuleReporter <HMDURLProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)URLHostProviderConfigHosts:(id)a0;
- (id)URLHostProviderInjectedHosts:(id)a0;
- (id)URLHostProviderDefaultHosts:(id)a0;
- (id)URLPathProviderURLPath:(id)a0;
- (id)moduleURLProvier;
- (BOOL)shouldEncrypt;

@end
