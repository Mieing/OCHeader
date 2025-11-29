@class NSString, AWELiveSoloKTVDetailListDiffableModel;

@interface AWELiveSoloKTVDetailListSectionController : IGListSectionController <IGListDisplayDelegate>

@property (retain, nonatomic) AWELiveSoloKTVDetailListDiffableModel *object;
@property (nonatomic) long long numberOfCellsPerRow;
@property (nonatomic) struct CGSize { double width; double height; } awemeCellSize;
@property (nonatomic) struct CGSize { double width; double height; } lastCellSize;
@property (copy, nonatomic) id /* block */ didSelectItemAction;
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
- (void)configureAwemeCell:(id)a0 withModel:(id)a1;
- (struct CGSize { double x0; double x1; })awemeCellSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })lastCellSize:(struct CGSize { double x0; double x1; })a0;
- (long long)numberOfCellsPerRowWithSize:(struct CGSize { double x0; double x1; })a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)init;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
