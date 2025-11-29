@class NSString, NSMutableDictionary;

@interface IESLiveMessageInteractionDisplayModel : NSObject

@property (nonatomic) long long PV;
@property (nonatomic) double levelTotal;
@property (nonatomic) double arriveDelayTimeTotal;
@property (nonatomic) double showDelayTimeTotal;
@property (nonatomic) long long PVMale;
@property (nonatomic) long long PVFemale;
@property (nonatomic) long long commentTopicPV;
@property (nonatomic) double commentPVPotential;
@property (nonatomic) double commentLengthTotal;
@property (nonatomic) double commentScoreTotal;
@property (nonatomic) long long enterPVFollow;
@property (nonatomic) long long enterPVCity;
@property (nonatomic) long long anchorOptRollCount;
@property (nonatomic) long long bothPriorityEffectCount;
@property (nonatomic) long long highPriorityEffectCount;
@property (nonatomic) long long lowPriorityEffectCount;
@property (nonatomic) long long floatMsgCount;
@property (retain, nonatomic) NSString *roomHotLevel;
@property (nonatomic) long long highPriorityActionNumber;
@property (nonatomic) long long mediumPriorityActionNumber;
@property (nonatomic) long long lowPriorityActionNumber;
@property (nonatomic) long long baseActionNumber;
@property (nonatomic) long long commentActionNumber;
@property (nonatomic) long long sendGiftActionNumber;
@property (nonatomic) long long orderActionNumber;
@property (nonatomic) long long otherActionNumber;
@property (nonatomic) double giftRewardNumTotal;
@property (nonatomic) double giftRewardMoneyTotal;
@property (retain, nonatomic) NSMutableDictionary *commonTagPVData;

- (id)commonTrackData;
- (id)levelAvg;
- (id)arriveDelayTimeAvg;
- (id)showDelayTimeAvg;
- (id)commentLengthAvg;
- (id)commentScoreAvg;
- (id)giftRewardNumAvg;
- (id)giftRewardMoneyAvg;
- (id)commentTrackData;
- (id)enterTrackData;
- (id)followTrackData;
- (id)likeTrackData;
- (id)shareTrackData;
- (id)giftTrackData;
- (id)ecomTrackData;
- (id)highEnterTrackData;
- (id)individualStrategyData;
- (id)envalueInfoStrategyData;
- (void).cxx_destruct;
- (id)init;
- (void)resetData;

@end
