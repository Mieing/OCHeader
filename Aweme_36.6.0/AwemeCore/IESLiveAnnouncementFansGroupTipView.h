@class NSArray, UICollectionView, NSString, IESLiveAnnouncementViewModel;

@interface IESLiveAnnouncementFansGroupTipView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) IESLiveAnnouncementViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *fansGroupModels;
@property (copy, nonatomic) id /* block */ itemDidTapped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setupUI;
- (void)setupData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;
- (void)setupLayout;

@end
