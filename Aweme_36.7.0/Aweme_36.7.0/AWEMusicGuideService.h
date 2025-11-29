@class AWEMusicStreamingBasePopupView, NSString, AWEMusicGuideConfig, AWEMusicGuideToastContainerView;
@protocol AWEMusicGuideStoreProtocol, AWEMusicGuideServiceDelegate;

@interface AWEMusicGuideService : NSObject <AWEMusicStreamingPopupViewDelegate, AWEMusicGuideToastContainerViewDelegate>

@property (retain, nonatomic) AWEMusicGuideConfig *config;
@property (retain, nonatomic) AWEMusicGuideToastContainerView *collectionToast;
@property (retain, nonatomic) AWEMusicGuideToastContainerView *goMyCollectionToast;
@property (retain, nonatomic) AWEMusicStreamingBasePopupView *bgView;
@property (retain, nonatomic) id<AWEMusicGuideStoreProtocol> guideStoreService;
@property (weak, nonatomic) id<AWEMusicGuideServiceDelegate> delegate;
@property (nonatomic) BOOL manualChangeSong;
@property (nonatomic) BOOL manualGotoMyCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)bgViewShowing;

- (void)userPlayingInBack;
- (id)initWithConfig:(id)a0 storeService:(id)a1;
- (void)popupViewDidDisappear:(id)a0 method:(long long)a1;
- (BOOL)canShowBgGuide;
- (BOOL)showBgGuideIfNeed;
- (void)reportGuideShowType:(id)a0;
- (void)reportGuideCompleteType:(id)a0 completeMethod:(id)a1;
- (BOOL)isToastGuideShowing;
- (void)dismissCollectionGuide:(id)a0;
- (void)showToast:(id)a0 inView:(id)a1 targetView:(id)a2 autoCompletion:(id /* block */)a3;
- (void)dismissGotoMyCollectionGuide:(id)a0;
- (BOOL)showChangeSongGuide:(id)a0 completion:(id /* block */)a1;
- (void)dismissToast:(id)a0 autoCompletion:(id /* block */)a1;
- (void)onViewTouched:(id)a0;
- (BOOL)showCollectionGuideInView:(id)a0 targetView:(id)a1;
- (BOOL)showGoMyCollectionGuideInView:(id)a0 targetView:(id)a1;
- (BOOL)showChangeSongGuide:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
