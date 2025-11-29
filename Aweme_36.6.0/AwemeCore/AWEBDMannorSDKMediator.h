@class NSString;

@interface AWEBDMannorSDKMediator : NSObject <BDMannorAppStoreDownloadProtocol, BDMannorGetAppInfoProtocol, BDMannorAdTrackProtocol, BDMannorHostCommonCapabilityProtocol, BDMannorRequestProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerMediator;

- (void)trackEvent:(id)a0 params:(id)a1;
- (BOOL)isBigFontABTestOn;
- (void)requestForJSONWithURL:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 callback:(id /* block */)a4;
- (id)trackURL:(id)a0;
- (BOOL)isChinese;
- (id)sendAdLog:(id)a0 model:(id)a1;
- (id)sendAdLog:(id)a0;
- (id)sendLogV3:(id)a0;
- (void)preloadWithAppID:(id)a0 creativeID:(id)a1 logExtra:(id)a2 downloadURL:(id)a3 SKANParams:(id)a4 downloadScene:(unsigned long long)a5 webURL:(id)a6 complianceData:(id)a7 completion:(id /* block */)a8;
- (void)processWithAppID:(id)a0 preload:(BOOL)a1 creativeID:(id)a2 logExtra:(id)a3 downloadURL:(id)a4 appStoreEnabled:(BOOL)a5 SKANParams:(id)a6 downloadScene:(unsigned long long)a7 webURL:(id)a8 complianceData:(id)a9;
- (BOOL)isThemeStyleLight;
- (void)showToast:(id)a0 type:(id)a1 icon:(id)a2;
- (id)userInfo;
- (id)appInfo;

@end
