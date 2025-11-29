@class AWEIMGroupActionCheckPromptInfo, AWEIMCreateGroupInfo, AWEIMCodeGenPublicGroupCreateInfoModel;

@interface AWEIMCheckCreateFansGroupResponseModel : AWEBaseApiModel

@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) AWEIMGroupActionCheckPromptInfo *promptInfo;
@property (retain, nonatomic) AWEIMCreateGroupInfo *createInfo;
@property (retain, nonatomic) AWEIMCodeGenPublicGroupCreateInfoModel *publicGroupCreateInfo;

+ (id)actionTypeJSONTransformer;
+ (id)createInfoJSONTransformer;
+ (id)promptInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
