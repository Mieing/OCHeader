@class IESLiveEnterRoomAisle, IESLiveDIContext;

@interface IESLiveRoomLinkWillShowVCParam : IESLiveLinkContextParam

@property (weak, nonatomic) IESLiveEnterRoomAisle *roomAisle;
@property (copy, nonatomic) id /* block */ clearEnterRoomCallback;
@property (copy, nonatomic) id /* block */ getOnGoingRoomAisle;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ clearAllWithError;
@property (retain, nonatomic) IESLiveDIContext *DIContext;

- (void).cxx_destruct;

@end
