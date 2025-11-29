@class AWETeenHotSpotCollectionView;

@interface AWETeenHotSpotPanelContainer : AWETeenBasePanelContainer

@property (retain, nonatomic) AWETeenHotSpotCollectionView *collectionView;
@property (nonatomic) BOOL firsrPresent;

- (void)p_setupView;
- (void)presentWithHotID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didDismiss;
- (void)didPresent;

@end
