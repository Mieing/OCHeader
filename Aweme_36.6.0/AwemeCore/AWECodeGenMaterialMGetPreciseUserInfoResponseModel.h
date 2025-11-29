@class NSString, NSDictionary;

@interface AWECodeGenMaterialMGetPreciseUserInfoResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSDictionary *data;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
