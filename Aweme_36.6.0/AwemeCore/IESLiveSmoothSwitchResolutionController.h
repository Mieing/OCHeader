@class NSString, NSMutableArray;
@protocol IESLiveRoomService, IESLivePlayerProtocol;

@interface IESLiveSmoothSwitchResolutionController : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLivePlayerProtocol> player;
@property (copy, nonatomic) NSString *switchToken;
@property (copy, nonatomic) NSString *switchTargetResolution;
@property (retain, nonatomic) NSMutableArray *completionArray;
@property (readonly, nonatomic) BOOL switching;

- (void)stopSwitchIfNeeded;
- (void)didAutomaticallySwitchFromPreviousResolution:(id)a0 toCurrentResolution:(id)a1 userInfo:(id)a2;
- (void)renderModel:(id)a0 player:(id)a1;
- (void)smoothlySwitchResolutionStrategy:(id)a0 defaultSDKKey:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)observerSwitchCompletion:(id /* block */)a0;
- (void)p_resumeCurrentSwitchSessionIfNeeded;
- (id)p_findExistStrategySDKkey:(id)a0;
- (id)p_resolutionUpgradeSequence;
- (void)p_smoothlySwitchCurrentItemResolution:(id)a0 retryCount:(long long)a1 currentRetryCount:(long long)a2 retryDelayInterval:(double)a3 token:(id)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (id)init;
- (void)p_clear;

@end
