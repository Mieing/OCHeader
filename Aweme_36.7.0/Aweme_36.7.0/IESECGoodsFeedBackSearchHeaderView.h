@class UIImageView, UIView;

@interface IESECGoodsFeedBackSearchHeaderView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *searchSameGoodsTextView;
@property (copy, nonatomic) id /* block */ tapAction;

- (void)handleSearchSameGoodsEntrance:(id)a0;
- (id)initWithImageURL:(id)a0 tapAction:(id /* block */)a1;
- (void)updateTapAction:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
