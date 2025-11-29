@class NSString;

@interface IESIMCodeGenTagCustomizedTypeInfoModel : AWEBaseDataModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *typeName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
