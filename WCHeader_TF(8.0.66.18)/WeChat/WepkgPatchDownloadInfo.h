@class NSString;

@interface WepkgPatchDownloadInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *downloadUrl;
@property (nonatomic) unsigned int downloadNetworkType;
@property (nonatomic) unsigned int sizeInBytes;

+ (void)initialize;

@end
