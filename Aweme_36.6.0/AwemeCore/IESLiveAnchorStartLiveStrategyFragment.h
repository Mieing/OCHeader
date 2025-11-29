@class IESLiveAnchorStartLiveStrategyViewModel, NSString;
@protocol IESLiveAnchorStartLiveStrategyAction;

@interface IESLiveAnchorStartLiveStrategyFragment : IESLiveRoomComponent <IESLiveAnchorStartLiveStrategyViewModelDelegate, IESLiveAnchorRoomStatusChangeEvents>

@property (retain, nonatomic) IESLiveAnchorStartLiveStrategyViewModel *viewModel;
@property (retain, nonatomic) id<IESLiveAnchorStartLiveStrategyAction> dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)prepareAnchorLive;
- (void)startAnchorLiveWithRoom:(id)a0;
- (void)updateFinishedMaxBitrate:(long long)a0 minBitrate:(long long)a1 defaultBitrate:(long long)a2;
- (void)updateFinishedFrameRate:(long long)a0;
- (void)updateFinishedDegradeBitrate;
- (void).cxx_destruct;

@end
