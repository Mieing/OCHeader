@class NSString, NSMutableSet, NSMutableDictionary;

@interface AWENearbyPOIInfoManager : AWENearbyCardExposureManager <AWENearbyFeedCardSubManagerProtocol>

@property (nonatomic) long long currentItemCount;
@property (nonatomic) long long lastItemCount;
@property (nonatomic) long long nDaySkipCount;
@property (nonatomic) long long nDayDislikeCount;
@property (nonatomic) long long displayCount;
@property (nonatomic) long long lastCardInsertIndex;
@property (nonatomic) long long cardSessionCount;
@property (nonatomic) long long cardSessionDisplayCount;
@property (nonatomic) long long lastDisplayDayNumSince1970;
@property (retain, nonatomic) NSMutableSet *displayCardSet;
@property (retain, nonatomic) NSMutableSet *validBehaviorSet;
@property (nonatomic) BOOL hasLeaveNearby;
@property (nonatomic) double insertTime;
@property (retain, nonatomic) NSMutableDictionary *unexposedCardIndexDictionary;
@property (nonatomic) long long currentItemCountBeforeRefresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)storageKey;
- (long long)notInsertReason;
- (id)commonTrackParamsWithModel:(id)a0;
- (id)handleNearbyCardListWithPullType:(long long)a0 response:(id)a1;
- (void)recordCardDisappear:(id)a0 timeInterval:(double)a1;
- (id)rejectCardErrorCodeAndReasonWithResp:(id)a0;
- (id)createFeedNearbyCardViewController;
- (id)transformAwemeModelFromCardModel:(id)a0;
- (id)requestParamsObject;
- (void)handleLeaveNearbyWithCardUnexposedReason:(long long)a0 videoIndex:(long long)a1;
- (void)recordCardUnexposedWithCardID:(id)a0 cardIndex:(long long)a1 videoIndex:(long long)a2 reason:(long long)a3;
- (void)track:(id)a0 params:(id)a1 byAddingCommonTrackParamsWithModel:(id)a2;
- (void)recordValidUserActionForCard:(id)a0 withType:(unsigned long long)a1;
- (void)recordCardShow:(id)a0;
- (void)recordDislike:(id)a0;
- (void)prefecthHeadImgWithModel:(id)a0 index:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
