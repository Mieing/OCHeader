@class AWEIMCommerceCouponContainerView, AWEIMFansGroupCouponModel, NSString;
@protocol AWEIMCommerceCouponBuilderProtocol;

@interface AWEIMFansGroupCouponMessageTableViewCell : AWEIMUserMessageTableViewCell <AWEIMCommerceCouponContainerViewProtocol, AWEIMFansGroupCouponMessageTableViewCellProtocol>

@property (retain, nonatomic) AWEIMCommerceCouponContainerView *couponView;
@property (retain, nonatomic) AWEIMFansGroupCouponModel *couponModel;
@property (retain, nonatomic) id<AWEIMCommerceCouponBuilderProtocol> builder;
@property (retain, nonatomic) id<AWEIMCommerceCouponBuilderProtocol> sendBuilder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (Class)builderClassForMessage:(id)a0;
+ (id)identifier;

- (void)chatBackgroundDidChangeNty:(id)a0;
- (void)processCurrentCommerceCoupon:(id)a0;
- (void)refreshExtWithCouponModel:(id)a0;
- (void)enterprsieTrack;
- (void)refreshCouponStatus;
- (void)trackDisplay;
- (void)configWithMessage:(id)a0;
- (id)menuTargetView;
- (void)refreshCouponViewBgColor;
- (void).cxx_destruct;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;

@end
