@class AWEIMTaskDetailistContext, NSString, UICollectionView, RxCollectionViewDiffableDataSource;

@interface AWEIMTaskPlatformDetailCardDetailListContentView : UIView <AWEIMRendererProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEIMTaskDetailistContext *context;
@property (retain, nonatomic) RxCollectionViewDiffableDataSource *diffiableDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (id)__cellModelForResult:(id)a0;
- (id)__createCollectionView:(long long)a0 cellClass:(Class)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)__createDiffableDataSource:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
