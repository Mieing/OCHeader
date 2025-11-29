@class AWEIMGroupActionCheckPromptInfo, AWEIMCreateGroupInfo;

@interface AWEIMCheckCreateFansGroupResponseModel : AWEBaseApiModel

@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) AWEIMGroupActionCheckPromptInfo *promptInfo;
@property (retain, nonatomic) AWEIMCreateGroupInfo *createInfo;

+ (id)actionTypeJSONTransformer;
+ (id)createInfoJSONTransformer;
+ (id)promptInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
