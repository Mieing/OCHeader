@class NSString, UIImageView, UIView, IESECLiveGoodsBottomBannerInfoModel;

@interface IESECLivePromotionCardBottomBannerView : UIView <IESECLiveConfigViewDelegate>

@property (copy, nonatomic) id /* block */ onClickEvent;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIView *leftView;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) IESECLiveGoodsBottomBannerInfoModel *bannerModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBgCornerRadius:(double)a0;
- (void)clickBanner;
- (void).cxx_destruct;
- (id)textFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
