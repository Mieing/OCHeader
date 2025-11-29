@interface IESECGoodsFeedResourceCellViewModel : IESECGoodsFeedCellBaseViewModel

- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (struct CGSize { double x0; double x1; })calculateCellSizeForContaineSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithModel:(id)a0 context:(id)a1 useToInsert:(BOOL)a2;
- (void)resourceViewModelWithModel:(id)a0;

@end
