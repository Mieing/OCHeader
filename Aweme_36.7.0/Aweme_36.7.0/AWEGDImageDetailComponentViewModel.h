@class AWEGDImageDetailModel, AWEGDImageDetailComponentView;

@interface AWEGDImageDetailComponentViewModel : DitoComponentViewModel

@property (weak, nonatomic) AWEGDImageDetailComponentView *cell;
@property (retain, nonatomic) AWEGDImageDetailModel *vo;
@property (nonatomic) double customComponentHeight;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
