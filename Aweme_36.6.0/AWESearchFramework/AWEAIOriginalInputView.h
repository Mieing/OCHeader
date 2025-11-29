@class YYLabel, AWEBinding, AWEAIOriginalPageContext;
@protocol AWEAIOriginalContainerViewControllerProtocol;

@interface AWEAIOriginalInputView : UIView

@property (retain, nonatomic) YYLabel *textLabel;
@property (retain, nonatomic) AWEBinding *binding;
@property (weak, nonatomic) AWEAIOriginalPageContext *pageContext;
@property (weak, nonatomic) id<AWEAIOriginalContainerViewControllerProtocol> containerVC;

- (void)bindPageContext:(id)a0 containerVC:(id)a1;
- (void)didClickInput;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;
- (id)placeholderString;

@end
