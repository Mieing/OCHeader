@class NSString, IESLiveUGCVideoListDiffableModel;

@interface IESLiveUGCVideoListSectionController : IGListSectionController <IGListDisplayDelegate>

@property (retain, nonatomic) IESLiveUGCVideoListDiffableModel *object;
@property (nonatomic) long long numberOfCellPerRow;
@property (nonatomic) struct CGSize { double width; double height; } videoCellSize;
@property (nonatomic) struct CGSize { double width; double height; } lastCellSize;
@property (copy, nonatomic) id /* block */ didSelectItemBlock;
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
- (long long)numberOfCellsPerRow;
- (void)didDeselectItemAtIndex:(long long)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)init;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;
- (double)containerWidth;

@end
