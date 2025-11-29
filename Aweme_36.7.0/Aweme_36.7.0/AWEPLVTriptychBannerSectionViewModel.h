@class AWEPadTriptychBannerCellController;

@interface AWEPLVTriptychBannerSectionViewModel : AWEPLVBannerSectionViewModel

@property (retain, nonatomic) AWEPadTriptychBannerCellController *triptychBannerCellController;

- (id)modelsArray;
- (void)enableAutoCarousel;
- (void)disableAutoCarousel;
- (double)bannerCornerRadius;
- (void).cxx_destruct;

@end
