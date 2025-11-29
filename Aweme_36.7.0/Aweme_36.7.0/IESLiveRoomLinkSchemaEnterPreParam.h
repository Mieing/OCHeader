@class IESLiveEnterRoomAisle, IESLiveEnterRoomTempModel;

@interface IESLiveRoomLinkSchemaEnterPreParam : IESLiveLinkContextParam

@property (retain, nonatomic) IESLiveEnterRoomTempModel *tempModel;
@property (retain, nonatomic) IESLiveEnterRoomAisle *roomAisle;

- (void).cxx_destruct;

@end
