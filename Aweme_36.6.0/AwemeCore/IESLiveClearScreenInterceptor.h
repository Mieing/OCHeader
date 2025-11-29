@class NSString;

@interface IESLiveClearScreenInterceptor : NSObject <IESLiveTrackerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)willCommitTrackEvent:(id)a0 params:(id)a1;
- (id)landscapeEnableHookTrackers;
- (id)roomDIContextWithParams:(id)a0;

@end
