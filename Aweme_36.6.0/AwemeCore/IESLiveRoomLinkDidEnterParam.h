@class IESLiveEnterRoomAisle, HTSLiveRoom;

@interface IESLiveRoomLinkDidEnterParam : IESLiveLinkContextParam

@property (weak, nonatomic) IESLiveEnterRoomAisle *roomAisle;
@property (retain, nonatomic) HTSLiveRoom *roomModel;
@property (copy, nonatomic) id /* block */ didEnterComplete;
@property (copy, nonatomic) id /* block */ getOnGoingRoomAisle;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
