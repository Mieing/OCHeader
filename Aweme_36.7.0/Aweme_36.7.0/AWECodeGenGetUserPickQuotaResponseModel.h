@class NSString, AWECodeGenPickQuotaModel;

@interface AWECodeGenGetUserPickQuotaResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSString *statusMessage;
@property (retain, nonatomic) AWECodeGenPickQuotaModel *quotaModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
