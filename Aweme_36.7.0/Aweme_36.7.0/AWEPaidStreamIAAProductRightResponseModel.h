@class AWEPaidStreamIAAProductRightModel;

@interface AWEPaidStreamIAAProductRightResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEPaidStreamIAAProductRightModel *data;

+ (id)resultDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
