@class NSString;
@protocol HMDConfigHostProviderDataSource, HMDConfigHostProvider;

@interface HMDConfigHostProvider : NSObject <HMDConfigHostProvider>

@property (retain, nonatomic) id<HMDConfigHostProvider> providerV5;
@property (nonatomic) BOOL useSettingsV5;
@property (weak, nonatomic) id<HMDConfigHostProviderDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)URLHostProviderConfigHosts:(id)a0;
- (id)URLHostProviderInjectedHosts:(id)a0;
- (id)URLHostProviderDefaultHosts:(id)a0;
- (id)URLPathProviderURLPath:(id)a0;
- (id)_standardizeHosts:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldEncrypt;

@end
