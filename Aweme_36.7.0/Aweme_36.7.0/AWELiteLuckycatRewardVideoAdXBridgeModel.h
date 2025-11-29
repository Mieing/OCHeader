@class NSString, NSNumber;

@interface AWELiteLuckycatRewardVideoAdXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *adAliasPosition;
@property (copy, nonatomic) NSString *adInspire;
@property (copy, nonatomic) NSString *adRit;
@property (copy, nonatomic) NSString *taskKey;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL needReward;
@property (nonatomic) BOOL needSdkReward;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) BOOL inspireModelNeedManage;
@property (copy, nonatomic) NSString *amount;
@property (copy, nonatomic) NSString *experience;
@property (copy, nonatomic) NSString *amountType;
@property (copy, nonatomic) NSString *unfinishedTemplate;
@property (copy, nonatomic) NSString *finishedToast;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long needOneStageAmount;
@property (retain, nonatomic) NSNumber *enableTaskPick;

+ (id)JSONKeyPathsByPropertyKey;

- (id)originalParams;
- (void).cxx_destruct;

@end
