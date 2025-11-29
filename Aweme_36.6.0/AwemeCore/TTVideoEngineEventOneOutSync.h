@class NSString, TTVideoEngineEventBase, NSMutableArray;
@protocol TTVideoEngineEventLoggerDelegate;

@interface TTVideoEngineEventOneOutSync : NSObject <TTVideoEngineEventOneOutSyncProtocol>

@property (copy, nonatomic) NSString *eventType;
@property (retain, nonatomic) TTVideoEngineEventBase *eventBase;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long lastEventTime;
@property (nonatomic) long long costTime;
@property (copy, nonatomic) NSString *endType;
@property (nonatomic) unsigned long long firstFrameTime;
@property (nonatomic) long long videoFormaterLenMS;
@property (nonatomic) long long audioFormaterLenMS;
@property (nonatomic) long long videoLenDecMs;
@property (nonatomic) long long audioLenDecMs;
@property (nonatomic) long long videoLenBaseMs;
@property (nonatomic) long long audioLenBaseMs;
@property (nonatomic) unsigned long long endTime;
@property (copy, nonatomic) NSString *resolutionBefore;
@property (copy, nonatomic) NSString *resolutionAfter;
@property (nonatomic) long long configBitrateBefore;
@property (nonatomic) long long configBitrateAfter;
@property (nonatomic) long long mIndex;
@property (nonatomic) int is_abr;
@property (copy, nonatomic) NSString *mPtsList;
@property (nonatomic) long long mDropCount;
@property (copy, nonatomic) NSString *mVideoDecFpsList;
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
@property (copy, nonatomic) NSString *mQualityDescAfter;
@property (nonatomic) long long maxAVDiff;
@property (nonatomic) long long isInBackground;
@property (nonatomic) long long radioMode;
@property (nonatomic) long long curHeadset;
@property (nonatomic) long long blueTooth;
@property (retain, nonatomic) NSMutableArray *pauseTimeList;
@property (nonatomic) long long isAVBadInterlaced;
@property (nonatomic) long long crosstalkCount;
@property (weak, nonatomic) id<TTVideoEngineEventLoggerDelegate> delegate;
@property (nonatomic) long long avOutsyncCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)avOutsyncStartCallback;
- (void)avOutsyncEndCallback;
- (void)sendOneOutsync;
- (id)initWithEventBase:(id)a0;
- (void)avOutsyncStart:(long long)a0 vt:(long long)a1 lastSeekT:(unsigned long long)a2 lastRebufT:(unsigned long long)a3;
- (id)avOutsyncEnd:(long long)a0 endType:(id)a1;
- (void)setEnableMDL:(long long)a0;
- (void)setValue:(id)a0 WithKey:(long long)a1;
- (void)onAVBadInterlaced;
- (id)jsonDict;
- (void).cxx_destruct;
- (void)clear;

@end
