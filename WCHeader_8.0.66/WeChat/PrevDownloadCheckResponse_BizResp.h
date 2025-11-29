@class NSData;

@interface PrevDownloadCheckResponse_BizResp : WXPBGeneratedMessage

@property (nonatomic) unsigned int bizId;
@property (retain, nonatomic) NSData *buffer;
@property (nonatomic) unsigned long long quota;

+ (void)initialize;

- (void)setQuota:(unsigned long long)a0;
- (unsigned long long)quota;
- (void)setBuffer:(id)a0;
- (id)buffer;
- (void)setBizId:(unsigned int)a0;
- (unsigned int)bizId;

@end
