@class AWERVDetailPageContext;

@interface AWERelatedVideoDetailVideoRelatedVideoBaseSectionController : AWEBaseListSectionController

@property (retain, nonatomic) AWERVDetailPageContext *pageContext;

+ (Class)sectionViewModelClass;

- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)configSupplementaryHeaderView:(id)a0;
- (void).cxx_destruct;
- (Class)headerViewClass;

@end
