@class UIImageView, CAShapeLayer, UILabel, UIView, AWEDoubleColumnSearchMerchandiseAladdinInfo;

@interface AWESearchAladdinBannerViewCell : AWESearchCachalotECommerceBaseCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *bannerPicture;
@property (retain, nonatomic) UIImageView *arrowPicture;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseAladdinInfo *aladdinInfoModel;
@property (retain, nonatomic) CAShapeLayer *bannerMaskLayer;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
