@class NSMutableDictionary;

@interface BDATMShowEventManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *exposingDatas;

+ (BOOL)isTargetViewForExposure:(id)a0;
+ (void)sendShowTrackerForView:(id)a0;
+ (void)adjustStateForView:(id)a0 forType:(unsigned long long)a1;
+ (BOOL)isViewVisible:(id)a0;
+ (id)shareInstance;

- (id)exposingItemForControlName:(id)a0;
- (void)addExposingItem:(id)a0;
- (void)removeExposingItemByControlName:(id)a0;
- (void)clearExposingItem;
- (void).cxx_destruct;
- (id)init;

@end
