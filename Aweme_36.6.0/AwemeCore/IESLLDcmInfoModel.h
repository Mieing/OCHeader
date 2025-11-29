@class NSString, NSDictionary;

@interface IESLLDcmInfoModel : IESLLifeBaseApiModel

@property (copy, nonatomic) NSString *dcmId;
@property (copy, nonatomic) NSDictionary *dcmExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
