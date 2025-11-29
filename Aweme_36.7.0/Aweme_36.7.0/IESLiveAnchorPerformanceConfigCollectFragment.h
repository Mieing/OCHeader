@class NSString, NSObject, HMDThreadSafeDictionary;
@protocol OS_dispatch_queue;

@interface IESLiveAnchorPerformanceConfigCollectFragment : IESLiveRoomComponent <IESLiveEffectConflictStatusHandle, IESLiveAnchorEffectUsageRecordService> {
    NSObject<OS_dispatch_queue> *_queue;
    int _recordsOvertime;
}

@property (retain, nonatomic) HMDThreadSafeDictionary *applyDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (void)handleEffectConflictStatus:(long long)a0 scene:(long long)a1;
- (id)effectApplyStatisticsInDuration:(double)a0;
- (void)_subscribeEffectProcessObservers;
- (void)_handleEffectProcessStatus:(long long)a0 scene:(long long)a1;
- (void)_removeConflictEffectOfScene:(long long)a0;
- (void)_cleanRecordsOvertimeOfScene:(long long)a0;
- (void)_applyNewEffect:(id)a0 scene:(long long)a1;
- (void).cxx_destruct;

@end
