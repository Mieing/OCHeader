@class NSDictionary, NSString;

@interface AWEPlayInteractionIAAPreloadController : AWEPlayInteractionBaseController

@property (copy, nonatomic) NSDictionary *eventSubscribers;
@property (copy, nonatomic) NSString *lastClientSessionID;

- (id)getBusinessExtraDataWithModel:(id)a0;
- (void)pitayaPredictForIAAWithTaskName:(id)a0 awemeModel:(id)a1 enterFrom:(id)a2 paidEntrance:(id)a3;
- (void)sendNoChargingForIAAPreloadWithAwemeModel:(id)a0 enterFrom:(id)a1 paidEntrance:(id)a2;
- (BOOL)enableInnerIAAPitayaPredictWithPaidEntrance:(id)a0 enterFrom:(id)a1;
- (void)preloadIAAADWithAwemeModel:(id)a0 enterFrom:(id)a1 paidEntrance:(id)a2;
- (void)addBDXBridgeEventSubscribersIfNeeded;
- (void)removeBDXBridgeEventSubscribers;
- (void)iaaPreloadForIAPIfNeededWithEnterFrom:(id)a0 paidEntrance:(id)a1 countdownRemainingTime:(long long)a2;
- (BOOL)enableForEnterFrom:(id)a0 paidEntrance:(id)a1 countdownRemainingTime:(long long)a2;
- (id)playletIAAPreloadNoSendConfig;
- (id)playletIAPIAAPreloadConfig;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;

@end
