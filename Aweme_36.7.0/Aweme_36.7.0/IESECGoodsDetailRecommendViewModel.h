@interface IESECGoodsDetailRecommendViewModel : IESECGoodsDetailPageBaseViewModel

- (void)setupViewModel;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)trackRecommendProductShow:(id)a0 index:(long long)a1 cell:(id)a2;
- (void)trackRecommendLiveShow:(id)a0 index:(long long)a1;
- (void)trackLynxCardShow:(id)a0 index:(long long)a1;
- (void)trackRecommendProductShowOver:(id)a0 index:(long long)a1;
- (void)trackRecommendLiveShowOver:(id)a0 index:(long long)a1;

@end
