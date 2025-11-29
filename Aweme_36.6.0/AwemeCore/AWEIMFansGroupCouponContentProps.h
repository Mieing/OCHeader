@class AWEIMFansGroupCouponModel, UIColor;
@protocol AWEIMCommerceCouponBuilderProtocol;

@interface AWEIMFansGroupCouponContentProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) AWEIMFansGroupCouponModel *couponModel;
@property (retain, nonatomic) id<AWEIMCommerceCouponBuilderProtocol> couponBuilder;
@property (copy, nonatomic) UIColor *titleLabelColor;
@property (copy, nonatomic) UIColor *subTitleLabelColor;
@property (copy, nonatomic) UIColor *bottomTitleLabelColor;
@property (copy, nonatomic) UIColor *couponBackgroundColor;
@property (copy, nonatomic) id /* block */ refreshExtWithCouponModelHandler;
@property (copy, nonatomic) id /* block */ processCurrentCommerceCouponHandler;
@property (copy, nonatomic) id /* block */ enterpriseTrackHandler;

- (void).cxx_destruct;

@end
