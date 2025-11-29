@class NSString, NSMutableDictionary;
@protocol IESLiveMultiUserScenarioMonitor, IESLiveInteractXplayGameInterface;

@interface IESLiveInteractXplayTrackerImpl : NSObject <IESLiveInteractXplayTracker>

@property (retain, nonatomic) NSMutableDictionary *clocks;
@property (retain, nonatomic) NSMutableDictionary *recordClocks;
@property (nonatomic) unsigned long long loadType;
@property (weak, nonatomic) id<IESLiveInteractXplayGameInterface> xplay;
@property (weak, nonatomic) id<IESLiveMultiUserScenarioMonitor> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)switchScene;
- (id)trackerExtraFields:(id)a0;
- (void)traceName:(id)a0 step:(id)a1 errorCode:(long long)a2 errorMsg:(id)a3 extra:(id)a4;
- (void)startLaunch;
- (BOOL)isLoadTypeFirst;
- (void)retryLaunch;
- (void)signUp:(unsigned long long)a0;
- (id)anchorStartDuration;
- (id)startLinkmicDuration;
- (void)traceName:(id)a0 step:(id)a1 error:(id)a2 extra:(id)a3;
- (void)monitorServerAPICall:(id)a0 timestamp:(double)a1 error:(id)a2 response:(id)a3 extra:(id)a4;
- (void)monitorBusinessLogicName:(id)a0 extra:(id)a1;
- (void)monitorIMMessageName:(id)a0 message:(id)a1 extra:(id)a2;
- (void).cxx_destruct;
- (double)duration;
- (void)record:(unsigned long long)a0;
- (double)query:(unsigned long long)a0;

@end
