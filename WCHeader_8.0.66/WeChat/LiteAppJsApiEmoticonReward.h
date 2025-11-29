@class NSString, StoreEmotionRewardAskForRewardCgi, WCPayPayMoneyLogic;

@interface LiteAppJsApiEmoticonReward : LiteAppJsApi <StoreEmotionRewardAskForRewardCgiDelegate, MMUseCaseCallback, MMUIViewControllerDelegate, WCBaseControlMgrExt>

@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) StoreEmotionRewardAskForRewardCgi *rewardCgi;
@property (retain, nonatomic) WCPayPayMoneyLogic *payLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)onAskForRewardCgiOkWithPid:(id)a0 AndReqKey:(id)a1;
- (void)onAskForRewardCgiFailWithPid:(id)a0;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (void)call:(id)a0;
- (id)getViewController;
- (void)endWithOK;
- (void)endWithCancel;
- (void).cxx_destruct;

@end
