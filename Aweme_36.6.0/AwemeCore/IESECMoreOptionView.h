@class UIImageView, NSArray, UIView;

@interface IESECMoreOptionView : UIView

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSArray *items;

- (void)handleTapItemView:(id)a0;
- (id)initWithItmes:(id)a0;
- (id)initWithItmes:(id)a0 style:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)setupViews;
- (double)viewHeight;

@end
