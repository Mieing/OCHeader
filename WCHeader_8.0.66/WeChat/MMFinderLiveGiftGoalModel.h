@class MMFinderLiveGiftGoalDescriptionItem, NSString, MMFinderLiveGiftGoalItem, MMFinderLivePlayGiftAnimationCommand;

@interface MMFinderLiveGiftGoalModel : NSObject

@property (retain, nonatomic) NSString *goalId;
@property (retain, nonatomic) MMFinderLiveGiftGoalDescriptionItem *goalDescription;
@property (retain, nonatomic) MMFinderLiveGiftGoalDescriptionItem *goalFulfilledHeading;
@property (retain, nonatomic) MMFinderLiveGiftGoalDescriptionItem *goalFulfilledDescription;
@property (nonatomic) unsigned long long startUnixEpochTimeInSeconds;
@property (nonatomic) unsigned long long endUnixEpochTimeInSeconds;
@property (nonatomic) BOOL invalidated;
@property (retain, nonatomic) MMFinderLiveGiftGoalItem *goalItem;
@property (retain, nonatomic) MMFinderLivePlayGiftAnimationCommand *fulfilledAnimationCommand;
@property (readonly, nonatomic) BOOL effectiveNow;

+ (id)goalModelWithBackendInfo:(id)a0 liveTaskId:(id)a1;
+ (id)descriptionWithBackendSuppliedTemplate:(id)a0 liveTaskId:(id)a1;
+ (BOOL)ensureResourceAvailabilityForGiftId:(id)a0 liveTaskId:(id)a1;

- (void).cxx_destruct;

@end
