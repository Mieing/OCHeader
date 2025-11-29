@class NSString;

@interface IESIMUGCodeGenExtraModel : AWEBaseDataModel

@property (nonatomic) long long now;
@property (copy, nonatomic) NSString *logid;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
