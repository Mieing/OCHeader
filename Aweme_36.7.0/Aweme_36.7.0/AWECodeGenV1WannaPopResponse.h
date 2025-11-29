@class NSString;

@interface AWECodeGenV1WannaPopResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSString *lynxSchema;
@property (copy, nonatomic) NSString *serverData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
