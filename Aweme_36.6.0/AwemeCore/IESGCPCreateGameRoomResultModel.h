@class IESGCPCreateGameRoomDataModel;

@interface IESGCPCreateGameRoomResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESGCPCreateGameRoomDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
