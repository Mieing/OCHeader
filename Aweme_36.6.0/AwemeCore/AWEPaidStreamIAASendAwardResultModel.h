@class AWEPaidStreamIAASendAwardResponseModel;

@interface AWEPaidStreamIAASendAwardResultModel : AWEBaseApiModel

@property (retain, nonatomic) AWEPaidStreamIAASendAwardResponseModel *resultData;

+ (id)resultDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
