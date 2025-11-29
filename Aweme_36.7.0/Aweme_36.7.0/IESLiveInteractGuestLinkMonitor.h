@class NSString;
@protocol IESLiveMultiUserScenarioMonitor;

@interface IESLiveInteractGuestLinkMonitor : NSObject <IESLiveInteractGuestLinkMonitorProtocol>

@property (weak, nonatomic) id<IESLiveMultiUserScenarioMonitor> monitor;
@property (nonatomic) double startTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)traceWithName:(id)a0 eventName:(id)a1 errorCode:(long long)a2 errorMsg:(id)a3 extra:(id)a4;
- (void)recordStartTimetamp;
- (double)calculateCurrentDuration;
- (void).cxx_destruct;

@end
