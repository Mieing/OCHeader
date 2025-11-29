@class AWEDouplusToastModel, AWEDouplusIconModel;

@interface AWEDouPlusToastInfoResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEDouplusToastModel *toastInfoModel;
@property (retain, nonatomic) AWEDouplusIconModel *iconInfoModel;
@property (nonatomic) long long douPlusType;

+ (id)toastInfoModelJSONTransformer;
+ (id)iconInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
