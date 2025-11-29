@class IESECLiveBasicLogDataDataModel;

@interface IESECLiveBasicLogDataResultModel : IESLiveBridgeModel

@property (nonatomic) long long code;
@property (retain, nonatomic) IESECLiveBasicLogDataDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
