@class NSString;
@protocol AWEPostPageContext;

@interface AWEPostPageCompanyCouponHandler : NSObject <AWEPostPageCompanyCouponService>

@property (readonly, nonatomic) BOOL hasLocalLifeAnchor;
@property (copy, nonatomic) NSString *companyCouponJsonData;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;

- (void)bindServices:(id)a0;
- (BOOL)enableGameAndCompanyCouponLogicOp;
- (BOOL)companyCouponElementVisible:(id)a0 anchor:(id)a1 anchorContext:(id)a2 isLocalLifeMatchMissionFromTask:(BOOL)a3;
- (BOOL)enableAnchorsCheckLogicOp;
- (void)trackRemindViewIfNeededWithEventState:(long long)a0 scene:(long long)a1;
- (void)trackPOITradeAnchorShowWithParams:(id)a0;
- (void).cxx_destruct;

@end
