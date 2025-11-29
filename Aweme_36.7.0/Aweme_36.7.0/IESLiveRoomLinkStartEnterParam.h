@class IESLiveEnterRoomAisle;

@interface IESLiveRoomLinkStartEnterParam : IESLiveLinkContextParam

@property (weak, nonatomic) IESLiveEnterRoomAisle *roomAisle;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ getOnGoingRoomAisle;
@property (copy, nonatomic) id /* block */ startEnterComplete;
@property (copy, nonatomic) id /* block */ clearEnterRoomCallback;

- (void).cxx_destruct;

@end
