@class NSString, IGListAdapter, IESECSKUContentViewModel, UICollectionView;
@protocol IESECCommentNewSKUContentViewDelegate;

@interface IESECCommentNewSKUContentView : UIView <IGListAdapterDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) IESECSKUContentViewModel *viewModel;
@property (weak, nonatomic) id<IESECCommentNewSKUContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (id)mainCollection;
- (void)didSelectSKUItem;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)reloadView;

@end
