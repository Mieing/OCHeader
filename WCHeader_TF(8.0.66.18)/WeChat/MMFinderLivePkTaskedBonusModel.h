@class NSString, MMLiveTaskId, NSArray;

@interface MMFinderLivePkTaskedBonusModel : NSObject

@property (retain, nonatomic) MMLiveTaskId *liveTaskId;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) double serverUnixEpochTime;
@property (nonatomic) unsigned long long currentState;
@property (nonatomic) double stateTimeRemaining;
@property (nonatomic) double stateDuration;
@property (nonatomic) unsigned long long taskType;
@property (retain, nonatomic) NSArray *tasks;
@property (nonatomic) double creditMultiplier;
@property (nonatomic) BOOL tasksAccomplished;
@property (nonatomic) unsigned long long bonusPkCredit;

+ (id)modelFromBackendPkPlayerInfo:(id)a0 liveTaskId:(id)a1 serverUnixEpochTimeInSeconds:(unsigned long long)a2;
+ (BOOL)areTasksAndBonusesInModel:(id)a0 equalTo:(id)a1;

- (id)description;
- (void).cxx_destruct;

@end
