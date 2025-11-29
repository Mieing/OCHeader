@class NSTimer, NSMutableArray, NSMutableDictionary;
@protocol AWEMessageReachDataAbilityProtocol;

@interface AWEMessageReachRequestWaitingManager : NSObject

@property (weak, nonatomic) id<AWEMessageReachDataAbilityProtocol> dataAbility;
@property (retain, nonatomic) NSMutableArray *cacheRequestArray;
@property (retain, nonatomic) NSMutableDictionary *launchRequestDict;
@property (nonatomic) BOOL channelLaunched;
@property (nonatomic) BOOL channelLaunchedRequestResponseFinished;
@property (retain, nonatomic) NSMutableDictionary *launchSceneDataDict;
@property (retain, nonatomic) NSTimer *clearTimer;

- (id)initWithDataAbility:(id)a0;
- (void)cacheRequestTriggerWaitingWithTriggerEvent:(id)a0 paramModel:(id)a1 reqParamsCollectBlock:(id /* block */)a2;
- (void)requestFinishWithParamsContext:(id)a0;
- (void)executeStageDataWithChannelID:(id)a0 sceneModel:(id)a1 paramContext:(id)a2;
- (void)channelLaunchedFinish;
- (long long)getWaitingTimeoutLimit;
- (void)handleAllStageData;
- (void)allLaunchRequestResponseFinish;
- (void)endClearTimer;
- (BOOL)ifAllLaunchedRequestFinishWithParamsContext:(id)a0;
- (BOOL)hasWaitingSceneData;
- (void)clearAllWaitingData;
- (id)getExecuteDataModelWithChannelID:(id)a0;
- (void)stageDataWithChannelID:(id)a0 sceneModel:(id)a1 paramContext:(id)a2;
- (void)clearAllWaitingTrigger;
- (void)requestBegin:(id)a0;
- (void)cacheRequestTriggerWaitingWithTriggerEvent:(id)a0 paramModel:(id)a1;
- (void).cxx_destruct;
- (void)setup;

@end
