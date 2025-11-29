@class NSString;
@protocol AWEStudioShareAsStoryTrackerServiceProtocol;

@interface AWEStudioShareAsStoryService : HTSService <AWEStudioShareAsStoryServiceProtocol>

@property (readonly, nonatomic) id<AWEStudioShareAsStoryTrackerServiceProtocol> tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableShareVideoAsStory;
+ (double)shareToStoryCanvasScaleFactorAtNewVersionStyleScene;
+ (id)quickShareEditPagePopupCompleteTitle;
+ (id)JSONToDictionary:(id)a0;
+ (long long)getImageAlbumIndexWithAweme:(id)a0;
+ (void)preloadShareMusicToStoryEffectsWithIsPGC:(BOOL)a0 hasLyric:(BOOL)a1;
+ (id)postShareInfoWithAwemeModel:(id)a0;
+ (BOOL)isShareSceneWithPublishModel:(id)a0;
+ (BOOL)isShareLiveToStorySceneWithPublishModel:(id)a0;
+ (void)addTrackParamsForThirdAppShareWithPublishModel:(id)a0 params:(id)a1;

- (BOOL)enableQuickShare;
- (BOOL)enableQuickShareLanding;
- (void).cxx_destruct;

@end
