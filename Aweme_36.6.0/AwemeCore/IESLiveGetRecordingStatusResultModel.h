@class IESLiveGetRecordingStatusDataModel;

@interface IESLiveGetRecordingStatusResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESLiveGetRecordingStatusDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
