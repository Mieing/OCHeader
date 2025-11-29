@class ABAReportPrams, AVAsset, NSString, NSURL, AVMutableVideoComposition, NSMutableArray, VideoEncodeParams;

@interface VideoEncodeTask : NSObject

@property (nonatomic) BOOL isCanceled;
@property (nonatomic) unsigned long long applicationResignActiveTimes;
@property (nonatomic) unsigned long long applicationSuspendTimes;
@property (retain, nonatomic) NSMutableArray *audioSessionStatus;
@property (copy, nonatomic) NSURL *inputPath;
@property (copy, nonatomic) NSURL *outputPath;
@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) VideoEncodeParams *params;
@property (retain, nonatomic) NSMutableArray *callbacks;
@property (nonatomic) BOOL isEncoding;
@property (nonatomic) BOOL isReplicable;
@property (retain, nonatomic) AVMutableVideoComposition *videoComposition;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) id /* block */ videoProgressCallback;
@property (copy, nonatomic) NSString *exportFilePath;
@property (retain, nonatomic) ABAReportPrams *videoScoreParams;

+ (id)errorWithCode:(long long)a0;
+ (BOOL)isCancel:(id)a0;

- (id)init;
- (void)dealloc;
- (void)callbackSuccess:(id)a0 compressDuration:(double)a1;
- (BOOL)cancel;
- (BOOL)shouldCallbackForCancel;
- (BOOL)canCancelExport;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)a0;
- (void)cleanOutputFilePathIfNeeded;
- (void)cleanExportSession;
- (void)stopExport;
- (BOOL)isValidPreComposeTask;
- (void)setupNotification;
- (void)onApplicationWillResignActive;
- (void)onApplicationDidBecomeActive;
- (void)onApplicationWillSuspend;
- (void)handleApplicationWillResignActive;
- (void)handleApplicationDidBecomeActive;
- (void)handleApplicationWillSuspend;
- (void)onAudioSessionInterrupt:(id)a0;
- (void)onAudioSessionRouteChange:(id)a0;
- (void)onAudioSessionMediaServicesWereLost:(id)a0;
- (void)onAudioSessionMediaServicesWereReset:(id)a0;
- (void)onAudioSessionSilenceSecondaryAudioHint:(id)a0;
- (void)prepareOuputVideoWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
