@class NSString, WepkgPatchDownloadInfo;

@interface WepkgDownloadInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *downloadUrl;
@property (nonatomic) unsigned int downloadNetworkType;
@property (nonatomic) unsigned int sizeInBytes;
@property (retain, nonatomic) WepkgPatchDownloadInfo *patchInfo;

+ (void)initialize;

@end
