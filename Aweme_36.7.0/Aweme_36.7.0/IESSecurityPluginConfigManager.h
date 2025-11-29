@interface IESSecurityPluginConfigManager : NSObject

@property (nonatomic) BOOL enable_webview_url_intercept;
@property (nonatomic) BOOL enable_webview_url_report;
@property (nonatomic) BOOL enable_webview_bridge_report;
@property (nonatomic) BOOL enable_lynx_bridge_intercept;
@property (nonatomic) BOOL enable_lynx_bridge_report;
@property (nonatomic) BOOL enable_lynx_url_report;
@property (nonatomic) BOOL enable_rule_engine;

+ (id)sharedManager;

@end
