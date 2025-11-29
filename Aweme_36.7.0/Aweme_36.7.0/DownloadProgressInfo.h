@class NSString;

@interface DownloadProgressInfo : NSObject

@property (copy) NSString *urlKey;
@property (copy) NSString *secondUrl;
@property float progress;
@property long long netDownloadSpeed;
@property long long downloadedSize;
@property long long totalSize;

- (void).cxx_destruct;

@end
