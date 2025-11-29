@class NSString, NSData;

@interface FunctionNewXml : NSObject <PBCoding>

@property (retain, nonatomic) NSString *cgiName;
@property (retain, nonatomic) NSString *cgiPath;
@property (nonatomic) unsigned int cmdid;
@property (retain, nonatomic) NSString *functionMsgId;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long businessId;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) NSString *customBuff;
@property (retain, nonatomic) NSData *businessBuff;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) unsigned int maxRetryCount;
@property (nonatomic) unsigned int retryInterval;
@property (nonatomic) unsigned int reportid;
@property (nonatomic) unsigned int successkey;
@property (nonatomic) unsigned int failKey;
@property (nonatomic) unsigned int finalFailKey;
@property (nonatomic) unsigned int nextRetryTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_cmdid;
+ (void)PBArrayAdd_opType;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_retryInterval;
+ (void)PBArrayAdd_reportid;
+ (void)PBArrayAdd_successkey;
+ (void)PBArrayAdd_failKey;
+ (void)PBArrayAdd_finalFailKey;
+ (void)PBArrayAdd_nextRetryTime;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_functionMsgId;
+ (void)PBArrayAdd_cgiName;
+ (void)PBArrayAdd_cgiPath;
+ (void)PBArrayAdd_customBuff;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_businessId;
+ (void)PBArrayAdd_maxRetryCount;
+ (void)PBArrayAdd_businessBuff;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
