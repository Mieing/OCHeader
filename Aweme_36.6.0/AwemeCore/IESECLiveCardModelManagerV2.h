@class IESECLivePopMessage, IESECLiveContext, IESECPopProductInfo, NSString, IESECLiveRandomDelayTimer;
@protocol IESECLiveCardModelManagerDelegate;

@interface IESECLiveCardModelManagerV2 : NSObject <IESECLiveMessageSubscriber>

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (nonatomic) long long enterFromSource;
@property (retain, nonatomic) IESECLiveRandomDelayTimer *peakReduce;
@property (nonatomic) BOOL enterPopFetched;
@property (nonatomic) double lastMsgReceiveTime;
@property (retain, nonatomic) IESECLivePopMessage *lastMsg;
@property (retain, nonatomic) IESECPopProductInfo *popProductInfo;
@property (weak, nonatomic) id<IESECLiveCardModelManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)messageReceived_IESECLivePopMessage:(id)a0;
- (BOOL)isShopCartFlagExist;
- (id)registerMessageClasses;
- (void)preloadImageWithCardModel:(id)a0;
- (id)getCardViewModelWithCardDataModel:(id)a0 onEnter:(BOOL)a1 requestTrackParams:(id)a2 beginPopTime:(double)a3 scene:(long long)a4;
- (void)fetchCardWithRequestInfo:(id)a0 scene:(long long)a1 completion:(id /* block */)a2;
- (id)getPopCardRequestWithRequestInfo:(id)a0;
- (void)retryFetchCardWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)trackCardErrorWithCardDataModel:(id)a0 perfMetrics:(id)a1;
- (id)getRedirectPathWithPath:(id)a0;
- (id)relatedInfoForRelatedCardRequest;
- (void)setAddressInfoWithViewModel:(id)a0;
- (id)cardMsgReceiveTrackMsgType:(int)a0;
- (id)cardRequestPathWithEnterRoom:(BOOL)a0;
- (id)getMessageProductInfo;
- (void)readyShowWithCardViewModel:(id)a0;
- (void)popDisappearWithPromotionID:(id)a0;
- (BOOL)isValidCardViewModel:(id)a0;
- (id)initWithLiveContext:(id)a0 source:(long long)a1;
- (void)preloadCardWithCompletion:(id /* block */)a0;
- (void)fetchCardWithRequestInfo:(id)a0 completion:(id /* block */)a1;
- (id)tracker;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)api;
- (id)roomContext;

@end
