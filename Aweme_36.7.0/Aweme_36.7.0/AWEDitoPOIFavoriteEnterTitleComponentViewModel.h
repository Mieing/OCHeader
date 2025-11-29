@class AWEDitoPOIFavoriteEnterTitleComponentView, NSString;

@interface AWEDitoPOIFavoriteEnterTitleComponentViewModel : DitoComponentViewModel

@property (weak, nonatomic) AWEDitoPOIFavoriteEnterTitleComponentView *cell;
@property (copy, nonatomic) NSString *guideTitle;
@property (copy, nonatomic) NSString *guideText;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)didTapEnterLabel;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
