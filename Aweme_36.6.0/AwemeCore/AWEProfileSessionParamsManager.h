@class NSMutableDictionary, AWEProfileContext, NSString, NSNumber;

@interface AWEProfileSessionParamsManager : NSObject <AWEProfileSessionParamsManagerProtocol>

@property (weak, nonatomic) AWEProfileContext *profileContext;
@property (nonatomic) double enterProfileTime;
@property (retain, nonatomic) NSNumber *latestDuration;
@property (nonatomic) long long allClickCoverCount;
@property (retain, nonatomic) NSMutableDictionary *tabClickCoverCount;
@property (retain, nonatomic) NSMutableDictionary *tabExposeAwemes;
@property (retain, nonatomic) NSMutableDictionary *tabHasScrolled;
@property (retain, nonatomic) NSMutableDictionary *tabAllShowTime;
@property (retain, nonatomic) NSMutableDictionary *tabShowTimeStamp;
@property (retain, nonatomic) NSMutableDictionary *profileInteractDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)latestDurationForPreloadPostUserID:(id)a0 now:(double)a1;
+ (id)tabDurationKey;
+ (id)coverNumKey;
+ (id)isSlideKey;

- (void)tabAppearWithTabType:(long long)a0;
- (void)tabDisappearWithTabType:(long long)a0;
- (void)tabHasScrollWithTabType:(long long)a0;
- (void)awemeClickWithTabType:(long long)a0;
- (long long)clickCoverCountWithTabType:(long long)a0;
- (void)awemeExposeWithAwemeID:(id)a0 tabType:(long long)a1;
- (void)profileInteractWithActionType:(id)a0;
- (id)applyExitParamsInjector;
- (BOOL)profileContentIsInteract;
- (void)resetAllParams;
- (id)isInteractString;
- (id)exitParamsKeyWithParamsType:(long long)a0 tabType:(long long)a1;
- (void)setupLatestDurationIfNeed;
- (void)clearExpiredEntriesInStorage:(id)a0 currentTime:(double)a1;
- (void).cxx_destruct;
- (id)init;

@end
