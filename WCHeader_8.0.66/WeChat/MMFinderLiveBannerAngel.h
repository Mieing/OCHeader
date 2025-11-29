@class MMFinderLiveBannerCellViewModel, NSArray, NSString;
@protocol MMFinderLiveBannerAngelDelegate;

@interface MMFinderLiveBannerAngel : ZZFLEXAngel <UICollectionViewDelegate>

@property (nonatomic) BOOL isInScrollAnimated;
@property (copy, nonatomic) id /* block */ scrollAnimationCompleteAction;
@property (retain, nonatomic) MMFinderLiveBannerCellViewModel *scrollingVM;
@property (nonatomic) BOOL disablePagAnimation;
@property (readonly, nonatomic) NSArray *bannerVMList;
@property (readonly, nonatomic) NSArray *bannerList;
@property (copy, nonatomic) id /* block */ viewEventAction;
@property (readonly, nonatomic) long long bannerCount;
@property (readonly, nonatomic) BOOL isAnimation;
@property (readonly, nonatomic) long long firstBannerUIIndex;
@property (readonly, nonatomic) long long lastBannerUIIndex;
@property (readonly, nonatomic) BOOL isInManualScroll;
@property (weak, nonatomic) id<MMFinderLiveBannerAngelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellClassWithBannerInfo:(id)a0;

- (void)setBannerList:(id)a0;
- (void)reloadData;
- (void)reloadOnScrollFinish;
- (void)fixBannerPositionIfNeed:(id)a0;
- (void)deleteAnimatedFirstBanenr;
- (void)deleteAnimatedLastBanenr;
- (void)deleteAnimatedBanenr:(BOOL)a0;
- (void)replaceAnimatedBanner:(id)a0 lastBannerInfo:(id)a1;
- (BOOL)showBannerInnerAnimationIfNeed:(id)a0;
- (id)cellWithIndexPath:(id)a0;
- (void)deleteBannerItem:(id)a0 completeAction:(id /* block */)a1;
- (void)setIsAnimation:(BOOL)a0;
- (void)addNotifyBanner:(id)a0 index:(long long)a1;
- (void)deleteNotifyBanner:(id)a0;
- (void)checkDeleteSameBanner;
- (id)currentDisplayCell;
- (void)scrollToPageIndex:(long long)a0 animated:(BOOL)a1 completeAction:(id /* block */)a2;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)onScrollComplete;
- (void)updateDisablePagAnimationSwitch:(BOOL)a0;
- (void).cxx_destruct;

@end
