@class AWEURLModel, NSString, NSDictionary, NSArray, AWEDPlayerVideoModel, AWEClueStoreMediaDataController;

@interface AWEClueStoreViewModel : NSObject

@property (retain, nonatomic) AWEClueStoreMediaDataController *dataController;
@property (copy, nonatomic) NSDictionary *routerParamDict;
@property (copy, nonatomic) NSString *clueLogExtra;
@property (copy, nonatomic) NSArray *imgURLs;
@property (nonatomic) double fitHeight;
@property (nonatomic) double startTime;
@property (nonatomic) double lynxStartLoadTime;
@property (nonatomic) long long showType;
@property (retain, nonatomic) AWEDPlayerVideoModel *generalPlayerModel;
@property (retain, nonatomic) AWEURLModel *generalPlayerCoverURL;

+ (id)storageKeyWithSwipeType:(long long)a0;

- (id)lynxSchema;
- (void)trackPageExit;
- (void)recordPageShowTime;
- (id)initWithRouterParamDict:(id)a0;
- (double)calculatedVideoHeight;
- (void)showSwipeUpAnimationIfNeeded;
- (void)trackBackgroundImageShow;
- (void)showSwipeDownAnimationIfNeeded;
- (void)trackVideoPlayOver;
- (void)trackVideoPlayStart;
- (void)reportLynxLoadFinishWithResult:(BOOL)a0;
- (void)recordLynxLoadStartTime;
- (void)refreshMediaData;
- (BOOL)shouldShowGuideWithSwipeType:(long long)a0;
- (void)recordShownWithSwipeType:(long long)a0;
- (void)showGuideAnimationIfNeededWithSwipeType:(long long)a0;
- (void).cxx_destruct;

@end
