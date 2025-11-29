@class NSString;

@interface IESIMCodeGenFloatingBarDynamicDataModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *link;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
