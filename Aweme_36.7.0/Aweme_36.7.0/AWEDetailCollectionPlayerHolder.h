@class NSString, TTVideoEngine, AWEAwemeModel, UIView, NSMutableSet;

@interface AWEDetailCollectionPlayerHolder : NSObject <TTVideoEngineDelegate>

@property (weak, nonatomic) AWEAwemeModel *currentModel;
@property (weak, nonatomic) UIView *playerContainerView;
@property (retain, nonatomic) TTVideoEngine *playerController;
@property (retain, nonatomic) NSMutableSet *pauseOrStopKeys;
@property (copy, nonatomic) id /* block */ currentModelDidFinishPlayBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isRichContent:(id)a0;
+ (BOOL)isPlayableModel:(id)a0;
+ (BOOL)isVideo:(id)a0;

- (void)videoEngineUserStopped:(id)a0;
- (void)videoEngineDidFinish:(id)a0 error:(id)a1;
- (void)videoEngineDidFinish:(id)a0 videoStatusException:(long long)a1;
- (void)videoEngineCloseAysncFinish:(id)a0;
- (void)setupVideoPlayer;
- (void)pauseWithKey:(id)a0;
- (void)resumeWithKey:(id)a0 needResetStartTime:(BOOL)a1;
- (void)stopWithKey:(id)a0;
- (void)stopModelIfNeeded:(id)a0;
- (void)playModel:(id)a0 playerContainerView:(id)a1;
- (void)stopWithKey:(id)a0 resetCurrentInfo:(BOOL)a1;
- (void)internalPlayModel:(id)a0 playerContainerView:(id)a1;
- (void)playVideoWithUrls:(id)a0 URI:(id)a1 playerContainerView:(id)a2;
- (void)trackVideoPlay;
- (void)resumeWithNeedResetStartTime:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stopVideoPlayer;

@end
