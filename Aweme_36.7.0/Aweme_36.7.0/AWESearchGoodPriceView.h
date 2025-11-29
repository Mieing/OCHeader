@class AWESearchMerchandiseBiddingInformation, UIImageView, UILabel;

@interface AWESearchGoodPriceView : UIView

@property (nonatomic) BOOL needUnifiedUIConfig;
@property (retain, nonatomic) AWESearchMerchandiseBiddingInformation *bidInfo;
@property (retain, nonatomic) UIImageView *bgView;
@property (retain, nonatomic) UILabel *goodPriceLabel;
@property (retain, nonatomic) UIImageView *icon;

- (void)setBidInfo:(id)a0 needUnifiedUIConfig:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
