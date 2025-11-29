@class IESECLiveApi, IESECLiveContext, NSDictionary, NSString, IESECLiveRandomDelayTimer, IESECLiveCardDataModelV2;
@protocol IESECLiveCardModelUpdateDelegate;

@interface IESECLiveCardViewModelV2 : NSObject <IESECLiveMessageSubscriber>

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECLiveApi *api;
@property (retain, nonatomic) IESECLiveCardDataModelV2 *cardDataModel;
@property (retain, nonatomic) NSDictionary *curBidAuctionMessageDict;
@property (retain, nonatomic) IESECLiveRandomDelayTimer *peakReduce;
@property (weak, nonatomic) id<IESECLiveCardModelUpdateDelegate> cardViewModelDelegate;
@property (retain, nonatomic) NSDictionary *performanceEventParams;
@property (nonatomic) long long showScene;
@property (nonatomic) BOOL onEnter;
@property (nonatomic) long long enterFromSource;
@property (nonatomic) double showDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)promotionID;
- (id)goodsModel;
- (void)updateCardView;
- (void)messageReceived_IESECLiveMarketingMessage:(id)a0;
- (id)registerMessageClasses;
- (BOOL)cardViewOnShow;
- (void)messageReceived_IESECProductRefreshMessage:(id)a0;
- (id)getRedirectPathWithPath:(id)a0;
- (id)initWithLiveContext:(id)a0 cardDataModel:(id)a1;
- (id)getCardDataModel;
- (void)didUpdateCardModelWithApiPath:(id)a0 extraParams:(id)a1;
- (id)getBidAuctionJSONByMsg:(id)a0;
- (void)updateCardModel:(id)a0 refreshMessage:(id)a1;
- (id)getBidAuctionV2JSONByMsg:(id)a0;
- (id)getAuctionAtmosphereJSONByMsgData:(id)a0;
- (id)getAtmosphereJSONByMsg:(id)a0;
- (void).cxx_destruct;
- (void)updateWithData:(id)a0;
- (void)messageReceived:(id)a0;

@end
