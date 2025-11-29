@class NSString, NSMutableArray;
@protocol IESLiveStrategyService;

@interface IESLiveAnchorDuringLiveStrategyFactorDealFragment : IESLiveRoomComponent <IESLiveDynamicClarityAction, IESLiveAnchorStartLiveStrategyAction, IESLiveInteractAction, IESLiveStreamConfigActions, IESLiveAnchorRoomStatusChangeEvents>

@property (retain, nonatomic) id<IESLiveStrategyService> strategyService;
@property (retain, nonatomic) NSMutableArray *registerModels;
@property (retain, nonatomic) NSMutableArray *registerActions;
@property (nonatomic) BOOL isStartLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)startAnchorLiveWithRoom:(id)a0;
- (void)stopAnchorLive;
- (void)startInteractiveWithScene:(unsigned long long)a0;
- (void)endInteractiveWithScene:(unsigned long long)a0;
- (void)pushStreamConfigDidUpdate:(id)a0 type:(id)a1;
- (void)updateStartLiveStrategyFinishedMaxBitrate:(long long)a0 minBitrate:(long long)a1 defaultBitrate:(long long)a2;
- (void)updateStartLiveStrategyFinishedFrameRate:(long long)a0;
- (void)updateStartLiveStrategyFinishedDegradeBitrate;
- (void)updateStartLiveStrategyAllFactorFinished;
- (void)willUpdateStreamConfigWithParams:(id *)a0;
- (void)didUpdateStreamConfigWithParams:(id)a0;
- (void)didUpdateStreamWithDefaultBitrate:(long long)a0 minBit:(long long)a1 maxBit:(long long)a2;
- (void)didUpdateStreamWithFrameRate:(long long)a0;
- (void)_setupRegisterActionsWhenStartStrategyDisable;
- (void)_setupRegisterModels;
- (void).cxx_destruct;
- (void)_removeObservers;
- (void)_registerObservers;

@end
