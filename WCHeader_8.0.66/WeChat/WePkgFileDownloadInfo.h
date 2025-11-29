@class NSString;

@interface WePkgFileDownloadInfo : NSObject

@property (retain, nonatomic) NSString *pkgId;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int fileSize;
@property (nonatomic) BOOL isBigPackage;
@property (nonatomic) BOOL isAtomicPart;
@property (nonatomic) BOOL isPatchFile;
@property (nonatomic) unsigned long long downloadDuration;

- (void).cxx_destruct;

@end
