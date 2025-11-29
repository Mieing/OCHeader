@class NSMutableDictionary, YYDiskCache, AWEAwemeModel, NSString, NSMutableArray, UIViewController;
@protocol AWEAdRichAwemeStatusProtocol, AWEPlayInteractionViewControllerProtocol, AWECommerceComponentContext;

@interface AWESplashAlbumManager : NSObject <AWESplashAlbumManager, AWECommerceComponentProtocol>

@property (nonatomic) long long lastAlbumIndex;
@property (nonatomic) double totalAlbumPlayTime;
@property (nonatomic) double currentSectionPlayTime;
@property (retain, nonatomic) NSMutableArray *playCountArray;
@property (retain, nonatomic) NSMutableDictionary *playPeriodTime;
@property (copy, nonatomic) id /* block */ periodCallback;
@property (nonatomic) BOOL firstPlayFlag;
@property (weak, nonatomic) id<AWEAdRichAwemeStatusProtocol> statusManager;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *interactionController;
@property (copy, nonatomic) id /* block */ learnMoreClickHandler;
@property (copy, nonatomic) id /* block */ albumUpdateIndexHandler;
@property (copy, nonatomic) id /* block */ albumNoAccountAvatarClickedHandler;
@property (copy, nonatomic) id /* block */ videoPeriodHandler;
@property (retain, nonatomic) YYDiskCache *progressBarCache;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWECommerceComponentContext> commerceContext;

+ (BOOL)canShowComponentWithContext:(id)a0;
+ (BOOL)shouldUseSlidesNewProgressBar:(id)a0;
+ (id)generateAlbumProgressResListWithModel:(id)a0;
+ (void)downloadProgressBarIfNeededWithModel:(id)a0;
+ (void)removeProgressBarResourceWithModel:(id)a0;
+ (id)progressBarCache;
+ (id)generateResourceListWithModel:(id)a0;
+ (void)downloadResourceWithList:(id)a0 cid:(id)a1;

- (void)updateSlidesAwemeProgressWithModel:(id)a0 duration:(double)a1 totalCount:(long long)a2 currentIndex:(long long)a3 currentProgress:(double)a4 slideMethod:(unsigned long long)a5 direction:(id)a6;
- (void)trackSplashMultiVideoPlayStatusIfNeededWithModel:(id)a0 isPause:(BOOL)a1;
- (void)trackSplashMultiVideoShowOverIfNeededWithModel:(id)a0;
- (void)setupWithContainer:(id)a0 model:(id)a1;
- (void)registerSplashAlbumVideoPlayPeriodWithIndex:(long long)a0 times:(id)a1 callback:(id /* block */)a2;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)reset;
- (void)resume;

@end
