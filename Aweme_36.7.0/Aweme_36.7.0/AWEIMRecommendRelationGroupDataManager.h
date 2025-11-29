@class NSCache, NSString;

@interface AWEIMRecommendRelationGroupDataManager : NSObject <AWEUserMessage>

@property (nonatomic) long long eachGroupMaxShowCount;
@property (nonatomic) long long oneDayMaxShowCount;
@property (nonatomic) long long totalShowCountToExit;
@property (nonatomic) long long exitDays;
@property (retain, nonatomic) NSCache *storageCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)setRecommendRelationGroupsDictWithModel:(id)a0;
- (id)recommendRelationGroupsDictDate;
- (id)recommendRelationGroupsDictStoreKey;
- (id)recommendRelationGroupsDict;
- (void)setRecommendRelationGroupsDict:(id)a0;
- (void)setRecommendRelationGroupsDictDate:(id)a0;
- (BOOL)canShowRecommendRelationGroupInFront;
- (id)currentRecordDate;
- (long long)oneDayShowCount;
- (BOOL)isInExit;
- (void)sendRecommendRelationGroupShowing:(id)a0 completion:(id /* block */)a1;
- (id)recommendRelationGroupsDictDateStoreKey;
- (id)recommendRelationGroupsOneDayShowCountStoreKey;
- (void)setOneDayShowCount:(id)a0;
- (void)setCurrentRecordDate:(id)a0;
- (id)recommendRelationGroupsTotalShowCountToExitStoreKey;
- (id)recommendRelationGroupsExitDateStoreKey;
- (id)recommendRelationGroupsCurrentRecordDateStoreKey;
- (void)didClickRecommendRelationGroup:(id)a0;
- (id)currentShouldShowRecommendRelationGroupModel;
- (void)refreshRecommendRelationGroupDictAfterShowing:(id)a0;
- (void)refreshOneDayShowCountAfterShowing;
- (void)refreshTotalShowCountAfterShowing;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)clearCache;
- (void)setExitDate:(id)a0;
- (void)dealloc;
- (id)exitDate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTotalShowCount:(id)a0;
- (long long)totalShowCount;

@end
