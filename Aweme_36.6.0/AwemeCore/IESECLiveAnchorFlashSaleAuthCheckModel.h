@class IESECLiveAnchorFlashAlertPopupModel;

@interface IESECLiveAnchorFlashSaleAuthCheckModel : IESECLiveApiBaseModel

@property (nonatomic) long long checkStatus;
@property (retain, nonatomic) IESECLiveAnchorFlashAlertPopupModel *popInfo;

+ (id)popInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
