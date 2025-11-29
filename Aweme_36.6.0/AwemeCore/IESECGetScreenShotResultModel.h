@class IESECGetScreenShotDataModel;

@interface IESECGetScreenShotResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESECGetScreenShotDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
