@class NSString;

@interface IESIMUGCodeGenUserQuotaModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *userId;
@property (nonatomic) int totalQuota;
@property (nonatomic) int usedQuota;
@property (copy, nonatomic) NSString *lastUpdateTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
