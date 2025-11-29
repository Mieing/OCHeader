@class NSString;

@interface DownloadInfo : NSObject

@property (copy, nonatomic) NSString *urlKey;
@property (retain, nonatomic) NSString *secondUrl;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *inputFileName;
@property (nonatomic) long long downloadedSize;
@property (nonatomic) long long totalSize;
@property (copy, nonatomic) NSString *fileFullPath;

- (void).cxx_destruct;

@end
