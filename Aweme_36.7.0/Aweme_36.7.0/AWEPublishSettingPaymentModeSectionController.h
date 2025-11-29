@interface AWEPublishSettingPaymentModeSectionController : AWEBaseListSectionController

@property (nonatomic) double headerViewHeight;
@property (copy, nonatomic) id /* block */ disableShowConfigContent;
@property (copy, nonatomic) id /* block */ didSelectItem;
@property (copy, nonatomic) id /* block */ trackSalesFormItemShow;
@property (copy, nonatomic) id /* block */ configSupplementaryHeaderView;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)configSupplementaryHeaderView:(id)a0;
- (void)viewControllerWillAppear:(BOOL)a0 isBeingPresented:(BOOL)a1 isMovingToParentViewController:(BOOL)a2;
- (void)updateHeaderViewHeight:(double)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (Class)headerViewClass;

@end
