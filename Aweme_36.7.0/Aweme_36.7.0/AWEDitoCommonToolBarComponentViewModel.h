@class AWEDitoCommonToolBarDataModel, AWEDitoCommonToolBarComponentView;

@interface AWEDitoCommonToolBarComponentViewModel : DitoComponentViewModel

@property (nonatomic) BOOL shouldUpdate;
@property (weak, nonatomic) AWEDitoCommonToolBarComponentView *cell;
@property (retain, nonatomic) AWEDitoCommonToolBarDataModel *dataModel;

- (void)updateNode:(id)a0;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (void)setNeedsRefresh;

@end
