@class NSString, ResourceKey, ResourceMeta;

@interface Resource : WXPBGeneratedMessage

@property (nonatomic) unsigned int subType;
@property (retain, nonatomic) ResourceMeta *info;
@property (retain, nonatomic) ResourceKey *key;
@property (nonatomic) unsigned int oper;
@property (nonatomic) unsigned int reportId;
@property (retain, nonatomic) NSString *sampleId;
@property (nonatomic) unsigned int expireTime;
@property (nonatomic) unsigned int retryTime;
@property (nonatomic) unsigned int eid;
@property (nonatomic) unsigned int downloadNetType;
@property (nonatomic) unsigned int retryInterval;
@property (nonatomic) unsigned int priority;

+ (void)initialize;

- (void)setPriority:(unsigned int)a0;
- (unsigned int)priority;
- (void)setRetryInterval:(unsigned int)a0;
- (unsigned int)retryInterval;
- (void)setDownloadNetType:(unsigned int)a0;
- (unsigned int)downloadNetType;
- (void)setEid:(unsigned int)a0;
- (unsigned int)eid;
- (void)setRetryTime:(unsigned int)a0;
- (unsigned int)retryTime;
- (void)setExpireTime:(unsigned int)a0;
- (unsigned int)expireTime;
- (void)setSampleId:(id)a0;
- (id)sampleId;
- (void)setReportId:(unsigned int)a0;
- (unsigned int)reportId;
- (void)setOper:(unsigned int)a0;
- (unsigned int)oper;
- (void)setKey:(id)a0;
- (id)key;
- (void)setInfo:(id)a0;
- (id)info;
- (void)setSubType:(unsigned int)a0;
- (unsigned int)subType;

@end
