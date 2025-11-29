@class NSArray;

@interface IESLiveMultiLinkerMultiAutoMatchModel : IESLiveDynamicModel

@property (nonatomic) unsigned long long autoMatchWaitdTime;
@property (nonatomic) unsigned long long autoMatchPredictWaitTime;
@property (nonatomic) unsigned long long autoMatchCenterRivalIndex;
@property (copy, nonatomic) NSArray *previewUserListArray;
@property (copy, nonatomic) NSArray *autoMatchAvatorURLList;
@property (nonatomic) BOOL isHighWay;
@property (nonatomic) BOOL isPassivelySync;
@property (nonatomic) long long matchPhase;
@property (nonatomic) unsigned long long defaultWaitLimitTime;
@property (nonatomic) unsigned long long accelerateLimitTime;
@property (nonatomic) unsigned long long inviteLimitTime;
@property (nonatomic) unsigned long long waitSec;
@property (nonatomic) long long waitTimeLevel;
@property (nonatomic) long long autoMatchType;

- (void).cxx_destruct;

@end
