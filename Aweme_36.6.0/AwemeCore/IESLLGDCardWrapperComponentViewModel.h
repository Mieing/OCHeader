@class IESLLGDCardWrapperVOModel, IESLLGDCardWrapperComponentView;

@interface IESLLGDCardWrapperComponentViewModel : LLDitoComponentViewModel

@property (nonatomic) BOOL hasShown;
@property (weak, nonatomic) IESLLGDCardWrapperComponentView *cell;
@property (retain, nonatomic) IESLLGDCardWrapperVOModel *componentVO;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)handleExposeEvent;
- (void)componentViewWillShow;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
