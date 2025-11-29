@protocol AWEShareLandscapePanelViewDelegate;

@interface AWEShareLandscapePanelView : AWEShareLeftAlignGridView

@property (weak, nonatomic) id<AWEShareLandscapePanelViewDelegate> tapDelegate;

- (void).cxx_destruct;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;

@end
