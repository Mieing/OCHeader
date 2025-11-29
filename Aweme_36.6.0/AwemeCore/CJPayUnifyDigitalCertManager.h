@class NSString;

@interface CJPayUnifyDigitalCertManager : NSObject <CJPayUnifyDigitalCertModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)defaultService;

- (void)initializeAbilityWithContext:(id)a0;
- (void)installCertWithContext:(id)a0;
- (void)uninstallCertWithContext:(id)a0;
- (void)queryCertStatusWithContext:(id)a0;
- (void)useCertSignDataWithContext:(id)a0;
- (id)certImpl;
- (void)p_logWithStage:(id)a0 code:(id)a1 msg:(id)a2 extParam:(id)a3;
- (void)p_initialDigitalCertWithContext:(id)a0 certImpl:(id)a1;
- (void)p_startLoadingWithContext:(id)a0;
- (void)p_stopLoadingWithContext:(id)a0;
- (void)p_initialCsrWithContext:(id)a0 certImpl:(id)a1 completion:(id /* block */)a2;
- (void)p_uninstallCertWithContext:(id)a0 certImpl:(id)a1;
- (void)p_queryCertStatusWithContext:(id)a0 certImpl:(id)a1;
- (void)p_trackWithContext:(id)a0 eventName:(id)a1 params:(id)a2;
- (void)p_signDataWithContext:(id)a0 certImpl:(id)a1 completion:(id /* block */)a2;
- (void)p_genPartPublicKeyWithContext:(id)a0 certImpl:(id)a1 completion:(id /* block */)a2;
- (void)p_genPartCsrDataWithContext:(id)a0 certImpl:(id)a1 completion:(id /* block */)a2;
- (void)p_genEntireCsrDataWithContext:(id)a0 certImpl:(id)a1 completion:(id /* block */)a2;
- (void)p_downloadCertDataWithContext:(id)a0 certImpl:(id)a1 completion:(id /* block */)a2;
- (void)p_importLocalCertDataWithContext:(id)a0 certImpl:(id)a1 completion:(id /* block */)a2;
- (void)p_updateQ1WithContext:(id)a0 completion:(id /* block */)a1;
- (id)p_certStageMap;

@end
