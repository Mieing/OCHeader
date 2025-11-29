@class NSMutableDictionary, HKHealthStore, NSMutableSet, NSString;
@protocol WCHKWorkoutLogicDelegate;

@interface WCHKWorkoutLogic : NSObject <IWCDeviceBrandMgrExt>

@property (nonatomic) BOOL bHadObserverWorkout;
@property (nonatomic) BOOL bHKWorkoutAccessAuthStatus;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) NSMutableDictionary *dicActivityType;
@property (retain, nonatomic) NSMutableSet *hadUploadActivity;
@property (weak, nonatomic) id<WCHKWorkoutLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)p_canTryUploadWorkout;
- (void)updateHealthStoreData;
- (BOOL)getHKWorkoutSourceAccessStatus;
- (void)setHKWorkoutSourceAccessStatus:(BOOL)a0;
- (void)tryDoObserverWorkout;
- (void)retrieveWorkouts;
- (void)querySourceWithCompletion:(id /* block */)a0;
- (void)queryWorkoutWithActivityType:(int)a0 legalSources:(id)a1;
- (void)onQueryCompeletedWithResult:(id)a0 activityType:(unsigned long long)a1;
- (void)onUploadSportRecordReponse:(id)a0 success:(int)a1;
- (void).cxx_destruct;

@end
