@class AWETheaterPageContext, NSMutableSet;

@interface AWETheaterTracker : NSObject

@property (retain, nonatomic) AWETheaterPageContext *context;
@property (retain, nonatomic) NSMutableSet *uploadedSet;

+ (void)trackTheaterLynxCardLoadWithDuration:(double)a0 path:(id)a1 renderType:(long long)a2;
+ (void)trackTheaterLynxCardLoadFinishWithPath:(id)a0 result:(BOOL)a1;
+ (id)refreshMethodWithFetchType:(unsigned long long)a0;
+ (id)refreshMethodWithLoadMoreType:(unsigned long long)a0;
+ (void)trackTheaterEntranceGuideButtonClick:(id)a0 buttonName:(id)a1 section:(id)a2 logPassBack:(id)a3 buttonType:(id)a4;
+ (void)trackTheaterEntranceGuideClickAction:(id)a0 actionType:(id)a1;
+ (void)trackCommonSectionImageFailEvent:(id)a0 moduleName:(id)a1;
+ (void)trackTheaterTranslateCardWithDuration:(double)a0 paths:(id)a1 requestType:(id)a2;
+ (void)trackLongVideoHighlightPlay:(id)a0 enterFrom:(id)a1 moduleName:(id)a2;
+ (void)trackMoreFeedSectionImageFailEvent:(id)a0;
+ (void)trackOutAppNotifyGuideWithEventType:(id)a0 enterFrom:(id)a1;
+ (id)commonSectionSpuType:(id)a0;
+ (id)commonSectionSpuID:(id)a0;
+ (long long)commonSectionPaymentStatus:(id)a0;
+ (long long)moreFeedSectionPaymentStatus:(id)a0;
+ (void)trackTheaterEntranceGuideButtonClick:(id)a0 buttonName:(id)a1 section:(id)a2 logPassBack:(id)a3 buttonType:(id)a4 previousPage:(id)a5;
+ (id)liveSpuID:(id)a0;
+ (void)trackTheaterAddGuideResultWithParams:(id)a0;

- (id)commonParams;
- (void)trackEnterLVideoPage:(id)a0 redDot:(id)a1;
- (void)trackEventWithName:(id)a0 params:(id)a1;
- (void)trackStayTimeWithEnterFrom:(id)a0 duration:(double)a1;
- (void)trackEnterTheaterMonitor:(long long)a0 error:(id)a1 errorType:(long long)a2 trackerParams:(id)a3;
- (void)trackTheaterMoreFeedMonitor:(long long)a0 fetchType:(unsigned long long)a1 error:(id)a2 errorType:(long long)a3 trackerParams:(id)a4;
- (void)trackLVideoClickWithLogExtraDict:(id)a0;
- (void)trackBaseLVideoShowWithLogExtraDict:(id)a0 withTrackName:(id)a1;
- (BOOL)needTrackLVideoShow:(id)a0;
- (void)updateUploadedSet:(id)a0;
- (void)trackVideoPlayFinishWithLogExtraDict:(id)a0;
- (void)trackFinishPaymentTrialEndWithModel:(id)a0;
- (void)trackLVideoShowWithLogExtraDict:(id)a0;
- (void)trackFeedSharePannelWithScheme:(id)a0;
- (id)commonSectionParamsWithSectionItem:(id)a0 moduleName:(id)a1 rank:(long long)a2;
- (id)moreFeedSectionParamsWithSectionItem:(id)a0 rank:(long long)a1;
- (void)trackTheaterMoreFeedDisplayedWithModel:(id)a0;
- (id)roomStatus:(id)a0;
- (void)trackBaseBannerPlayWithLogExtraDict:(id)a0 withTrackName:(id)a1;
- (void)trackVajraShowWithLogExtraDict:(id)a0 filterName:(id)a1;
- (void)trackLVideoEntranceGuideShow:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)reset;

@end
