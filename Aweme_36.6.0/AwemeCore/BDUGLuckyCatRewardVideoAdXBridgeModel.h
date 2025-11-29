@class NSString, NSNumber;

@interface BDUGLuckyCatRewardVideoAdXBridgeModel : BDUGLuckyBridgeModel

@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *taskKey;
@property (copy, nonatomic) NSString *amount;
@property (copy, nonatomic) NSString *adRit;
@property (copy, nonatomic) NSString *adAliasPosition;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) NSNumber *needReward;
@property (retain, nonatomic) NSNumber *needSdkReward;
@property (copy, nonatomic) NSString *token;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)dictionaryValue;

@end
