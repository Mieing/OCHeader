@class LLBizDitoCommonToolBarComponentViewModel, NSMutableDictionary, UIView;
@protocol IESLLNavigationBarInterface;

@interface LLBizDitoCommonToolBarComponentView : LLDitoComponentView

@property (weak, nonatomic) LLBizDitoCommonToolBarComponentViewModel *viewModel;
@property (retain, nonatomic) UIView<IESLLNavigationBarInterface> *duxNavigationBar;
@property (nonatomic) double leftPadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) long long actionIndex;
@property (retain, nonatomic) NSMutableDictionary *actionViewMap;

- (void)updateViewModel:(id)a0;
- (void)addDuxAction:(BOOL)a0;
- (void)didTapDux:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;

@end
