@class AWEDitoPOIFavoriteLabelsComponentView, AWEDitoPOIFavoriteLabelsDataModel, AWEDitoPOIFavoritePageContext;

@interface AWEDitoPOIFavoriteLabelsComponentViewModel : DitoComponentViewModel

@property (retain, nonatomic) AWEDitoPOIFavoritePageContext *context;
@property (weak, nonatomic) AWEDitoPOIFavoriteLabelsComponentView *cell;
@property (retain, nonatomic) AWEDitoPOIFavoriteLabelsDataModel *data;
@property (nonatomic) double currentBackgroundColorAlpha;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)pageView:(id)a0 didScroll:(id)a1;
- (id)dataModelWithNode:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
