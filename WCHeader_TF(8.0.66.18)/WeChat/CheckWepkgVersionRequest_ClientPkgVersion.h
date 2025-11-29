@class NSString;

@interface CheckWepkgVersionRequest_ClientPkgVersion : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *pkgId;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setVersion:(id)a0;
- (id)version;
- (void)setPkgId:(id)a0;
- (id)pkgId;

@end
