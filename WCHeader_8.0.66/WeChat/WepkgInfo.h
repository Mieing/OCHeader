@class NSString, WepkgConfig;

@interface WepkgInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) WepkgConfig *pkgConfig;

+ (void)initialize;

- (void)setPkgConfig:(id)a0;
- (id)pkgConfig;
- (void)setAppId:(id)a0;
- (id)appId;

@end
