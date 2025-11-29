@class NSString;

@interface IESLivePcPadPlayManager : NSObject <IESLiveTrackerDelegate>

@property (nonatomic) BOOL hasPushed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)willCommitTrackEvent:(id)a0 params:(id)a1;
- (void)receiveContinueEvent:(id)a0;
- (id)enableHookTrackers;
- (id)init;
- (void)dealloc;

@end
