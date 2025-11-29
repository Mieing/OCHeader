@class AWEAIOriginalPageContext, UIScrollView, UIView, UIViewController;
@protocol AWEAIOriginalContainerViewControllerProtocol;

@interface AWESearchCommentListCardView : AWESearchCachalotBaseCardView

@property (retain, nonatomic) UIScrollView *wrapperScrollView;
@property (retain, nonatomic) UIView *commentListView;
@property (weak, nonatomic) AWEAIOriginalPageContext *pageContext;
@property (weak, nonatomic) UIViewController<AWEAIOriginalContainerViewControllerProtocol> *containerVC;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)componentView;

@end
