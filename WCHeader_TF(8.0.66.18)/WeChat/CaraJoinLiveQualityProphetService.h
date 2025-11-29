@class NSString, CaraCppJoinLiveQualityProphet;

@interface CaraJoinLiveQualityProphetService : MMUserService <MMServiceProtocol>

@property (readonly, nonatomic) CaraCppJoinLiveQualityProphet *underlying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reportThatJoinLive:(id)a0 context:(id)a1;
- (void)startPredict;
- (id)getPrediction;
- (void)stopPredict;
- (void)reportThatLiveRoomLag:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
