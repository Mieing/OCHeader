@class NSString;

@interface AWEIMBulletPerformanceTracker : NSObject <IESIMBulletPerformanceTrackerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (double)p_randFrom0To1;
- (id)trackSourceWithFPSEvent:(id)a0 iesCon:(id)a1;
- (id)extraInfoForFPSEvent:(id)a0 iesCon:(id)a1;
- (id)trackSourceWithEvent:(id)a0 message:(id)a1;
- (id)trackSourceWithEvent:(id)a0 effectCardKeys:(id)a1;
- (void)trackPreloadInfoWithBulletScene:(id)a0 preloadScene:(long long)a1 preloadCount:(long long)a2 extraInfo:(id)a3;
- (BOOL)shouldTrackEvent:(id)a0 withKey:(id)a1 params:(id)a2;
- (BOOL)shouldTrackEvent:(id)a0 withKey:(id)a1 defaultKey:(id)a2 params:(id)a3;
- (BOOL)shouldTrackEvent:(id)a0 withSamplingRate:(double)a1;
- (id)trackSampleRateForEvent:(id)a0 withKey:(id)a1;
- (id)trackSampleRateForEvent:(id)a0 withKey:(id)a1 defaultKey:(id)a2;
- (long long)trackStringMerge:(id)a0 toString:(id)a1 needHeadSplitSymbol:(BOOL)a2 needTailSplitSymbol:(BOOL)a3;
- (id)p_msgTrackSampleRateConfigDict;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
