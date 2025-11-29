@class IESECLiveCardDataModel, IESECLiveRoomContext, IESECLiveCardModule, NSString, IESECLiveCardTaskStrategy, IESECGCDTimer, IESECQualityInfoV2;

@interface IESECLiveCardTask : NSObject

@property (nonatomic) long long cardTaskStatus;
@property (retain, nonatomic) IESECLiveRoomContext *roomContext;
@property (retain, nonatomic) IESECLiveCardModule *cardModule;
@property (copy, nonatomic) IESECLiveCardDataModel *preloadCardData;
@property (retain, nonatomic) NSString *promotionID;
@property (retain, nonatomic) NSString *tryClosePromotionID;
@property (retain, nonatomic) IESECLiveCardTaskStrategy *cardStrategy;
@property (retain, nonatomic) IESECGCDTimer *scheduleTimer;
@property (retain, nonatomic) IESECGCDTimer *delayScheduleTimer;
@property (retain, nonatomic) IESECGCDTimer *tryCloseTimer;
@property (retain, nonatomic) IESECQualityInfoV2 *qualityInfo;
@property (nonatomic) long long curPopCardTimes;
@property (nonatomic) long long cardShowTime;
@property (nonatomic) BOOL hasQualityTracked;

- (id)currentCardView;
- (BOOL)isAutoShowCard;
- (id)initWithRoomContext:(id)a0 cardModule:(id)a1 strategy:(id)a2 cardData:(id)a3;
- (void)setParamsWithRoomContext:(id)a0 cardModule:(id)a1 strategy:(id)a2 taskStatus:(long long)a3;
- (void)cancelScheduleTimerIfNeeded;
- (void)cancelTryCloseTimerIfNeeded;
- (void)startShowWithOnEnter:(BOOL)a0 scene:(long long)a1;
- (void)startShowWithOnEnter:(BOOL)a0 extraInfo:(id)a1 scene:(long long)a2 requestInfo:(id)a3;
- (void)updateCardTaskStatus:(long long)a0 extraInfo:(id)a1 onEnter:(BOOL)a2 scene:(long long)a3 requestInfo:(id)a4;
- (void)trackEnterRoomCardDuration:(id)a0 scene:(long long)a1 cardViewType:(long long)a2;
- (id)cardShowTrackFromScene:(long long)a0;
- (id)p_qualityEventName:(long long)a0;
- (void)qualityInfoInit:(id)a0;
- (void)showByCardStrategyWithOnEnter:(BOOL)a0 extraInfo:(id)a1 scene:(long long)a2 requestInfo:(id)a3;
- (void)tryDelayCloseCardWithPromotionID:(id)a0;
- (void)cancelAllTimerIfNeeded;
- (void)doActionWithScheduleInfo:(id)a0 extraInfo:(id)a1 onEnter:(BOOL)a2 scene:(long long)a3 requestInfo:(id)a4;
- (id)createAutoShowCardScheduleWithStrategyIDL:(id)a0;
- (void)enterRoomTrackCardWithParams:(id)a0 promotionID:(id)a1 showScene:(long long)a2;
- (void)normalStatusTrackCardWithPromotionID:(id)a0 showScene:(long long)a1;
- (void)showCardWithOnEnter:(BOOL)a0 extraInfo:(id)a1 scene:(long long)a2 requestInfo:(id)a3;
- (id)initWithRoomContext:(id)a0 cardModule:(id)a1 strategy:(id)a2;
- (void)startShowWithOnEnter:(BOOL)a0;
- (void)stopCardTaskWithPromotionID:(id)a0;
- (BOOL)checkCardDataEffectiveWithCardModel:(id)a0;
- (BOOL)blockAutomaticPopCard;
- (id)tracker;
- (void).cxx_destruct;
- (void)dealloc;

@end
