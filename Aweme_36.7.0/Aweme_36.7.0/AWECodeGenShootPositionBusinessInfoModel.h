@class NSString;

@interface AWECodeGenShootPositionBusinessInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *businessText;
@property (copy, nonatomic) NSString *businessTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
