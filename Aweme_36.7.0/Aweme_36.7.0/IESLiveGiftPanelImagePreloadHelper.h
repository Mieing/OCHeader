@class NSString;
@protocol IESLiveGiftPanelImagePreloadHelperDelegate, IESLiveGiftImageTemplateService;

@interface IESLiveGiftPanelImagePreloadHelper : NSObject <IESLiveGiftInnerActions, IESLiveRefactGiftPanelEventAction>

@property (nonatomic) BOOL enableHeic;
@property (nonatomic) BOOL enableCache;
@property (weak, nonatomic) id<IESLiveGiftImageTemplateService> templateService;
@property (nonatomic) long long preloadCountWhenEnterRoom;
@property (nonatomic) long long preloadCountWhenOpenPanel;
@property (nonatomic) double preloadDelayAfterOpenPanel;
@property (nonatomic) long long preloadCountWhenScroll;
@property (nonatomic) BOOL enableRebornGiftPanel;
@property (weak, nonatomic) id<IESLiveGiftPanelImagePreloadHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)gpe_giftListScrollViewDidEndDecelerating:(id)a0 tabIndex:(long long)a1 layoutDirection:(long long)a2;
- (void)gpe_giftListScrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)prefetchImagesWithURLs:(id)a0;
- (void)giftViewDidDefaultSelected;
- (void)prefetchGiftCellImagesWithMaxCount:(long long)a0;
- (id)prefetchUrlWithGift:(id)a0;
- (void)prefetchGiftCellImagesForGiftShow;
- (void)prefetchWithStartPos:(long long)a0 length:(long long)a1 item:(id)a2 cache:(id)a3;
- (void)handleWithScrollView:(id)a0;
- (id)preloadUrlsWithGiftItems:(id)a0 cache:(id)a1;
- (void).cxx_destruct;

@end
