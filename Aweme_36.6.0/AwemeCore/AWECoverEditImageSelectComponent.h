@class NSString, UICollectionView, UIView, AWECoverEditImageChooseCoverViewModel;
@protocol ACCSequencePlayControlServiceProtocol;

@interface AWECoverEditImageSelectComponent : ACCSecondaryPageComponent <UICollectionViewDelegate, UICollectionViewDataSource, ACCSequenceEditServicePlayerSubscriber>

@property (retain, nonatomic) UIView *selectContainerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWECoverEditImageChooseCoverViewModel *viewModel;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequenceControlService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)sequenceEditService:(id)a0 didTransferToIndex:(long long)a1 editMode:(unsigned long long)a2 isAutoTransfer:(BOOL)a3;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (id)serviceBinding;
- (double)subViewHeight;
- (id)subViewInHierarchy;
- (unsigned long long)secondaryPageComponentType;
- (unsigned long long)mediaTypeWithProject:(id)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;

@end
