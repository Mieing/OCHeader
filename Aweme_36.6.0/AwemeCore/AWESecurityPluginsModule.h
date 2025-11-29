@class NSString, AWESECHybridPluginManager;

@interface AWESecurityPluginsModule : NSObject <AWEAppAwemeSettingMessage>

@property (retain, nonatomic) AWESECHybridPluginManager *pluginManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)awemeSettingDidChange;
- (void)setupLegacyModules;
- (void)setupREFuncs;
- (void)setupSecLinkParamsHandler;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
