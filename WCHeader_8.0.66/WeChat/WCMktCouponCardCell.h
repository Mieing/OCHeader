@class WCPayWebImageView, CardElementCouponList, UIView, MMUILabel;

@interface WCMktCouponCardCell : MMMultiMenuTableViewCell

@property (retain, nonatomic) CardElementCouponList *cellData;
@property (nonatomic) BOOL bIsFromHistoryPage;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *cardBackgroundView;
@property (retain, nonatomic) UIView *leftCircleView;
@property (retain, nonatomic) UIView *rightCircleView;
@property (retain, nonatomic) WCPayWebImageView *logoImgView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIView *highlightView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void)updateContentWithCardCellData:(id)a0 isFromHistoryPage:(BOOL)a1;
- (id)genTagButtonWithTagData:(id)a0;
- (void).cxx_destruct;

@end
