@class IESLLGDQualificationModel, IESLLGDGrouponDetailQualificationComponentView;

@interface IESLLGDGrouponDetailQualificationComponentViewModel : LLDitoComponentViewModel

@property (nonatomic) BOOL hasShown;
@property (weak, nonatomic) IESLLGDGrouponDetailQualificationComponentView *cell;
@property (retain, nonatomic) IESLLGDQualificationModel *vo;
@property (nonatomic) double customComponentHeight;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)handleExposeEvent;
- (void)componentViewWillShow;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
