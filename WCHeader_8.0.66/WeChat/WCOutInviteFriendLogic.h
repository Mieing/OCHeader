@class NSString, GetWeChatOutCouponsResponse;
@protocol WCOutInviteFriendLogicDelegate;

@interface WCOutInviteFriendLogic : NSObject <WCOutCouponExt>

@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long getBalanceScene;
@property (weak, nonatomic) id<WCOutInviteFriendLogicDelegate> delegate;
@property (retain, nonatomic) GetWeChatOutCouponsResponse *couponResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 inviteScene:(unsigned long long)a1 getBalanceScene:(unsigned long long)a2;
- (void)requestCoupon;
- (void)didReceiveCouponResponse:(id)a0;
- (id)getRemainingTime;
- (id)getInvalidDateTips;
- (void).cxx_destruct;

@end
