@class NSString, AWEAdCardPreloadInterceptor;
@protocol AWEWebViewConfigProtocol;

@interface AWEAdCardPreloadManager : NSObject <IESGurdEventDelegate>

@property (retain, nonatomic) id<AWEWebViewConfigProtocol> webConfig;
@property (retain, nonatomic) AWEAdCardPreloadInterceptor *interceptor;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *accessKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)gurdWillDownloadPackageForAccessKey:(id)a0 channel:(id)a1 isPatch:(BOOL)a2;
- (void)gurdDidFinishDownloadingPackageForAccessKey:(id)a0 channel:(id)a1 packageInfo:(id)a2;
- (void)gurdDidFinishApplyingPackageForAccessKey:(id)a0 channel:(id)a1 succeed:(BOOL)a2 error:(id)a3;
- (BOOL)isAdCardChannel:(id)a0 accessKey:(id)a1;
- (long long)commonResourceStatus:(id)a0;
- (void)setupAdCardGurdForWebViewIfNeeded;
- (void)preloadAdCardWithModelIfNeeded:(id)a0;
- (BOOL)isPreloadResourceActived:(id)a0;
- (void).cxx_destruct;

@end
