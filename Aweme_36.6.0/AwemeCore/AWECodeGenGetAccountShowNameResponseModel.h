@class NSString;

@interface AWECodeGenGetAccountShowNameResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSString *authName;
@property (copy, nonatomic) NSString *jumpSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
