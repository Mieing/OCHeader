@interface IESECGoodsDetailImagesViewModel : IESECGoodsDetailPageBaseViewModel

- (void)setupViewModel;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)updateDataModel:(id)a0;
- (void)setupCurrentViewSize;
- (id)tracker;

@end
