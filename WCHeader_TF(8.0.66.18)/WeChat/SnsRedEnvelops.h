@class NSMutableArray;

@interface SnsRedEnvelops : WXPBGeneratedMessage

@property (nonatomic) unsigned int rewardCount;
@property (retain, nonatomic) NSMutableArray *rewardUserList;
@property (nonatomic) unsigned int resourceId;
@property (nonatomic) unsigned int reportId;
@property (nonatomic) unsigned int reportKey;

+ (void)initialize;

- (void)setReportKey:(unsigned int)a0;
- (unsigned int)reportKey;
- (void)setReportId:(unsigned int)a0;
- (unsigned int)reportId;
- (void)setResourceId:(unsigned int)a0;
- (unsigned int)resourceId;
- (void)setRewardUserList:(id)a0;
- (id)rewardUserList;
- (void)setRewardCount:(unsigned int)a0;
- (unsigned int)rewardCount;

@end
