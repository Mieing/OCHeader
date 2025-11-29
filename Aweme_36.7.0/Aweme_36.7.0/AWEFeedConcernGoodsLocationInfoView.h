@class UIImageView, UILabel;

@interface AWEFeedConcernGoodsLocationInfoView : UIView

@property (retain, nonatomic) UIImageView *locationAnchor;
@property (retain, nonatomic) UILabel *nearestShopLabel;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UIImageView *verticalSeparatorLine;
@property (retain, nonatomic) UILabel *shopNameLabel;

- (void)configWithModel:(id)a0;
- (void)__setupUI;
- (void)__buildUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
