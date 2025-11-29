@class AWEUserWorkReachFrequencyControlObj, NSMutableSet, NSMutableArray;

@interface AWEUserWorkReachFrequencyControlManager : NSObject

@property (retain, nonatomic) AWEUserWorkReachFrequencyControlObj *barFrequencyControlObj;
@property (retain, nonatomic) NSMutableSet *barFrequencyKeySet;
@property (nonatomic) long long effectiveTime;
@property (retain, nonatomic) NSMutableArray *exposeDebugArray;
@property (retain, nonatomic) NSMutableSet *cellAwemeIdSet;
@property (retain, nonatomic) AWEUserWorkReachFrequencyControlObj *cellFrequencyControlObj;

+ (Class)aAWEUserProfileDebugAdapterClass;
+ (id)sharedInstance;

- (void)didDisplayToolBarReachWithModel:(id)a0 userID:(id)a1;
- (void)didSelectedToolBarReachWithModel:(id)a0 userID:(id)a1;
- (id)checkShouldShowReachToolBarWithModel:(id)a0;
- (void)toolBarReachContentReadyWithModel:(id)a0 userID:(id)a1;
- (void)unReachCellWithModel:(id)a0 hiddenBlock:(id /* block */)a1;
- (void)reachCellWithModel:(id)a0 hiddenBlock:(id /* block */)a1;
- (id)checkShouldShowReachCellWithModel:(id)a0;
- (void)didSelectedCellReachWithModel:(id)a0 userID:(id)a1;
- (void)didDisplayCellReachWithModel:(id)a0 userID:(id)a1;
- (id)aAWEUserProfileDebugAdapter;
- (void)cacheDebugWith:(id)a0 itemID:(id)a1;
- (id)reachDebugLogs;
- (id)frequencyKeyWithModel:(id)a0 itemID:(id)a1;
- (void)profileRecordLeftCornerWithKey:(id)a0 itemID:(id)a1 params:(id)a2 hiddenReach:(BOOL)a3 postReachModel:(id)a4;
- (void)hiddenCellReachWithItemID:(id)a0 key:(id)a1;
- (void)profileRecordWithModel:(id)a0 extraParams:(id)a1 completionBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
