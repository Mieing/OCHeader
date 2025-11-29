@class IESECLiveCardGenerator, IESECLiveCardModelHelper, IESECLiveContext, IESECLiveRandomDelayTimer, NSString, IESECLiveCardContainerService;
@protocol IESECLiveCardViewDelegate, IESECLiveCardContainerDelegate;

@interface IESECLiveCardModule : NSObject <IESECLiveCardModuleInterface, IESECLiveCardModelActionDelegate, IESECLiveCardModuleDelegate>

@property (retain, nonatomic) IESECLiveCardContainerService *cardContainer;
@property (retain, nonatomic) IESECLiveCardModelHelper *cardModelHelper;
@property (retain, nonatomic) IESECLiveCardGenerator *cardGenerator;
@property (nonatomic) long long enterFromSource;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECLiveRandomDelayTimer *peakReduce;
@property (weak, nonatomic) id<IESECLiveCardContainerDelegate> containerDelegate;
@property (weak, nonatomic) id<IESECLiveCardViewDelegate> cardViewDelegate;
@property (nonatomic) BOOL enterPopRequestReturned;
@property (nonatomic) BOOL enterRelatedRequestReturned;
@property (copy, nonatomic) id /* block */ enterPopRequestCompletion;
@property (copy, nonatomic) id /* block */ enterRelatedRequestCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleWithLiveRoomCoreParams:(id)a0 cardViewDelegate:(id)a1 containerDelegate:(id)a2 source:(long long)a3;

- (void)cardModelHelperRebindCard:(id)a0;
- (void)closeCardWithID:(id)a0 withReason:(long long)a1;
- (void)closeCurrentCardWithReason:(long long)a0;
- (void)refreshAtmosphereWithModel:(id)a0;
- (void)showPopCardWithModel:(id)a0;
- (void)trackCardErrorWithCardDataModel:(id)a0 perfMetrics:(id)a1;
- (id)getRedirectPathWithPath:(id)a0;
- (id)initWithLiveContext:(id)a0 source:(long long)a1;
- (void)p_showCardWithData:(id)a0 extraInfo:(id)a1 onEnter:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)p_checkPopCardShowAutomatic;
- (void)showCardWithData:(id)a0 extraInfo:(id)a1 onEnter:(BOOL)a2 scene:(long long)a3 cardPopTimes:(long long)a4 completion:(id /* block */)a5;
- (void)fetchCardOnEnter:(BOOL)a0 isRetryRequest:(BOOL)a1 baseURL:(id)a2 requestPath:(id)a3 showWithCompletion:(id /* block */)a4;
- (id)getPopCardRequestWithEnterRoom:(BOOL)a0 baseURL:(id)a1 requestInfo:(id)a2 isRetryRequest:(BOOL)a3;
- (void)retryFetchCardWithRequest:(id)a0 showWithCompletion:(id /* block */)a1;
- (BOOL)p_needRequestRelatedCard;
- (void)checkRequestStatusAndShowCardIfNeeded;
- (id)getRelatedCardRequestWithRelatedInfo:(id)a0;
- (void)p_setupCardView:(id)a0;
- (void)fetchCardOnEnter:(BOOL)a0 baseURL:(id)a1 requestPath:(id)a2 showWithCompletion:(id /* block */)a3;
- (void)cleanReadyCardDataWithShouldShow:(BOOL)a0;
- (void)showCardWithGoodsParams:(id)a0 completion:(id /* block */)a1;
- (void)showLynxCardWithParams:(id)a0 completion:(id /* block */)a1;
- (void)showCardWithCardModel:(id)a0 extraInfo:(id)a1 onEnter:(BOOL)a2 scene:(long long)a3 cardPopTimes:(long long)a4 completion:(id /* block */)a5;
- (void)fetchCardBaseURL:(id)a0 requestInfo:(id)a1 scene:(long long)a2 cardPopTimes:(long long)a3 showWithCompletion:(id /* block */)a4;
- (void)enterRoomFetchCardWithBaseURL:(id)a0 requestPath:(id)a1 showWithCompletion:(id /* block */)a2;
- (void)enterRoomFetchRelatedCardWithRelatedInfo:(id)a0 showWithCompletion:(id /* block */)a1;
- (void)fetchPublicScreenGoodsCardWithBizParams:(id)a0 completion:(id /* block */)a1;
- (id)getCardDataCachePromotionID;
- (id)getCardDataCache;
- (void)cleanReadyCardData;
- (void)tmpEnterRoomFetchCardWithBaseURL:(id)a0 requestPath:(id)a1 showWithCompletion:(id /* block */)a2;
- (void)tmpEnterRoomFetchRelatedCardWithRelatedInfo:(id)a0 showWithCompletion:(id /* block */)a1;
- (id)tracker;
- (void).cxx_destruct;

@end
