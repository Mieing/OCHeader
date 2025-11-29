@class AWEIMFansGroupCouponModel, NSString;
@protocol AWEIMCommerceCouponBuilderProtocol;

@interface AWEIMFansGroupCouponContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) id<AWEIMCommerceCouponBuilderProtocol> builder;
@property (retain, nonatomic) AWEIMFansGroupCouponModel *couponModel;
@property (nonatomic) BOOL shouldRefresh;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_createPresenter;
- (void)p_createBuilderAndModel;
- (void)p_refreshExtWithCouponModel:(id)a0;
- (void)p_processCurrentCommerceCoupon:(id)a0;
- (void)p_enterpriseTrack;
- (void).cxx_destruct;
- (id)displayMessage;
- (id)message;

@end
