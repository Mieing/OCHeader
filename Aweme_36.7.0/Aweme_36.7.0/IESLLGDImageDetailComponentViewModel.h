@class IESLLGDImageDetailComponentView, IESLLGDImageDetailModel;

@interface IESLLGDImageDetailComponentViewModel : LLDitoComponentViewModel

@property (weak, nonatomic) IESLLGDImageDetailComponentView *cell;
@property (retain, nonatomic) IESLLGDImageDetailModel *vo;
@property (nonatomic) double customComponentHeight;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
