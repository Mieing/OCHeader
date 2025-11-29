@class NSString, NSMutableSet, NSMutableDictionary;

@interface AWENearbyMultiPOICardManager : AWENearbyCardExposureManager <AWENearbyFeedCardSubManagerProtocol>

@property (nonatomic) long long displayCount;
@property (nonatomic) long long dislikeCount;
@property (nonatomic) long long skipCount;
@property (nonatomic) long long currentItemCount;
@property (nonatomic) long long lastItemCount;
@property (nonatomic) long long lastCardInsertIndex;
@property (nonatomic) long long cardSessionCount;
@property (nonatomic) long long cardSessionDisplayCount;
@property (retain, nonatomic) NSMutableSet *operateCardSet;
@property (retain, nonatomic) NSMutableSet *displayCardSet;
@property (nonatomic) long long lastDisplayDayNumSince1970;
@property (retain, nonatomic) NSMutableSet *responsedCardSet;
@property (retain, nonatomic) NSMutableDictionary *responseCountDict;
@property (nonatomic) BOOL hasLeaveNearby;
@property (nonatomic) double insertTime;
@property (retain, nonatomic) NSMutableDictionary *unexposedCardIndexDictionary;
@property (nonatomic) long long currentItemCountBeforeRefresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadCDNResourceData:(id)a0;
+ (void)trackNearbyGeckoResourceMonitorWithResult:(long long)a0 loadType:(long long)a1 channel:(id)a2 filePath:(id)a3 errorMsg:(id)a4 cdnLoadTime:(long long)a5;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)storageKey;
- (long long)notInsertReason;
- (id)handleNearbyCardListWithPullType:(long long)a0 response:(id)a1;
- (void)recordDislike:(id)a0 reason:(id)a1;
- (void)recordCardClickPOI:(id)a0 index:(unsigned long long)a1 isCover:(BOOL)a2;
- (void)recordCardShow:(id)a0 itemCount:(long long)a1;
- (void)recordCardDisappear:(id)a0 timeInterval:(double)a1;
- (id)rejectCardErrorCodeAndReasonWithResp:(id)a0;
- (id)createFeedNearbyCardViewController;
- (id)transformAwemeModelFromCardModel:(id)a0;
- (id)transformDCardModelFromCardModel:(id)a0 bindAweme:(id)a1 isNativeScene:(BOOL)a2;
- (id)requestParamsObject;
- (void)handleLeaveNearbyWithCardUnexposedReason:(long long)a0 videoIndex:(long long)a1;
- (void)track:(id)a0 params:(id)a1 byAddingCardTrackParamsWithModel:(id)a2;
- (void)preloadGeckoResource;
- (void)recordCardUnexposedWithCardID:(id)a0 cardIndex:(long long)a1 videoIndex:(long long)a2 reason:(long long)a3;
- (BOOL)isLynxCardType:(id)a0;
- (void)track:(id)a0 params:(id)a1 byAddingSinglePOITrackParamsWithModel:(id)a2;
- (id)__cardTrackParamsWithModel:(id)a0;
- (id)__singlePOITrackParamsWithModel:(id)a0;
- (id)lottieResourcePath;
- (id)whiteMaskPath;
- (id)backgroundImagePathWithIsNewStyle:(BOOL)a0 withHueIndex:(long long)a1;
- (id)vibeResourcePathWithIsNewStyle:(BOOL)a0 withHueIndex:(long long)a1;
- (id)cardCellWithIndex:(long long)a0;
- (void)recordCardClickMoreButton:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
