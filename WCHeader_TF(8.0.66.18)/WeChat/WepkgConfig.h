@class NSString;

@interface WepkgConfig : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *currentEnabledVersion;
@property (nonatomic) BOOL disableWebViewGlobalCache;
@property (nonatomic) unsigned int pkgVersionLastUnusedSeconds;
@property (nonatomic) unsigned int checkIntervalSeconds;

+ (void)initialize;

- (void)setCheckIntervalSeconds:(unsigned int)a0;
- (unsigned int)checkIntervalSeconds;
- (void)setPkgVersionLastUnusedSeconds:(unsigned int)a0;
- (unsigned int)pkgVersionLastUnusedSeconds;
- (void)setDisableWebViewGlobalCache:(BOOL)a0;
- (BOOL)disableWebViewGlobalCache;
- (void)setCurrentEnabledVersion:(id)a0;
- (id)currentEnabledVersion;

@end
