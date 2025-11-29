@class IESECLiveAnchorFlashAlertPopupModel;

@interface IESECLiveAnchorFlashSaleCreateResponseModel : IESECLiveApiBaseModel

@property (retain, nonatomic) IESECLiveAnchorFlashAlertPopupModel *popInfo;

+ (id)popInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
