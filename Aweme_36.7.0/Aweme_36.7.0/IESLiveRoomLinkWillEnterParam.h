@class IESLiveEnterRoomAisle;

@interface IESLiveRoomLinkWillEnterParam : IESLiveLinkContextParam

@property (weak, nonatomic) IESLiveEnterRoomAisle *roomAisle;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ clearEnterRoomCallback;
@property (copy, nonatomic) id /* block */ getOnGoingRoomAisle;
@property (copy, nonatomic) id /* block */ clearAllWithError;
@property (copy, nonatomic) id /* block */ willEnterComplete;

- (void).cxx_destruct;

@end
