@class UIImage, UIView;

@interface MMGroupedCellsView : UIView

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long count;
@property (nonatomic) double scale;
@property (retain, nonatomic) UIView *topCellView;

- (id)initWithTopCellImage:(id)a0 count:(long long)a1 scale:(double)a2;
- (void)initView;
- (void)addShadow:(id)a0;
- (id)getTopCellView;
- (void).cxx_destruct;

@end
