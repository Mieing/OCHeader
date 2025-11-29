@class NSString;
@protocol IESLiveWalletManagerService;

@interface IESLiveRedeemAPIImpl : NSObject <IESLiveRedeemAPI>

@property (retain, nonatomic) id<IESLiveWalletManagerService> walletService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)redeemWithDiamond:(id)a0 currency:(long long)a1 source:(long long)a2 userID:(id)a3 trialDict:(id)a4 exchangeType:(long long)a5 completion:(id /* block */)a6;
- (void)requestRedeemModelsWithParams:(id)a0 tintTags:(id)a1 completion:(id /* block */)a2;
- (void)requestTrialExchangeDiamond:(id)a0 source:(id)a1 exchangeType:(long long)a2 completion:(id /* block */)a3;
- (void)requestRedeemInfoWithParams:(id)a0 completion:(id /* block */)a1;
- (void)requestXGWalletInfoWithOpenID:(id)a0 completion:(id /* block */)a1;
- (id)transformModelFromFlameModel:(id)a0;
- (void).cxx_destruct;

@end
