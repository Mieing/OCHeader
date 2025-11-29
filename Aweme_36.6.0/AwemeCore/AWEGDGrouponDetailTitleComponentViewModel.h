@class AWEGDCardTitleModel, AWEGDGrouponDetailTitleComponentView;

@interface AWEGDGrouponDetailTitleComponentViewModel : DitoComponentViewModel

@property (weak, nonatomic) AWEGDGrouponDetailTitleComponentView *cell;
@property (retain, nonatomic) AWEGDCardTitleModel *vo;
@property (nonatomic) double customComponentHeight;
@property (nonatomic) double preDistance;
@property (nonatomic) double originDistance;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)didHalfContainerOffsetChange:(id)a0 offset:(double)a1;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
