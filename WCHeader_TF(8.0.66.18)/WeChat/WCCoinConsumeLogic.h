@class WCCoinConsumeParameter, NSString, WCCoinConsumePanel, PrepareWecoinConsumeResponse, WCCoinInterceptLogic;
@protocol WCCoinConsumeLogicDelegate;

@interface WCCoinConsumeLogic : MMObject <WCCoinPrepareConsumeCgiDelegate, WCCoinConsumeCGIDelegate, WCCoinConsumePanelDelegate, WCCoinBuyCoinLogicDelegate, WCCoinConsumeTipsViewDelegate>

@property (retain, nonatomic) WCCoinInterceptLogic *interceptLogic;
@property (retain, nonatomic) WCCoinConsumeParameter *parameter;
@property (retain, nonatomic) PrepareWecoinConsumeResponse *prepareConsumeResponse;
@property (retain, nonatomic) WCCoinConsumePanel *consumePanel;
@property (weak, nonatomic) id<WCCoinConsumeLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startWith:(id)a0;
- (void)showConsumePanel;
- (void)showConsumePanel:(long long)a0;
- (void)directConsume;
- (void)startBuyCoin:(id)a0 startByConsume:(BOOL)a1;
- (void)handleBuff:(id)a0;
- (void)handlePrepareResp:(id)a0;
- (void)callPrepareCgi;
- (void)callConsumeCgi:(id)a0;
- (void)callSuccess:(id)a0;
- (void)callFail:(id)a0;
- (void)callCancel;
- (void)startConsumeLoading:(BOOL)a0;
- (void)endConsumeLoading;
- (id)getTopVC;
- (void)handleIntercept:(id)a0;
- (id)errorWithCgiErrorCode:(int)a0;
- (id)prepareErrorWith:(id)a0;
- (void)prepareConsumeCgi:(id)a0 didGetResponse:(id)a1;
- (void)prepareConsumeCgi:(id)a0 didFailWithError:(id)a1;
- (void)consumeCgi:(id)a0 didGetResponse:(id)a1;
- (void)consumeCgi:(id)a0 didFailWithError:(id)a1;
- (void)panelDidClickConsume:(id)a0;
- (void)panelDidClickBalanceButton:(id)a0;
- (void)panelDidClose:(id)a0 isManualTrigger:(BOOL)a1;
- (void)panelDidClickConsumeTips:(id)a0;
- (void)didClose:(id)a0;
- (void)buyCoinSuccess:(id)a0;
- (void)buyCoinFail:(id)a0;
- (void)buyCoinCancel:(id)a0;
- (void).cxx_destruct;

@end
