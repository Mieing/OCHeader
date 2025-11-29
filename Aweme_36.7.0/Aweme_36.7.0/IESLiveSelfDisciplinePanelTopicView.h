@class NSString, UICollectionView, IESLiveSelfDisciplineOpenPanelViewModel, UILabel;

@interface IESLiveSelfDisciplinePanelTopicView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) IESLiveSelfDisciplineOpenPanelViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel;
- (id)initWithViewModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setupUI;

@end
