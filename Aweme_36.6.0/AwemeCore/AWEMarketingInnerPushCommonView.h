@class NSString, AWEInnerNotificationRequest, AWEMarketingCouponInnerPushCommonView;
@protocol AWEInnerNotificationContent;

@interface AWEMarketingInnerPushCommonView : UIView <AWEMarketingCouponInnerPushCommonViewDelegate>

@property (weak, nonatomic) AWEInnerNotificationRequest *request;
@property (weak, nonatomic) id<AWEInnerNotificationContent> notificationContent;
@property (nonatomic) unsigned long long marketingStyle;
@property (retain, nonatomic) AWEMarketingCouponInnerPushCommonView *couponView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSubviews;
- (void)trackInnerPushForScene:(unsigned long long)a0;
- (void)updateViewWithRequest:(id)a0 notificationContent:(id)a1;
- (id)initWithMarketingStyle:(unsigned long long)a0;
- (void)addCouponSubviews;
- (void)addActivitySubviews;
- (void).cxx_destruct;
- (void)didTapActionButton;

@end
