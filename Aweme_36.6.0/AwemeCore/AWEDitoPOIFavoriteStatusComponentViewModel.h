@class AWEDitoPOIFavoriteStatusComponentView;

@interface AWEDitoPOIFavoriteStatusComponentViewModel : DitoComponentViewModel

@property (nonatomic) BOOL showFeedStatus;
@property (weak, nonatomic) AWEDitoPOIFavoriteStatusComponentView *cell;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (double)componentHeightWithState;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
