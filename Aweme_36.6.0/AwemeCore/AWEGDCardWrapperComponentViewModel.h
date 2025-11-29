@class AWEGDCardWrapperComponentView, AWEGDCardWrapperVOModel;

@interface AWEGDCardWrapperComponentViewModel : DitoComponentViewModel

@property (nonatomic) BOOL hasShown;
@property (weak, nonatomic) AWEGDCardWrapperComponentView *cell;
@property (retain, nonatomic) AWEGDCardWrapperVOModel *componentVO;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)handleExposeEvent;
- (void)componentViewWillShow;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
