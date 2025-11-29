@class IESLiveFeedDrawerOperationCardItemModel, UICollectionViewCell, NSString;
@protocol IESLiveFeedDrawerOperationCellProtocol;

@interface IESLiveFeedDrawerOperationCardSectionController : IESLiveFeedDrawerListItemSectionController <IGListDisplayDelegate>

@property (retain, nonatomic) IESLiveFeedDrawerOperationCardItemModel *item;
@property (retain, nonatomic) UICollectionViewCell<IESLiveFeedDrawerOperationCellProtocol> *cell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)didUpdateToObject:(id)a0;
- (void)trackCellWillShow;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
