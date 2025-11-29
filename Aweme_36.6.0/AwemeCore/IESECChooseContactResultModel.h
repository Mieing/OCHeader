@class IESECChooseContactDataModel;

@interface IESECChooseContactResultModel : IESLiveBridgeModel

@property (nonatomic) long long permission;
@property (retain, nonatomic) IESECChooseContactDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
