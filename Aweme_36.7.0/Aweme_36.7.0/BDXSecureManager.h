@class NSString, BDXSecureConfig;

@interface BDXSecureManager : NSObject <BDWebSecureLinkSettingDelegate>

@property (retain, nonatomic) BDXSecureConfig *secureConfig;
@property (copy, nonatomic) id /* block */ teaReportBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)injectWebInstance:(id)a0 withConfig:(id)a1;
- (void)setupDefaultSCCConfigSetting;
- (void)setupDefaultSecLinkConfigSetting;
- (void)disableJumpingAppWithConfig:(id)a0 webView:(id)a1 url:(id)a2;
- (void)disableJumpingApp:(id)a0 url:(id)a1;
- (void)injectWebInstance:(id)a0 withBid:(id)a1;
- (id)globalConfig:(id)a0;
- (void)blockJumpingApp;
- (void)injectWebInstance:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
