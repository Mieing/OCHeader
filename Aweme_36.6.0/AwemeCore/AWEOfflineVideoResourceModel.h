@class NSString;

@interface AWEOfflineVideoResourceModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) double createTime;
@property (nonatomic) BOOL onlyDownloadOnWifi;
@property (nonatomic) BOOL isCDNDownload;
@property (nonatomic) BOOL disableUpdate;
@property (nonatomic) double fileSize;
@property (nonatomic) double cacheSize;
@property (nonatomic) int cacheExitReportFlag;
@property (nonatomic) BOOL isFileExist;

- (void)deleteFile;
- (void)deleteInvalidVideo;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)timeString;

@end
