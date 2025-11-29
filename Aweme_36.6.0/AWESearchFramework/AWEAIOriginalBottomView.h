@class UIStackView, NSArray, AWEAIOriginalPageContext, AWEAIOriginalInputView, UIView;
@protocol AWEAIOriginalContainerViewControllerProtocol;

@interface AWEAIOriginalBottomView : UIView

@property (copy, nonatomic) NSArray *itemArrays;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEAIOriginalInputView *inputView;
@property (retain, nonatomic) UIStackView *itemStackView;
@property (weak, nonatomic) AWEAIOriginalPageContext *pageContext;
@property (weak, nonatomic) id<AWEAIOriginalContainerViewControllerProtocol> containerVC;

- (double)bottomSafeAreaInset;
- (void)bindPageContext:(id)a0 containerVC:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;
- (double)containerHeight;

@end
