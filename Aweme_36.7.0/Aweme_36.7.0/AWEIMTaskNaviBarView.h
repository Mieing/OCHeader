@class AWEIMTaskPlatformContext, UICollectionView, AWEIMTaskCardNaviDatasource, UIView, NSString;
@protocol AWEIMTaskNaviBarViewDelegate;

@interface AWEIMTaskNaviBarView : UIView <UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *indexLineView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (weak, nonatomic) AWEIMTaskCardNaviDatasource *datsource;
@property (weak, nonatomic) AWEIMTaskPlatformContext *context;
@property (weak, nonatomic) id<AWEIMTaskNaviBarViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__addSubviews;
- (id)__createCollectionView:(long long)a0 cellClass:(Class)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)renderDatasource:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setScrollProgress:(double)a0;

@end
