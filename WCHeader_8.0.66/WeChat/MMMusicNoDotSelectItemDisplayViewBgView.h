@class UIImageView;

@interface MMMusicNoDotSelectItemDisplayViewBgView : MMUIView

@property (retain, nonatomic) UIImageView *hintImageView;
@property (nonatomic) unsigned long long curItemCount;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)changeSizeWithItemCount:(unsigned long long)a0 itemSize:(struct CGSize { double x0; double x1; })a1 itemMargin:(double)a2 itemInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3;
- (void).cxx_destruct;

@end
