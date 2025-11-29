@class CdnHistory, NSString, CdnDebug, CdnGroup, NSData, NSMutableArray;

@interface CdnBase : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *filekey;
@property (nonatomic) int timeoutSeconds;
@property (retain, nonatomic) CdnDebug *debug;
@property (retain, nonatomic) NSMutableArray *customkv;
@property (retain, nonatomic) NSString *ctag;
@property (retain, nonatomic) NSString *flowtag;
@property (nonatomic) unsigned long long userContext;
@property (nonatomic) unsigned int concurrentCount;
@property (nonatomic) int maxRetry;
@property (retain, nonatomic) CdnHistory *history;
@property (retain, nonatomic) CdnGroup *group;
@property (nonatomic) int taskType;
@property (retain, nonatomic) NSData *bizReqPayload;
@property (nonatomic) int encryptMode;

+ (void)initialize;

@end
