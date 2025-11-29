@class NSString;

@interface FinderLiveVoipStreamStatus : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *scene;
@property (nonatomic) unsigned int networkType;
@property (nonatomic) unsigned int videoRenderFps;
@property (nonatomic) unsigned int videoLightBlockCount;
@property (nonatomic) unsigned int videoMediumBlockCount;
@property (nonatomic) unsigned int videoHeavyBlockCount;
@property (nonatomic) unsigned int videoTotalBlockTimeMs;
@property (nonatomic) unsigned int avgBitrate;
@property (nonatomic) int firstIFrameCostMs;
@property (nonatomic) int firstUiFrameCostMs;
@property (nonatomic) unsigned int abnormalFlag;

+ (void)initialize;

- (id)description;

@end
