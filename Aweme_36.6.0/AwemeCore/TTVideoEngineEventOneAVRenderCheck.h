@class TTVideoEngineEventBase, NSDictionary, NSString;
@protocol TTVideoEngineEventLoggerDelegate;

@interface TTVideoEngineEventOneAVRenderCheck : NSObject <TTVideoEngineEventOneAVRenderCheckProtocol>

@property (retain, nonatomic) TTVideoEngineEventBase *eventBase;
@property (nonatomic) int noRenderType;
@property (nonatomic) long long startTime;
@property (nonatomic) long long costTime;
@property (copy, nonatomic) NSDictionary *r_stage_errcs;
@property (nonatomic) long long videoFormaterLenMS;
@property (nonatomic) long long audioFormaterLenMS;
@property (nonatomic) long long videoLenDecMs;
@property (nonatomic) long long audioLenDecMs;
@property (nonatomic) long long videoLenBaseMs;
@property (nonatomic) long long audioLenBaseMs;
@property (nonatomic) long long mIndex;
@property (nonatomic) long long isAVBadInterlaced;
@property (copy, nonatomic) NSString *endType;
@property (nonatomic) long long firstFrameTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *resolutionBefore;
@property (nonatomic) int is_abr;
@property (nonatomic) unsigned long long mLastRebufT;
@property (nonatomic) unsigned long long mLastSeekT;
@property (nonatomic) unsigned long long lastForebackSwitchTime;
@property (nonatomic) unsigned long long lastAVSwitchTime;
@property (nonatomic) unsigned long long lastResSwitchTime;
@property (nonatomic) unsigned long long lastHeadsetSwithTime;
@property (nonatomic) long long mBeginPos;
@property (nonatomic) long long mEndPos;
@property (nonatomic) long long mEnableMDL;
@property (copy, nonatomic) NSString *mQualityDescBefore;
@property (nonatomic) long long isInBackground;
@property (nonatomic) long long radioMode;
@property (nonatomic) long long curHeadset;
@property (nonatomic) long long blueTooth;
@property (nonatomic) long long crosstalkCount;
@property (weak, nonatomic) id<TTVideoEngineEventLoggerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)noVARenderStart:(long long)a0 noRenderType:(int)a1 extraInfo:(id)a2;
- (void)parseBufferLens;
- (void)sendOneAVRenderCheck;
- (void)noVARenderStart:(long long)a0 noRenderType:(int)a1;
- (id)noVARenderEnd:(long long)a0 endType:(id)a1 noRenderType:(int *)a2;
- (id)initWithEventBase:(id)a0;
- (void)setEnableMDL:(long long)a0;
- (void)setValue:(id)a0 WithKey:(long long)a1;
- (void)onAVBadInterlaced;
- (id)jsonDict;
- (void).cxx_destruct;
- (void)clear;

@end
