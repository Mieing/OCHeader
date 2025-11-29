@interface YataOrderListCollectionView : UICollectionView

+ (void)initialize;

- (void)_saveContentOffsetRestorationAnchorIfNecessaryUsingModel:(id)a0;
- (void)_rebaseContentOffsetAnchorOrScrollTargetForUpdate:(id)a0;

@end
