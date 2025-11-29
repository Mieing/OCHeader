@class IESLiveEnterRoomAisle, AWELiveRoomLogModel;

@interface AWELiveRoomLinkNativeEnterPreParam : IESLiveLinkContextParam

@property (retain, nonatomic) IESLiveEnterRoomAisle *roomAisle;
@property (retain, nonatomic) AWELiveRoomLogModel *roomLog;

- (void).cxx_destruct;

@end
