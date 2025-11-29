@class NSString, IESLiveGamePromoteSendAdEventAdExtraDataModel;

@interface IESLiveGamePromoteSendAdEventParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *refer;
@property (retain, nonatomic) IESLiveGamePromoteSendAdEventAdExtraDataModel *adExtraData;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
