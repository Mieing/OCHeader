@class NSString, WAPackageCronetDownloadTask, NSURLSessionDownloadTask, NSDate;

@interface WAPackageDownloadTask : NSObject

@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSURLSessionDownloadTask *downloadTask;
@property (retain, nonatomic) WAPackageCronetDownloadTask *cronetTask;
@property (copy, nonatomic) NSString *downloadUrl;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *directoryPath;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSString *appid;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) unsigned long long downloadType;
@property (nonatomic) BOOL needGzip;
@property (nonatomic) unsigned int dnsType;
@property (nonatomic) BOOL enableDownloadResumption;

- (id)initWithDownloadTask:(id)a0 progressBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
