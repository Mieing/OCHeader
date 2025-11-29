@class BDXBridgeInspireOpenRewardAdGetRewardConfig, NSString, NSArray, NSDictionary, NSNumber, BDXBridgeInspireOpenRewardAdGrantRewardConfig;

@interface BDXBridgeInspireOpenRewardAdMethodParamModel : BDXBridgeModel

@property (nonatomic) BOOL useGetRewardConfig;
@property (copy, nonatomic) NSString *adFrom;
@property (retain, nonatomic) NSNumber *adRit;
@property (retain, nonatomic) NSNumber *creatorId;
@property (copy, nonatomic) NSString *subscribeEventKey;
@property (copy, nonatomic) NSString *jsbToken;
@property (retain, nonatomic) BDXBridgeInspireOpenRewardAdGrantRewardConfig *grantRewardConfig;
@property (retain, nonatomic) BDXBridgeInspireOpenRewardAdGetRewardConfig *getRewardConfig;
@property (retain, nonatomic) NSArray *rewardList;
@property (retain, nonatomic) NSArray *retainDialogConfig;
@property (retain, nonatomic) NSArray *moreRewardDialogConfig;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)requiredKeyPaths;
+ (id)rewardListJSONTransformer;
+ (id)grantRewardConfigJSONTransformer;
+ (id)getRewardConfigJSONTransformer;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
