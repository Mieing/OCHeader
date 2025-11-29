@class UIViewController, NSString, UICollectionView, AWECommentQuickCommentHelper;

@interface AWECommentQuickCommentView : UIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, AWEPadUIAdaptionViewTransitionObserver>

@property (retain, nonatomic) UICollectionView *quickCommentBar;
@property (weak, nonatomic) UIViewController *rootViewController;
@property (weak, nonatomic) AWECommentQuickCommentHelper *quickCommentHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setupUI;
- (id)transferHotWordString:(id)a0;
- (double)precaculateCellWidthForHotWord:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
