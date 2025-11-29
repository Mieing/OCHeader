@class AWEIMCommerceCouponBuilderDirector, UIView, UITapGestureRecognizer, UIImageView, AWEIMCommerceCouponProcessButton, AWEIMCommerceCouponViewModel, YYLabel, AWEIMFansGroupCouponModel, UILabel;
@protocol AWEIMCommerceCouponBuilderProtocol, AWEIMCommerceCouponContainerViewProtocol;

@interface AWEIMCommerceCouponContainerView : UIView

@property (retain, nonatomic) UIView *couponCoutainerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *priceIconLabel;
@property (retain, nonatomic) YYLabel *priceLabel;
@property (retain, nonatomic) YYLabel *discountLabel;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) YYLabel *subTitleLabel;
@property (retain, nonatomic) AWEIMCommerceCouponProcessButton *processBtn;
@property (retain, nonatomic) YYLabel *lineLabel;
@property (retain, nonatomic) YYLabel *bottomTitleLabel;
@property (retain, nonatomic) AWEIMCommerceCouponBuilderDirector *builderDirector;
@property (retain, nonatomic) id<AWEIMCommerceCouponBuilderProtocol> viewBuilder;
@property (retain, nonatomic) AWEIMCommerceCouponViewModel *viewModel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (weak, nonatomic) id<AWEIMCommerceCouponContainerViewProtocol> delegate;
@property (readonly, weak, nonatomic) AWEIMFansGroupCouponModel *couponModel;

- (void)configData;
- (void)updateWithCouponModel:(id)a0 updateBuilder:(id)a1;
- (id)initWithViewBuilder:(id)a0;
- (void)asyncUpdateCouponStatusWithCompletion:(id /* block */)a0;
- (void)trackCommerceCoupon;
- (void)enterprsieTrack;
- (void)updateCouponBackgroundColor:(id)a0;
- (void)addKVO;
- (void)tapContainerView;
- (void)updateBuilder:(id)a0 rebuild:(BOOL)a1;
- (void)setUpViewModelWithCouponModel:(id)a0;
- (void)buildCouponsViews:(BOOL)a0;
- (void)updateProcessButton;
- (void)updateBottomTitle;
- (void)updatePriceIconLabel;
- (void)updateDiscountLabel;
- (void)localHandle;
- (void)didClickProcessBtn:(id)a0;
- (void)refreshCommerceCoupon:(long long)a0 status:(unsigned long long)a1 expireTime:(id)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })containerSize;
- (void)setupUI;
- (void)setDefaultImage;

@end
