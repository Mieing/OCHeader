@class CdnHostResolve, CdnUrl, CdnPcdn, NSString;

@interface CdnUrlDownload : WXPBGeneratedMessage

@property (retain, nonatomic) CdnUrl *url;
@property (retain, nonatomic) CdnHostResolve *resolve;
@property (retain, nonatomic) CdnPcdn *pcdn;
@property (nonatomic) BOOL treatAsVideo;
@property (nonatomic) BOOL preallocStorage;
@property (nonatomic) unsigned int maxHttpRedirect;
@property (retain, nonatomic) NSString *backupUrl;

+ (void)initialize;

@end
