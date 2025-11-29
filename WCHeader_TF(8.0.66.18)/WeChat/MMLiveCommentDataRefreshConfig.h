@interface MMLiveCommentDataRefreshConfig : NSObject

@property (nonatomic) unsigned int maxMsgTempCacheCnt;
@property (nonatomic) unsigned int maxRefreshMsgCntOnce;
@property (nonatomic) unsigned int maxRefreshHistoryMsgCntOnce;
@property (nonatomic) unsigned int refreshHistoryMsgInterval;
@property (nonatomic) unsigned int refreshMsgIntervalMs;
@property (nonatomic) unsigned int minimunShowMsgLikeCnt;
@property (nonatomic) unsigned int customRefreshFastMsgCntOnce;
@property (nonatomic) unsigned int customRefreshSlowMsgCntOnce;
@property (nonatomic) BOOL isSpeedDifference;
@property (nonatomic) BOOL isCustomAppendDelay;
@property (nonatomic) unsigned int customAppendMsgCntOnce;
@property (nonatomic) double appendBeginDelayDuration;
@property (nonatomic) double linearAppendScrollSpeed;
@property (nonatomic) unsigned int customAppendMsgCntOnceInSmoothMode;
@property (nonatomic) double appendBeginDelayDurationInSmoothMode;
@property (nonatomic) unsigned int customAppendMsgCntOnceInLowPowerMode;
@property (nonatomic) double appendBeginDelayDurationInLowPowerMode;
@property (nonatomic) double landscapeBarrageMoveDuration;
@property (nonatomic) double landscapeBarrageTriggerInterval;
@property (nonatomic) unsigned int maxFloatMsgTrackNum;

+ (unsigned int)defaultMaxMsgTempCacheCntForTaskId:(id)a0;
+ (unsigned int)defaultMaxMsgTempCacheCntForTaskId:(id)a0 boxId:(id)a1;
+ (unsigned int)defaultMaxRefreshMsgCntOnceForTaskId:(id)a0;
+ (unsigned int)defaultRefreshMsgIntervalMsForTaskId:(id)a0;
+ (unsigned int)defaultMaxRefreshHistoryMsgCntOnceForTaskId:(id)a0;
+ (unsigned int)defaultRefreshHistoryMsgIntervalForTaskId:(id)a0;
+ (BOOL)defaultSpeedDifferenceForTaskId:(id)a0;
+ (BOOL)defaultCustomAppendDelayForTaskId:(id)a0;
+ (unsigned int)defaultCustomAppendMsgCntOnceForTaskId:(id)a0;
+ (double)defaultAppendBeginDelayDurationForTaskId:(id)a0;
+ (double)defaultLinearAppendScrollSpeedForTaskId:(id)a0;
+ (unsigned int)defaultCustomAppendMsgCntOnceInSmoothModeForTaskId:(id)a0;
+ (double)defaultAppendBeginDelayDurationInSmoothModeForTaskId:(id)a0;
+ (unsigned int)defaultCustomAppendMsgCntOnceInLowPowerModeForTaskId:(id)a0;
+ (double)defaultAppendBeginDelayDurationInLowPowerModeForTaskId:(id)a0;
+ (double)defaultLandscapeBarrageMoveDurationForTaskId:(id)a0;
+ (double)defaultLandscapeBarrageTriggerIntervalForTaskId:(id)a0;

- (id)initWithTaskId:(id)a0;

@end
