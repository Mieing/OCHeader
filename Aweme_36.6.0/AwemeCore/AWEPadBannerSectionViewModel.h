@class AWEPadBannerCell, NSArray, NSString, AWEPadBannerCellController;

@interface AWEPadBannerSectionViewModel : AWEPadBaseSectionViewModel <DUXMultiLayoutBannerDataSource, DUXMultiLayoutBannerDelegate>

@property (retain, nonatomic) NSArray *bannerModels;
@property (retain, nonatomic) AWEPadBannerCellController *cellController;
@property (nonatomic) long long currentIndex;
@property (nonatomic) BOOL isBannerVisible;
@property (weak, nonatomic) AWEPadBannerCell *containerCell;
@property (nonatomic) long long interval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)modelsArray;
- (void)replaceByModels:(id)a0;
- (void)bannerView:(id)a0 didScrollFromIndex:(long long)a1 toIndex:(long long)a2;
- (void)bannerView:(id)a0 didSelectedItemAtIndex:(long long)a1;
- (long long)bannerViewNumberOfItems:(id)a0;
- (id)bannerView:(id)a0 cellForIndexPath:(id)a1;
- (void)didBannerSectionDisplay;
- (void)didBannerSectionEndDisplay;
- (void).cxx_destruct;

@end
