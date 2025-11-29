@class NSString;

@interface GlobalLiteAppStoreControl : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *pkgId;
@property (nonatomic) BOOL disable;

+ (void)initialize;

- (void)setDisable:(BOOL)a0;
- (BOOL)disable;
- (void)setPkgId:(id)a0;
- (id)pkgId;
- (void)setAppId:(id)a0;
- (id)appId;

@end
