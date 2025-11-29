@class NSString, AWEURLModel;

@interface AWEPaymentLimitFreeHintModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *hintText;
@property (retain, nonatomic) AWEURLModel *hintIconURL;

+ (id)hintIconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
