@class NSString, IESLiveActivityTrackerInterceptorImpl;

@interface IESLiveActivityGlobalModule : IESLiveModule <IESLiveActivityGlobalModule>

@property (retain, nonatomic) IESLiveActivityTrackerInterceptorImpl *trackerInterceptorImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
