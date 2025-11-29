@class NSString, UICollectionView, UIView, UICollectionViewCell;

@interface WCFinderFeedFlowZoomAnimatorHelper : NSObject <WCFinderZoomAnimatorBehavior>

@property (weak, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ idxPathGetter;
@property (retain, nonatomic) UIView *cacheSnapView;
@property (weak, nonatomic) UICollectionViewCell *cacheCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)helperWithCollectionView:(id)a0 idxPathGetter:(id /* block */)a1;

- (id)zoomAnimatorTransitionSnapView:(id)a0 cornerRaidus:(double *)a1;
- (void)onAnimatorWillBeginClosure:(id)a0;
- (void)safeReloadCollectionViewItem:(id)a0;
- (void)onAnimatorDidEndClosure:(id)a0;
- (id)browserFeedIndexPathForTid:(id)a0;
- (void).cxx_destruct;

@end
