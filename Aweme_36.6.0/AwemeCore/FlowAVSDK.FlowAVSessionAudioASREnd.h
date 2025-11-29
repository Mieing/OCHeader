@interface FlowAVSDK.FlowAVSessionAudioASREnd : NSObject

@property (nonatomic) unsigned long long userDuration;
@property (nonatomic) unsigned long long lastRespCostTime;
@property (nonatomic) BOOL noContent;
@property (nonatomic) unsigned long long taskRequestSeqID;
@property (nonatomic) unsigned long long taskRequestTimestamp;
@property (nonatomic) unsigned long long comfortWaitTime;

- (id)initWithUserDuration:(unsigned long long)a0 lastRespCostTime:(unsigned long long)a1 noContent:(BOOL)a2 taskRequestSeqID:(unsigned long long)a3 taskRequestTimestamp:(unsigned long long)a4 comfortWaitTime:(unsigned long long)a5;
- (id)init;

@end
