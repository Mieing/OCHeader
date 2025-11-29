@class UIImageView, NSArray, UIView;

@interface AWELiveShelfMoreOptionView : UIView

@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSArray *items;

- (void)p_addSeparateLineToItemView:(id)a0;
- (id)p_separateLine;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })viewSize;
- (id)initWithItems:(id)a0;
- (void)setupViews;
- (double)viewHeight;

@end
