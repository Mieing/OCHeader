@class NSDictionary, NSString;

@interface IESLiveSaveGiftExtraDataToNativeParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *giftExtra;
@property (copy, nonatomic) NSString *bizType;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
