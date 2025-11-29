@class NSString, WepkgDownloadInfo;

@interface WepkgFileInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *rid;
@property (retain, nonatomic) NSString *mimeType;
@property (retain, nonatomic) WepkgDownloadInfo *downloadInfo;

+ (void)initialize;

@end
