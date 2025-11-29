@class AWEGDCommonContentVOModel, AWEGDCommonContentComponentView;

@interface AWEGDCommonContentComponentViewModel : DitoComponentViewModel

@property (weak, nonatomic) AWEGDCommonContentComponentView *cell;
@property (retain, nonatomic) AWEGDCommonContentVOModel *componentVO;
@property (nonatomic) double customComponentHeight;
@property (nonatomic) double preDistance;
@property (nonatomic) double originDistance;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)pageView:(id)a0 didScroll:(id)a1;
- (void)didHalfContainerOffsetChange:(id)a0 offset:(double)a1;
- (void)componentViewWillShow;
- (void)trackViewShow;
- (void)viewDidCompleteShow:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
