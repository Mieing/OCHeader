@class UIImageView, UIView, AWEDoubleColumnSearchMarketInfoModel, UILabel;

@interface AWESearchMarketShopView : UIView

@property (retain, nonatomic) AWEDoubleColumnSearchMarketInfoModel *marketInfo;
@property (retain, nonatomic) UIImageView *shopImageView;
@property (retain, nonatomic) UIView *shopImageCover;
@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) UILabel *bottomLeftLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UILabel *bottomRightLabel;
@property (nonatomic) int bottomShowPriority;

+ (double)shopHeight;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
