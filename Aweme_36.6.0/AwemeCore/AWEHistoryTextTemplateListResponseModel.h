@class NSDictionary, NSString, IESEffectPlatformNewResponseModel;

@interface AWEHistoryTextTemplateListResponseModel : AWEBaseApiModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *userSettingDic;
@property (retain, nonatomic) IESEffectPlatformNewResponseModel *responseModel;
@property (copy, nonatomic) NSDictionary *userSetting;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)responseModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
