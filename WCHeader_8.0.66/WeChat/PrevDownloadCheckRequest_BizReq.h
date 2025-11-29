@class NSData, NSMutableArray;

@interface PrevDownloadCheckRequest_BizReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int bizId;
@property (retain, nonatomic) NSData *buffer;
@property (retain, nonatomic) NSMutableArray *quotaAsks;
@property (nonatomic) unsigned long long prevUsedQuota;

+ (void)initialize;

- (void)setPrevUsedQuota:(unsigned long long)a0;
- (unsigned long long)prevUsedQuota;
- (void)setQuotaAsks:(id)a0;
- (id)quotaAsks;
- (void)setBuffer:(id)a0;
- (id)buffer;
- (void)setBizId:(unsigned int)a0;
- (unsigned int)bizId;

@end
