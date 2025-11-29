@class NSString, HKHealthStore;
@protocol WCHKActivitySummaryLogicDelegate;

@interface WCHKActivitySummaryLogic : NSObject

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (nonatomic) BOOL bHadObserverActivitySummary;
@property (retain, nonatomic) NSString *lastQueryResult;
@property (weak, nonatomic) id<WCHKActivitySummaryLogicDelegate> delegate;

- (id)init;
- (BOOL)p_canTryUploadActivitySummary;
- (void)updateHealthStoreData;
- (void)tryDoObserverActivitySummary;
- (void)queryActivitySummary;
- (void)onQueryCompeletedWithSummary:(id)a0;
- (void).cxx_destruct;

@end
