@class IESLiveChatChannelIndicatorViewModel, NSString, IESLivePSComponentConfigModel, HTSEventContext, IESLiveChatChannelIndicatorCollectionView;

@interface IESLiveChatChannelIndicatorView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, IESLivePSComponentViewProtocol>

@property (retain, nonatomic) IESLiveChatChannelIndicatorCollectionView *collectionView;
@property (retain, nonatomic) IESLiveChatChannelIndicatorViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ allAnimationFinished;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)bindViewModel:(id)a0;
- (void)appear:(id /* block */)a0;
- (void)disappear:(id /* block */)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
