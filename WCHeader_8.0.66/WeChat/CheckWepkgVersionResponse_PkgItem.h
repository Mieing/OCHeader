@class WepkgVersionDownloadInfo, NSString, WepkgInfo, WepkgCmd;

@interface CheckWepkgVersionResponse_PkgItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *pkgId;
@property (retain, nonatomic) WepkgInfo *pkgInfo;
@property (retain, nonatomic) WepkgVersionDownloadInfo *downloadInfo;
@property (retain, nonatomic) WepkgCmd *pkgCmd;

+ (void)initialize;

- (void)setPkgCmd:(id)a0;
- (id)pkgCmd;
- (void)setDownloadInfo:(id)a0;
- (id)downloadInfo;
- (void)setPkgInfo:(id)a0;
- (id)pkgInfo;
- (void)setPkgId:(id)a0;
- (id)pkgId;

@end
