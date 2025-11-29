@interface AWEListKitMagicCollectionView : UICollectionView

@property (nonatomic) BOOL disableContentOffsetRestorationAnchor;

- (void)layoutSubviews;
- (void)_saveContentOffsetRestorationAnchorIfNecessaryUsingModel:(id)a0;
- (void)_rebaseContentOffsetAnchorOrScrollTargetForUpdate:(id)a0;

@end
