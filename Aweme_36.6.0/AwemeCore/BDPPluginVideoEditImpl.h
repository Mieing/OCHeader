@class BDPVideoEditProcessInfo, NSMutableArray, NSString;

@interface BDPPluginVideoEditImpl : NSObject <BDPVideoEditPluginDelegate>

@property (retain, nonatomic) NSMutableArray *videoProcessList;
@property (retain) BDPVideoEditProcessInfo *currentProcessInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (unsigned long long)bdp_startVideoEditWithType:(long long)a0 paramInfo:(id)a1 effectConfig:(id)a2 progressCallback:(id /* block */)a3 completion:(id /* block */)a4;
- (void)onFinishEditingWithVideoEditID:(unsigned long long)a0 resultVideoPath:(id)a1 errorMessage:(id)a2 errorCode:(long long)a3 innerError:(id)a4 completion:(id /* block */)a5;
- (id)parseClipInfosWithTrimParams:(id)a0;
- (id)parseClipInfosWithAudioMixParams:(id)a0;
- (void)prepareToProcessVideoWithInfo:(id)a0;
- (BOOL)checkTimestampsWithInfo:(id)a0;
- (void)configClipSpeedWithList:(id)a0 totalDuration:(double)a1 effectConfig:(id)a2;
- (void)configClipTransitionWithList:(id)a0 effectConfig:(id)a1;
- (void)parseStickerInfosWithInfo:(id)a0;
- (void)processNextVideo;
- (void)loadResourceForProcessInfo:(id)a0 completion:(id /* block */)a1;
- (double)convertToDouble:(id)a0;
- (void)bdp_setCallbackWithVideoPath:(id)a0 progressCallback:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)bdp_isVideoEditing:(id)a0;
- (void)bdp_cancelAllVideoEditProcess;
- (void).cxx_destruct;
- (id)init;

@end
