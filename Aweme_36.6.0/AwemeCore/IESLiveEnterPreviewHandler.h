@class IESLivePreviewEnterParam, NSError, NSMutableDictionary;
@protocol IESLiveRoomService;

@interface IESLiveEnterPreviewHandler : NSObject

@property (retain, nonatomic) IESLivePreviewEnterParam *enterParam;
@property (retain, nonatomic) id<IESLiveRoomService> roomService;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long requestState;
@property (retain, nonatomic) NSMutableDictionary *subscribes;
@property (nonatomic) BOOL invalid;
@property (copy, nonatomic) id /* block */ completeNotify;
@property (nonatomic) BOOL enterCompleted;
@property (retain, nonatomic) NSMutableDictionary *preloadSubscribes;
@property (nonatomic) BOOL preloadEnable;
@property (nonatomic) unsigned long long preloadRequestState;
@property (nonatomic) BOOL preloadForEntered;
@property (nonatomic) BOOL notifyNoDelay;
@property (retain, nonatomic) NSError *preloadError;
@property (nonatomic) double lastPreloadinterval;
@property (nonatomic) double enterArriveInterval;
@property (nonatomic) double preloadArriveInterval;

- (void)subscribePreload:(id)a0 complete:(id /* block */)a1;
- (BOOL)enterHasCompleted;
- (void)subscribeRequestWithIdentifier:(id)a0 tryRequest:(BOOL)a1 complete:(id /* block */)a2;
- (void)realEnterRequestParam:(id)a0;
- (void)notifyWrapComplete;
- (id)renqibaoBuyerid:(id)a0;
- (void)preloadRequestWithParam:(id)a0 realRequestModel:(id)a1 fireStage:(unsigned long long)a2;
- (void)traceRequestArrive:(BOOL)a0;
- (BOOL)checkPreloadValidWithStage:(unsigned long long)a0;
- (void)requestPreloadEnterRoomWithModel:(id)a0 stage:(unsigned long long)a1;
- (BOOL)filterSceneType:(long long)a0;
- (BOOL)judgeNotEmptyWithObject:(id)a0;
- (void)notifyPreloadComplete:(id)a0 andError:(id)a1;
- (BOOL)checkPreloadInvalid;
- (void)traceRequestReset;
- (void)subscribe:(id)a0 complete:(id /* block */)a1;
- (void)tryRequest;
- (void)enterRequestWithRoomParam:(id)a0;
- (BOOL)validService:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
