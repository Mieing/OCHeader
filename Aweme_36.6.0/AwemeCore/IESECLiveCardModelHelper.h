@class IESECLiveApi, IESECLiveContext, IESECLiveCardDataModel, NSString, IESECLiveRandomDelayTimer;
@protocol IESECLiveCardModelUpdateDelegate, IESECLiveCardModelActionDelegate;

@interface IESECLiveCardModelHelper : NSObject <IESECLiveEventPlugin, IESECLiveMessageSubscriber>

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECLiveApi *api;
@property (nonatomic) BOOL existHalfScreen;
@property (retain, nonatomic) IESECLiveRandomDelayTimer *peakReduce;
@property (weak, nonatomic) id<IESECLiveCardModelUpdateDelegate> cardView;
@property (weak, nonatomic) id<IESECLiveCardModelActionDelegate> actionDelegate;
@property (retain, nonatomic) IESECLiveCardDataModel *readyCardData;
@property (nonatomic) long long enterFromSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveContext:(id)a0;
- (void)messageReceived_IESECLiveCommonMessage:(id)a0;
- (void)messageReceived_IESECLiveMarketingMessage:(id)a0;
- (id)registerMessageClasses;
- (void)fetchCardModel:(id)a0 compeltion:(id /* block */)a1 metricsBlock:(id /* block */)a2;
- (BOOL)p_delegateEnableUpdate;
- (void)p_delegateUpdateCardModel:(id)a0;
- (id)cardDataModelToBeUpdated;
- (void)p_updateCardModel:(id)a0 refreshMessage:(id)a1;
- (void)didUpdateCardModel:(id)a0 extraInfo:(id)a1;
- (BOOL)cardViewOnShow;
- (BOOL)isAutoShowCard;
- (void)didUpdateCardModelWithApiPath:(id)a0 extraParams:(id)a1 actionType:(long long)a2;
- (BOOL)p_unableShowMsgCardConsiderHalfScreen;
- (void)p_updateRelatedCardByRequestWithExtraParams:(id)a0;
- (void)fetchCardModel:(id)a0 compeltion:(id /* block */)a1;
- (void)fetchRelatedCardModel:(id)a0 completion:(id /* block */)a1;
- (void)receive:(id)a0;
- (id)consumedEventsSet;
- (void)messageReceived_IESECProductRefreshMessage:(id)a0;
- (BOOL)disptachInBackgroundThread;
- (void)delegatePopCardWithModel:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
