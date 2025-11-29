@class VEFileDownloaderConfig, NSString, NSURL, NSError;

@interface VEFileDownloader : NSObject {
    void *_networkWrapper;
    void *_config;
}

@property (retain, nonatomic) VEFileDownloaderConfig *downloaderConfig;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSURL *cacheDir;
@property (copy, nonatomic) NSString *urlKey;
@property (nonatomic) long long status;
@property (nonatomic) long long errorCode;
@property (nonatomic) float loadedProgress;
@property (retain, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSURL *localPath;

- (BOOL)initInternalDownloader;
- (id)getNetWorkIOErrorWithCode:(unsigned long long)a0 Message:(id)a1;
- (double)bufferedTimeWithTargetTime:(double)a0;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (BOOL)startDownload;

@end
