@class AWEIMOfficialNoticeDisableConfigStructModel;

@interface AWEIMOfficialNoticeDisableStructModel : IESIMBaseApiModel

@property (retain, nonatomic) AWEIMOfficialNoticeDisableConfigStructModel *serviceAccountModel;
@property (retain, nonatomic) AWEIMOfficialNoticeDisableConfigStructModel *subCategoryModel;

+ (id)serviceAccountModelJSONTransformer;
+ (id)subCategoryModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
