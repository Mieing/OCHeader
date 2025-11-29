@interface BDADSDK.GeckoEventDelegateImp : NSObject <IESGurdEventDelegate>

- (void)gurdWillDownloadPackageForAccessKey:(id)a0 channel:(id)a1 isPatch:(BOOL)a2;
- (void)gurdDidFinishDownloadingPackageForAccessKey:(id)a0 channel:(id)a1 packageInfo:(id)a2;
- (void)gurdDidFinishApplyingPackageForAccessKey:(id)a0 channel:(id)a1 succeed:(BOOL)a2 error:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
