@class NSString, WepkgPreloadFiles, WepkgBigPackage;

@interface WepkgVersionDownloadInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *entranceDomain;
@property (retain, nonatomic) WepkgBigPackage *bigPackage;
@property (retain, nonatomic) WepkgPreloadFiles *preloadFiles;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *downloadUrl;
@property (nonatomic) unsigned int downloadNetworkType;
@property (nonatomic) unsigned int sizeInBytes;
@property (retain, nonatomic) NSString *charset;

+ (void)initialize;

@end
