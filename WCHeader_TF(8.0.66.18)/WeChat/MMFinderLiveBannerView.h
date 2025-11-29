@class MMTimer, MMFinderLiveBannerAngel, UICollectionView, NSArray, NSMutableArray, NSString;

@interface MMFinderLiveBannerView : UIControl <MMFinderLiveBannerAngelDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) MMFinderLiveBannerAngel *angel;
@property (nonatomic) long long pageIndex;
@property (retain, nonatomic) MMTimer *timer;
@property (retain, nonatomic) NSMutableArray *_bannerList;
@property (retain, nonatomic) NSArray *waitingList;
@property (retain, nonatomic) NSArray *applyingList;
@property (retain, nonatomic) NSMutableArray *addingBannerQueue;
@property (nonatomic) BOOL isInJump;
@property (nonatomic) BOOL isInDelete;
@property (copy, nonatomic) id /* block */ viewDidUpdateAction;
@property (copy, nonatomic) id /* block */ jumpAction;
@property (copy, nonatomic) id /* block */ deleteAction;
@property (copy, nonatomic) id /* block */ bannerShownAction;
@property (copy, nonatomic) id /* block */ bannerUpdateAction;
@property (nonatomic) unsigned long long timeInterval;
@property (nonatomic) BOOL isFromCompleteViewController;
@property (readonly, nonatomic) NSArray *bannerList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })viewSizeByBannerList:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id /* block */)viewEventAction;
- (void)stopCarousel;
- (void)pauseCarousel;
- (void)resumeCarousel;
- (void)updateWhenFontSizeChanged;
- (void)setBannerList:(id)a0;
- (void)updateSelfFrameIfNeed:(id)a0;
- (void)updateBannerList:(id)a0;
- (void)tryUpdateBannerList;
- (void)stopTimerIfNeed;
- (void)updateBannerDataWithId:(id)a0 subTitleList:(id)a1 newBanner:(id)a2;
- (void)addBanner:(id)a0;
- (void)checkAddBanner;
- (void)showBannerDeleteActionSheet:(id)a0 source:(long long)a1;
- (void)deleteBannerInfo:(id)a0 source:(long long)a1;
- (void)onDeleteBannerInfoComplete:(id)a0 source:(long long)a1;
- (BOOL)deleteCurrentBannerItem:(long long)a0;
- (void)startCurPageTimer;
- (void)startOnceTimerIfNeed;
- (BOOL)canStartTimer;
- (void)stopTimer;
- (void)pauseTimer;
- (void)resumeTimer;
- (void)onTimerEvent;
- (void)updateSubTitleIndex:(long long)a0;
- (void)checkDeleteNotifyBanner:(long long)a0 nextIndex:(long long)a1;
- (void)onOnceTimerEvent;
- (void)onScrollAnimationComplete;
- (void)onBannerShowAction;
- (void)showInnerAnimationIfNeed;
- (void)stopScrollAnimationWithIndex:(long long)a0;
- (void)disableBannerPagAnimation:(BOOL)a0;
- (void)onFinderLiveBannerAngle:(id)a0 scrollToIndex:(long long)a1;
- (void)onFinderLiveBannerAngleScrollStart:(id)a0;
- (void).cxx_destruct;

@end
