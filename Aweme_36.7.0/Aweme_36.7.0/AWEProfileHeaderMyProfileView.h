@class NSString, AWEProfileHeaderContext, UICollectionView;

@interface AWEProfileHeaderMyProfileView : UIView <AWEProfileHeaderMyProfileViewProtocol>

@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidScrollWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollViewDidEndDragingWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)refreshAlphaForHeaderView:(double)a0;
- (void)scrollViewBeginDraging;
- (id)headerCollectionView;
- (void)bindServiceWithContext:(id)a0;
- (void)refreshHeaderFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
