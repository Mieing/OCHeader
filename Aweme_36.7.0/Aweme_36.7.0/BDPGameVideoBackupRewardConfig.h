@class BDPGameVideoBackupRewardCondition;

@interface BDPGameVideoBackupRewardConfig : NSObject

@property (nonatomic) unsigned long long reward_type;
@property (retain, nonatomic) BDPGameVideoBackupRewardCondition *reward_condition;

- (void).cxx_destruct;

@end
