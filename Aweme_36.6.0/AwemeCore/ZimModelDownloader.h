@class DTFLogMonitor, NSMutableArray, NSString;

@interface ZimModelDownloader : NSObject

@property (nonatomic) double start;
@property (retain, nonatomic) DTFLogMonitor *monitor;
@property (nonatomic) BOOL isDownloading;
@property (retain, nonatomic) NSMutableArray *blockList;
@property (retain, nonatomic) NSMutableArray *urlList;
@property (nonatomic) long long downloadCount;
@property (nonatomic) BOOL preload;
@property (copy, nonatomic) NSString *hostModelURL;

+ (BOOL)checkFileExists:(id)a0;
+ (BOOL)checkIfModelValidWithURL:(id)a0;
+ (id)modelLocation;
+ (BOOL)modelExistAndValid;
+ (BOOL)isModelBuiltIn;
+ (id)builtInModelPath;
+ (BOOL)needForceDownload;
+ (id)sharedInstance;

- (void)setModelDownloadURL:(id)a0;
- (BOOL)needDownload;
- (void)startDownloadCompletion:(id /* block */)a0;
- (void)downloadWithURL:(id)a0;
- (id)nextUrl:(id)a0;
- (void)finishAndCallbackWithResult:(BOOL)a0;
- (void)removeInvalidModel;
- (void)processForceDownload:(id)a0;
- (void)updateforceDownloadedId;
- (void).cxx_destruct;
- (id)init;
- (id)modelPath;

@end
