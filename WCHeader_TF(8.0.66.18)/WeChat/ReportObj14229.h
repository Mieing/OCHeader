@class NSString, NSDictionary;

@interface ReportObj14229 : NSObject

@property (retain, nonatomic) NSString *pkgId;
@property (retain, nonatomic) NSString *pkgVersion;
@property (nonatomic) BOOL isRange;
@property (nonatomic) int errorCode;
@property (retain, nonatomic) NSDictionary *extInfo;
@property (retain, nonatomic) NSString *localVersion;
@property (nonatomic) int optType;
@property (nonatomic) int costTime;
@property (nonatomic) int fileSize;

+ (id)createFromDownloadInfo:(id)a0;

- (id)init;
- (id)toLogExt;
- (void).cxx_destruct;

@end
