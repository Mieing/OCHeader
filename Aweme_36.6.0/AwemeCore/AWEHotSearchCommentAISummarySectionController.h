@class UIViewController;
@protocol AWECommentListViewControllerProtocol;

@interface AWEHotSearchCommentAISummarySectionController : AWECommonFeedBaseSectionController

@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentVC;

- (id)referString;
- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (id)hotspotID;
- (id)innerViewModel;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void).cxx_destruct;
- (Class)footerViewClass;
- (Class)headerViewClass;

@end
