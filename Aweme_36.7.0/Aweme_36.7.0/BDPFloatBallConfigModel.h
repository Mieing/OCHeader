@class BDPFloatBallIconTypesConfigModel;

@interface BDPFloatBallConfigModel : NSObject

@property (nonatomic) long long iconAnimationDuration;
@property (nonatomic) long long preWaitCpCallbackDuration;
@property (nonatomic) long long remainTimeWithNoOperation;
@property (nonatomic) BOOL totalSwitch;
@property (retain, nonatomic) BDPFloatBallIconTypesConfigModel *iconTypes;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
