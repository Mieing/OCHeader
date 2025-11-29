@class NSString;

@interface AWEDetailTrendMusicListConfigurationImpl : NSObject <AWEDetailTrendMusicListConfiguration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })containerEdgeInsets;
- (struct CGSize { double x0; double x1; })containerViewSize;
- (struct CGSize { double x0; double x1; })cellSizeForSingleCellStyle;
- (struct CGSize { double x0; double x1; })cellSizeForMultiCellsStyle;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionViewSectionEdgeInsets;
- (double)spacingBetweenTwoCells;
- (double)cellPreviewPartWidth;
- (void)configureContainerView:(id)a0 contentCollectionView:(id)a1;
- (void)configureLayoutForCollectionViewCell:(id)a0 musicItemViewModel:(id)a1;
- (void)p_configureSkeletonViewWithCollectionViewCell:(id)a0 musicItemViewModel:(id)a1;
- (void)p_configureCoverWithCollectionViewCell:(id)a0 musicItemViewModel:(id)a1;
- (void)p_configureMusicInfoAreaWithCollectionViewCell:(id)a0 musicItemViewModel:(id)a1;
- (void)p_configureLunaButtonWithCollectionViewCell:(id)a0 musicItemViewModel:(id)a1;
- (void)p_configureCollectMusicButtonWithCollectionViewCell:(id)a0 musicItemViewModel:(id)a1;

@end
