@interface IESECGoodsDetailCarAddressViewModel : IESECGoodsDetailPageBaseViewModel

- (void)setupViewModel;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)setupCurrentViewSize;
- (void)updatePOIFromSharedDict;
- (void)configDataModelWithPoiSelect:(id)a0;
- (void)updateModelWithParams:(id)a0;

@end
