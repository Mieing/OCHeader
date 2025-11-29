@class NSArray;

@interface IESLivePKAutoMatchModel : IESLiveDynamicModel

@property (nonatomic) unsigned long long autoMatchWaitdTime;
@property (nonatomic) double autoMatchStartTime;
@property (nonatomic) double autoMatchedTime;
@property (nonatomic) unsigned long long autoMatchPredictWaitTime;
@property (nonatomic) unsigned long long autoMatchCenterRivalIndex;
@property (copy, nonatomic) NSArray *previewUserListArray;
@property (copy, nonatomic) NSArray *autoMatchAvatorURLList;
@property (nonatomic) BOOL isAllowHighWay;
@property (nonatomic) long long inviteLimitTime;
@property (nonatomic) long long waitTimeLevel;
@property (nonatomic) double pkSpeedUpStartTime;
@property (nonatomic) double SpeedUpMatchedTime;
@property (nonatomic) long long speedUpLevel;
@property (nonatomic) long long defaultWaitLimit;
@property (nonatomic) long long accelerateWaitLimit;

@end
