@class NSString, AWEFullScreenAdEggModel, AWEFullScreenAdEggViewController, IESLiveVideoGiftController;

@interface AWEFullScreenAdEggAlphaPlayerView : UIView <AWEFullScreenAdEggView, IESLiveVideoGiftControllerDelegate>

@property (copy, nonatomic) NSString *cacheDirectory;
@property (copy, nonatomic) NSString *videoSourcePath;
@property (nonatomic) BOOL isPauseBackgroundPageActionNotificationPost;
@property (nonatomic) BOOL isLoaded;
@property (retain, nonatomic) IESLiveVideoGiftController *giftController;
@property (retain, nonatomic) AWEFullScreenAdEggModel *model;
@property (weak, nonatomic) AWEFullScreenAdEggViewController *adEggContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowWithModel:(id)a0;

- (void)didFinishPlayingWithError:(id)a0;
- (void)frameCallBack:(double)a0;
- (void)applicationBecomeActive;
- (void)applicationResignActive;
- (BOOL)localDataReady;
- (void)startShow;
- (void)preloadAdEggAlphaPlayerData;
- (void)tryShow;
- (void).cxx_destruct;
- (void)reset;
- (void)updateWithModel:(id)a0;

@end
