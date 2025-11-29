@class NSDictionary, NSString, NSArray;

@interface AWEDouPlusChargeCreateResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSDictionary *iapDeskParam;
@property (copy, nonatomic) NSString *defaultChannel;
@property (copy, nonatomic) NSArray *channels;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
