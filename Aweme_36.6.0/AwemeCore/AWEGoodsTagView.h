@class UIImageView, AWEAwemeGoodsTag, UILabel;

@interface AWEGoodsTagView : UIView

@property (retain, nonatomic) AWEAwemeGoodsTag *goodsTag;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *contentLabel;

- (void).cxx_destruct;
- (id)initWithTag:(id)a0;
- (void)setupUI;

@end
