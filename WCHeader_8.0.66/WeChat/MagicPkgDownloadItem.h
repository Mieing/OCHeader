@class NSString;

@interface MagicPkgDownloadItem : NSObject

@property (nonatomic) unsigned int responseState;
@property (nonatomic) unsigned int packageType;
@property (nonatomic) unsigned int networkType;
@property (retain, nonatomic) NSString *cdnUrl;
@property (retain, nonatomic) NSString *fileMd5;
@property (retain, nonatomic) NSString *patchId;
@property (nonatomic) unsigned int fileSize;
@property (nonatomic) unsigned int errorCode;
@property (retain, nonatomic) NSString *packageID;
@property (retain, nonatomic) NSString *patchApkMd5;
@property (retain, nonatomic) NSString *baseApkMd5;
@property (retain, nonatomic) NSString *clientVersion;
@property (retain, nonatomic) NSString *originalName;

- (void).cxx_destruct;

@end
