@class AWEPaidStreamIAAAwardConfigResponseModel;

@interface AWEPaidStreamIAAAwardConfigResultModel : AWEBaseApiModel

@property (retain, nonatomic) AWEPaidStreamIAAAwardConfigResponseModel *resultData;

+ (id)resultDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
