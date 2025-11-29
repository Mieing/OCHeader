@class AWELandscapePageContext;
@protocol AWELandscapeSplitScreenContainerDelegate;

@interface AWELandscapeDetailRelatedVideoSectionController : AWEBaseListSectionController

@property (retain, nonatomic) AWELandscapePageContext *context;
@property (weak, nonatomic) id<AWELandscapeSplitScreenContainerDelegate> splitScreenContainer;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (void)didBindSectionViewModel;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)configSupplementaryHeaderView:(id)a0;
- (void)handleDataStateChangedWithLoadingCell:(id)a0;
- (void)refreshRelatedList:(id)a0 model:(id)a1 userInfo:(id)a2;
- (void)trackClickRelatedVideoCellWithModel:(id)a0;
- (void)trackShowRelatedVideoCellIfNeededWithModel:(id)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (Class)headerViewClass;

@end
