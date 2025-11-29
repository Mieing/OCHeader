@class NSString;

@interface MMFinderLiveMultiSceneReporter : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportForSplitView:(unsigned long long)a0;
+ (void)reportForResumeAfterConflictWithOtherScene:(unsigned long long)a0;
+ (void)reportForUnMuteAfterConflictWithOtherScene:(unsigned long long)a0;
+ (void)reportHandleMonoConflictForMainSceneMono:(unsigned long long)a0 subSceneMono:(unsigned long long)a1 liveHandleResult:(unsigned long long)a2 live:(unsigned long long)a3;
+ (unsigned long long)transferToReportTypeFromMonoServiceBusiness:(unsigned long long)a0;

- (void)onServiceInit;
- (void)onServiceClearData;

@end
