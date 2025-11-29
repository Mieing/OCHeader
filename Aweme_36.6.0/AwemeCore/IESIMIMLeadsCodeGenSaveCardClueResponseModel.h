@class NSString, IESIMIMLeadsCodeGenMobileNumberModel;

@interface IESIMIMLeadsCodeGenSaveCardClueResponseModel : AWEBaseResponseModel

@property (nonatomic) long long clueId;
@property (nonatomic) long long orderId;
@property (copy, nonatomic) NSString *orderDetailUrl;
@property (retain, nonatomic) IESIMIMLeadsCodeGenMobileNumberModel *mobileNumberModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
