@class NSString, IESMMTransProcessData, HTSVideoData;
@protocol IESMMTranscoderProtocol;

@interface VECompileTaskManagerSession : IESMMObject <VEAppStatusProtocol>

@property (nonatomic) unsigned long long transStatus;
@property (nonatomic) unsigned long long pretransStatus;
@property (nonatomic) BOOL hasVideoProcess;
@property (retain, nonatomic) NSString *targetFilePath;
@property (retain, nonatomic) id<IESMMTranscoderProtocol> mediaTranscoder;
@property (retain, nonatomic) id<IESMMTranscoderProtocol> mediaTranscoderForPreupload;
@property (retain, nonatomic) HTSVideoData *videoData;
@property (retain, nonatomic) IESMMTransProcessData *transConfig;
@property (retain, nonatomic) id videoProcess;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (nonatomic) unsigned long long decreaseEncodeCount;
@property (nonatomic) unsigned long long prepareEncodeCount;
@property (nonatomic) BOOL isPreencode;
@property (nonatomic) BOOL isBackgroundPreencode;
@property (nonatomic) BOOL isBackgroundEncode;
@property (nonatomic) double encodeStartTime;
@property (nonatomic) long long maxRetryTimes;
@property (copy, nonatomic) id /* block */ effectFilterPathBlock;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ encodeDataCB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)transWithVideoData:(id)a0 transConfig:(id)a1 videoProcess:(id)a2 completeBlock:(id /* block */)a3;
- (void)cancelTranscode;
- (void)enableDynamicSpeed:(BOOL)a0;
- (BOOL)isPreUploadable:(id)a0 transConfig:(id)a1 videoProcess:(id)a2;
- (void)willExport:(id)a0;
- (BOOL)p_isPreUploadable:(id)a0 transConfig:(id)a1 videoProcess:(id)a2;
- (void)transWithVideoData:(id)a0 transConfig:(id)a1 processor:(id)a2 completeBlock:(id /* block */)a3;
- (void)didExport:(id)a0;
- (void)p_mergeCompleteWithRes:(id)a0 completeBlock:(id /* block */)a1;
- (void)p_cancelTrans:(BOOL)a0;
- (void)p_transWithVideoData:(id)a0 transConfig:(id)a1 videoProcess:(id)a2;
- (id)getBreakPointURL;
- (void)p_cancelTrans:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)p_initMediaTranscoderWithVideoData:(id)a0 config:(id)a1 videoProcess:(id)a2 forPreupload:(BOOL)a3;
- (void)p_resetEncodeParam;
- (void)p_updateProgress:(double)a0;
- (void)cancelTranscode:(id /* block */)a0;
- (void)p_resetTransFileDict:(id)a0;
- (void)p_resetTrackParam;
- (void)prepareTransWithVideoData:(id)a0 transConfig:(id)a1 videoProcess:(id)a2;
- (void)postTrack;
- (void)becomeActive;
- (void).cxx_destruct;
- (void)pause;
- (void)enterBackground;
- (void)resignActive;
- (id)init;
- (void)resume;
- (void)enterForeground;
- (void)dealloc;
- (void)memoryWarning;

@end
