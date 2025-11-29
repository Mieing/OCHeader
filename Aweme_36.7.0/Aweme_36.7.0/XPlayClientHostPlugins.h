@interface XPlayClientHostPlugins : NSObject

@property (class, retain, nonatomic) Class abtestPlugin;
@property (class, retain, nonatomic) Class monitorPlugin;
@property (class, retain, nonatomic) Class trackerPlugin;
@property (class, retain, nonatomic) Class appSettingsPlugin;
@property (class, retain, nonatomic) Class sdkSettingsPlugin;
@property (class, retain, nonatomic) Class commonParamsPlugin;
@property (class, retain, nonatomic) Class networkPlugin;
@property (class, retain, nonatomic) Class albumPlugin;
@property (class, retain, nonatomic) Class txStartSDKPlugin;

+ (Class)txStartSDKPlugin;
+ (Class)albumPlugin;
+ (Class)abtestPlugin;
+ (void)setAbtestPlugin:(Class)a0;
+ (Class)monitorPlugin;
+ (void)setMonitorPlugin:(Class)a0;
+ (Class)trackerPlugin;
+ (void)setTrackerPlugin:(Class)a0;
+ (Class)networkPlugin;
+ (void)setNetworkPlugin:(Class)a0;
+ (Class)appSettingsPlugin;
+ (void)setAppSettingsPlugin:(Class)a0;
+ (Class)sdkSettingsPlugin;
+ (void)setSdkSettingsPlugin:(Class)a0;
+ (Class)commonParamsPlugin;
+ (void)setCommonParamsPlugin:(Class)a0;
+ (void)setAlbumPlugin:(Class)a0;
+ (void)setTxStartSDKPlugin:(Class)a0;

@end
