@class NSString;

@interface IESLiveActivityTrackerInterceptorImpl : NSObject <IESLiveTrackerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willCommitTrackEvent:(id)a0 params:(id)a1;

@end
