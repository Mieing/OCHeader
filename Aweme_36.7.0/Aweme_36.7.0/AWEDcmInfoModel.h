@class NSString, NSDictionary;

@interface AWEDcmInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *dcmId;
@property (copy, nonatomic) NSDictionary *dcmExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
