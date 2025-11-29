@class NSString, AWEProfileBaseHeaderCell;

@interface AWEProfileBaseHeaderSectionController : AWEBaseListSectionController <AWEProfileBaseHeaderDelegate>

@property (weak, nonatomic) AWEProfileBaseHeaderCell *currentCell;
@property (copy, nonatomic) id /* block */ heightForCustomSegmentedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableUserPageSplitScreen;
+ (void)setEnableUserPageSplitScreen:(BOOL)a0;

- (void)didBindSectionViewModel;
- (void)updateSelectedIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })segmentFrameWithIndex:(long long)a0;
- (void)updateScrollProgress:(double)a0;
- (void)reloadRightFixedAreaWithViewsArray:(id)a0;
- (double)headerCellHeight;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)separatorColor;
- (Class)cellClass;

@end
