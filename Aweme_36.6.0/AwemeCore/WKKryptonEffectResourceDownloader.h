@class NSString, NSURLSessionDownloadTask;
@protocol WKKryptonEffectConfigService;

@interface WKKryptonEffectResourceDownloader : NSObject

@property (retain, nonatomic) NSURLSessionDownloadTask *task;
@property (copy, nonatomic) NSString *dirPath;
@property (copy, nonatomic) NSString *bundlePath;
@property (copy, nonatomic) NSString *zipPath;
@property (retain, nonatomic) id<WKKryptonEffectConfigService> configService;

+ (id)sharedInstance;

- (void)downloadModel:(id)a0 withCompletion:(id /* block */)a1;
- (void)downloadSticker:(id)a0 withCallback:(id /* block */)a1;
- (void)downloadResource:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
