@class UIImageView, IESLiveChargeViewModel, NSString;

@interface IESLiveChargeViewTopBannerComponent : UIView <IESLiveChargeViewComponent>

@property (nonatomic) double width;
@property (retain, nonatomic) IESLiveChargeViewModel *viewModel;
@property (nonatomic) double bannerHeight;
@property (retain, nonatomic) UIImageView *banner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewModel:(id)a0;
- (void)tapBanner;
- (void)didBalanceUpdated;
- (void)didRechargeSuccess:(BOOL)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)reload;
- (id)initWithWidth:(double)a0;
- (void)layoutSubviews;
- (void)setupUI;
- (double)viewHeight;

@end
