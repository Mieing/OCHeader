@class NSString, UICollectionViewCell;
@protocol IESECGoodsFeedCellBaseViewModelProtocol;

@interface IESECGoodsFeedLargeCardNewSectionController : IGListSectionController <IGListSupplementaryViewSource, IGListWorkingRangeDelegate, IGListDisplayDelegate, IESECGoodsFeedSectionControllerProtocol>

@property (retain, nonatomic) UICollectionViewCell *cell;
@property (nonatomic) BOOL fullMode;
@property (nonatomic) BOOL isActivatedStyleChange;
@property (nonatomic) unsigned long long listStyle;
@property (readonly, nonatomic) id<IESECGoodsFeedCellBaseViewModelProtocol> viewModel;
@property (nonatomic) long long resourceCardBeyondRecommendCount;
@property (nonatomic) long long goodsCardCount;
@property (nonatomic) BOOL useNewCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)a0 atIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)a0 atIndex:(long long)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 sectionControllerWillEnterWorkingRange:(id)a1;
- (void)listAdapter:(id)a0 sectionControllerDidExitWorkingRange:(id)a1;
- (void)didUpdateToObject:(id)a0;
- (id)supplementaryViewSource;
- (id)workingRangeDelegate;
- (void)reloadSectionAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)createCellAtIndex:(long long)a0;
- (id)cellModelToCell;
- (id)_exposedMessageForParameters:(id)a0;
- (id)_indemnificationMessageWithParams:(id)a0;
- (id)currentCellAtIndex:(long long)a0;
- (void)preloadCell;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)didDismiss;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
