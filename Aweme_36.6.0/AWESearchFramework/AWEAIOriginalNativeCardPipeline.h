@class UIViewController;
@protocol AWEAIOriginalContainerViewControllerProtocol;

@interface AWEAIOriginalNativeCardPipeline : AWESearchAIGCNativePipeline

@property (weak, nonatomic) UIViewController<AWEAIOriginalContainerViewControllerProtocol> *containerVC;

- (id)componentViewWithViewModel:(id)a0;
- (struct CGSize { double x0; double x1; })componentViewSizeWithViewModel:(id)a0 containerWidth:(double)a1;
- (void).cxx_destruct;

@end
