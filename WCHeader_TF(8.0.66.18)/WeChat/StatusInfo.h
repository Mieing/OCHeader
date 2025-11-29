@class NSString, StatusRawData, PrivateInfo, StatusInteractData, StatusClusterPresentData;

@interface StatusInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *statusId;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *topicId;
@property (nonatomic) long long createTimeMs;
@property (retain, nonatomic) NSString *iconId;
@property (nonatomic) unsigned int iconType;
@property (nonatomic) int state;
@property (nonatomic) BOOL isRead;
@property (nonatomic) unsigned int sequence;
@property (retain, nonatomic) StatusRawData *rawData;
@property (retain, nonatomic) StatusClusterPresentData *clusterData;
@property (retain, nonatomic) StatusInteractData *interactData;
@property (retain, nonatomic) PrivateInfo *privateInfoData;

+ (void)initialize;

- (void)setPrivateInfoData:(id)a0;
- (id)privateInfoData;
- (void)setInteractData:(id)a0;
- (id)interactData;
- (void)setClusterData:(id)a0;
- (id)clusterData;
- (void)setRawData:(id)a0;
- (id)rawData;
- (void)setSequence:(unsigned int)a0;
- (unsigned int)sequence;
- (void)setIsRead:(BOOL)a0;
- (BOOL)isRead;
- (void)setState:(int)a0;
- (int)state;
- (void)setIconType:(unsigned int)a0;
- (unsigned int)iconType;
- (void)setIconId:(id)a0;
- (id)iconId;
- (void)setCreateTimeMs:(long long)a0;
- (long long)createTimeMs;
- (void)setTopicId:(id)a0;
- (id)topicId;
- (void)setUserName:(id)a0;
- (id)userName;
- (void)setStatusId:(id)a0;
- (id)statusId;

@end
