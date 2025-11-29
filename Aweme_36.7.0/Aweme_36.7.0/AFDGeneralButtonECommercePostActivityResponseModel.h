@class AFDGeneralButtonECommercePostActivityDetailModel;

@interface AFDGeneralButtonECommercePostActivityResponseModel : AWEBaseApiModel

@property (copy, nonatomic) AFDGeneralButtonECommercePostActivityDetailModel *data;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
