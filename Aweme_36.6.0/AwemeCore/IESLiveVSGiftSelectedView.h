@class IESLiveVSGiftItem, UIImageView, UILabel, UIView;

@interface IESLiveVSGiftSelectedView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *giftImageView;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UIView *bottomContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESLiveVSGiftItem *item;

- (void)updateWithItem:(id)a0 giftImage:(id)a1 bgImage:(id)a2;
- (void)showGiftScaleAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
