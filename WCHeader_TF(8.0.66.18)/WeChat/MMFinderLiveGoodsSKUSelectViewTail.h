@class UILabel, UIImageView;

@interface MMFinderLiveGoodsSKUSelectViewTail : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *iconView;
@property (nonatomic) unsigned long long style;

- (struct CGSize { double x0; double x1; })iconSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)textForStyle:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
