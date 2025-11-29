@class NSString, NSMutableDictionary;

@interface IESLiveLinkmicTrackerInterceptorImpl : NSObject <IESLiveLinkmicTrackerInterceptor, IESLiveTrackerDelegate>

@property (retain, nonatomic) NSMutableDictionary *eventsMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)willCommitTrackEvent:(id)a0 params:(id)a1;
- (void)injectEvent:(id)a0 params:(id)a1;
- (void)injectEventParams:(id)a0;
- (void)removeInjectEvent:(id)a0;
- (void)removeInjectEvents:(id)a0;
- (void).cxx_destruct;

@end
