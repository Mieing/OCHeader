@interface BizAppMsgBaseInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int appMsgId;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int updateTime;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int bigPic;
@property (nonatomic) BOOL hasExpanded;

+ (void)initialize;

- (void)setHasExpanded:(BOOL)a0;
- (BOOL)hasExpanded;
- (void)setBigPic:(unsigned int)a0;
- (unsigned int)bigPic;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;
- (void)setUpdateTime:(unsigned int)a0;
- (unsigned int)updateTime;
- (void)setCreateTime:(unsigned int)a0;
- (unsigned int)createTime;
- (void)setAppMsgId:(unsigned int)a0;
- (unsigned int)appMsgId;

@end
