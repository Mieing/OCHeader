@class NSString, NSNumber, NSDictionary;

@interface BDUGLuckyADRewardedVideoXBridgeModel : BDUGLuckyBridgeModel

@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *group;
@property (copy, nonatomic) NSString *taskKey;
@property (copy, nonatomic) NSString *amount;
@property (copy, nonatomic) NSString *amountType;
@property (copy, nonatomic) NSString *adRit;
@property (copy, nonatomic) NSString *creatorID;
@property (copy, nonatomic) NSString *adAliasPosition;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *extraForDoAction;
@property (retain, nonatomic) NSNumber *rit;
@property (copy, nonatomic) NSDictionary *firstADCloseButtonModel;
@property (copy, nonatomic) NSDictionary *firstADRetentionModel;
@property (copy, nonatomic) NSDictionary *moreRewardButtonModel;
@property (copy, nonatomic) NSDictionary *moreRewardRetentionModel;
@property (copy, nonatomic) NSDictionary *oneMorePopupModel;

+ (id)adapterCreatorIDWithModel:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)dictionaryValue;

@end
