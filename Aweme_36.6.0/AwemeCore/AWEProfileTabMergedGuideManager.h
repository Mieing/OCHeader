@class NSMutableDictionary;

@interface AWEProfileTabMergedGuideManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *popoverStatusMap;
@property (retain, nonatomic) NSMutableDictionary *enteredStatusMap;
@property (retain, nonatomic) NSMutableDictionary *enteredStatusTempMap;
@property (retain, nonatomic) NSMutableDictionary *goLookTimeRecordMap;

+ (id)sharedInstance;

- (void)recordEnteredByNewEntrance:(long long)a0 user:(id)a1;
- (void)recordGuidePopoverWithTabType:(long long)a0 user:(id)a1 source:(long long)a2 state:(BOOL)a3;
- (BOOL)canShowGuidePopoverWithTabType:(long long)a0 user:(id)a1 source:(long long)a2;
- (BOOL)canShowGuidePopoverForRecycledWorksWithUser:(id)a0 source:(long long)a1;
- (void)recordGuidePopoverForRecycledWorksWithUser:(id)a0 source:(long long)a1 state:(BOOL)a2;
- (void)recordEnteredWhenBack:(long long)a0 user:(id)a1;
- (BOOL)enableTabGuide:(long long)a0 user:(id)a1;
- (long long)durationOfClickedGoLook:(long long)a0 user:(id)a1;
- (id)tabStructModelWithType:(long long)a0 user:(id)a1;
- (BOOL)hasEnteredByNewEntrance:(long long)a0 user:(id)a1;
- (id)popoverStorageKey:(long long)a0 userID:(id)a1 source:(long long)a2;
- (id)entranceStorageKey:(long long)a0 userID:(id)a1;
- (void)serverRecordForNewEntrance:(long long)a0 user:(id)a1 recordValue:(id)a2;
- (id)popoverStorageKeyForRecycledWorksWithUserID:(id)a0 source:(long long)a1;
- (BOOL)shouldShowTab:(long long)a0 user:(id)a1;
- (void)recordClickedGoLook:(long long)a0 user:(id)a1;
- (void).cxx_destruct;
- (id)user;

@end
