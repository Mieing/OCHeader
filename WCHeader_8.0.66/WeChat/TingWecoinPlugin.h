@class MMListenMembershipJoinResponse, NSString, MMListenMembershipJoinInfo_WecoinSchemeInfo_PackageInfo, _TtC6WeChat26WCCoinSubscribeMemberLogic;

@interface TingWecoinPlugin : NSObject <WeChat.WCCoinSubscribePriceTierDelegate, MMFlutterPlugin, TingWecoinApi>

@property (retain, nonatomic) _TtC6WeChat26WCCoinSubscribeMemberLogic *wecoinLogic;
@property (retain, nonatomic) MMListenMembershipJoinInfo_WecoinSchemeInfo_PackageInfo *selectedPackage;
@property (retain, nonatomic) MMListenMembershipJoinResponse *joinResp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)onAttachedToViewController:(id)a0;
- (void)onDetachedToViewController;
- (void)showWecoinSubscribeViewRequest:(id)a0 completion:(id /* block */)a1;
- (void)showWecoinSubscribeView:(id)a0 sessionId:(id)a1 scene:(int)a2 completion:(id /* block */)a3;
- (void)joinWithPackage:(id)a0 subcriptionExtInfo:(id)a1 completionHandler:(id /* block */)a2;
- (void)getOrderBuffWithPriceTier:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
