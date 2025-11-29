@class AWEPadPolymericChannelBannerReplayCellView;

@interface AWEPadBannerPlayBackCellController : AWEPLVConfigurationTriptychBannerCellController

@property (retain, nonatomic) AWEPadPolymericChannelBannerReplayCellView *replayCellView;
@property (nonatomic) BOOL isShowing;

- (void)enableAutoCarousel;
- (void)viewDidDisplay;
- (void)configView:(id)a0;
- (void)viewDidEndDisplay;
- (void)addCoverImage;
- (void)removeCoverImage;
- (void).cxx_destruct;
- (Class)viewClass;
- (void)dealloc;
- (void)didSelectItemAtIndex:(long long)a0;

@end
