@class NSTimer, AWEVideoPublishViewModel;
@protocol ACCMusicModelProtocol;

@interface ACCEditAutoLoadMusicHandler : NSObject

@property (nonatomic) unsigned long long currentMusicServiceModuleType;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) AWEVideoPublishViewModel *model;
@property (retain, nonatomic) id<ACCMusicModelProtocol> useRecomMusic;
@property (retain, nonatomic) id<ACCMusicModelProtocol> notUseRecomMusic;
@property (retain, nonatomic) NSTimer *waitForFrameExtractFinishTimer;
@property (retain, nonatomic) NSTimer *preloadHotMusicTimer;
@property (nonatomic) BOOL hasChosenWhichTypeMusicToUse;
@property (nonatomic) double startAutoLoadMusicTime;
@property (copy, nonatomic) id /* block */ didFinishFetchAndDownloadPlayableAutoLoadMusic;

- (id)initWithCurrentMusicServiceModuleType:(unsigned long long)a0 autoLoadScene:(unsigned long long)a1 publishViewModel:(id)a2;
- (void)startFetchAutoLoadMusic;
- (void)removeWaitForFrameExtractFinishTimer;
- (void)removePreloadHotMusicTimer;
- (void)p_fetchAutoLoadHotMusic;
- (void)p_fetchAutoLoadRecomMusic;
- (BOOL)hasFrameURI;
- (void)callDidFinishFetchAutoLoadMusicWithError:(id)a0 type:(long long)a1;
- (void)p_requestIntimeMusicWithCompletion:(id /* block */)a0;
- (void)p_requestPreLoadHotMusicWithCompletion:(id /* block */)a0;
- (void)addWaitForFrameExtractFinishTimerWithWaitingTime:(double)a0;
- (void)addPreloadHotMusicTimer;
- (void)trackWhenDidFinishFetchAutoLoadMusicWithType:(long long)a0 error:(id)a1 resultModel:(id)a2;
- (void)notifyWhenFrameExtractDidFinish:(id)a0;
- (void).cxx_destruct;

@end
