@class BDPODRResourceDownloader, NSString, NSTimer, BDPODRXFileBasicModel, NSProgress, NSObject, BDPODRCodeDownloader;
@protocol OS_dispatch_queue;

@interface BDPODRFileDownloader : NSObject <BDPODRXResolveDelegate>

@property (retain, nonatomic) BDPODRXFileBasicModel *model;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mergeSerialQueue;
@property (retain, nonatomic) NSTimer *timerOutTimer;
@property (nonatomic) double downloadBeginTimeStamp;
@property (copy, nonatomic) NSString *gamePackagePath;
@property (copy, nonatomic) NSString *codesXzPath;
@property (copy, nonatomic) NSString *resourceXzPath;
@property (copy, nonatomic) NSString *fullComressPath;
@property (copy, nonatomic) NSString *finalPackagePath;
@property (nonatomic) BOOL codesDone;
@property (nonatomic) BOOL resoucesDone;
@property (nonatomic) BOOL finished;
@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ compressBlock;
@property (nonatomic) BOOL isGame;
@property (retain, nonatomic) BDPODRCodeDownloader *codeDownloader;
@property (retain, nonatomic) BDPODRResourceDownloader *resourceDownloader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)downloaderWithModel:(id)a0;
+ (BOOL)decompressFileCacheIfNeed:(id)a0;

- (void)_trackLoadStartEvent:(id)a0;
- (void)_executeProgressBlock:(id)a0;
- (void)_executeFailureBlock:(id)a0;
- (void)_executeSuccessBlockIfNeeded;
- (void)_decompressResourceFromPath:(id)a0;
- (void)_setupTimeoutTimer;
- (BOOL)_decompressFileCacheIfNeed;
- (BOOL)_decompressFullFileAtPath:(id)a0 toDestination:(id)a1;
- (void)_trackLoadResultEvent:(id)a0 filePath:(id)a1 loadType:(id)a2;
- (void)_compressFullFileAtPath:(id)a0 toDestination:(id)a1;
- (void)_cleanTempFiles;
- (void)_resetCallBackBlocks;
- (void)_cleanAllFiles;
- (void)startDownload:(id)a0 progress:(id /* block */)a1 suceess:(id /* block */)a2 failure:(id /* block */)a3 didCompress:(id /* block */)a4;
- (void)_invalidateTimer;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)stopDownload;

@end
