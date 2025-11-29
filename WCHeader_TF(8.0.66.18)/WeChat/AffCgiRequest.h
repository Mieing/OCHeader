@class NSData, AffCgiRequest_AffCgiInfo, AffCgiRequest_AffCgiTransferInfo;

@interface AffCgiRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *data;
@property (nonatomic) BOOL longPolling;
@property (nonatomic) unsigned int longPollingTimeout;
@property (retain, nonatomic) AffCgiRequest_AffCgiInfo *mmnet;
@property (retain, nonatomic) AffCgiRequest_AffCgiInfo *ilink;
@property (retain, nonatomic) AffCgiRequest_AffCgiTransferInfo *transferInfo;
@property (nonatomic) unsigned int timeout;
@property (nonatomic) unsigned long long taskId;
@property (nonatomic) unsigned int baseRequestFieldNumber;
@property (nonatomic) BOOL requestInCurrentThread;

+ (void)initialize;

- (void)setRequestInCurrentThread:(BOOL)a0;
- (BOOL)requestInCurrentThread;
- (void)setBaseRequestFieldNumber:(unsigned int)a0;
- (unsigned int)baseRequestFieldNumber;
- (void)setTaskId:(unsigned long long)a0;
- (unsigned long long)taskId;
- (void)setTimeout:(unsigned int)a0;
- (unsigned int)timeout;
- (void)setTransferInfo:(id)a0;
- (id)transferInfo;
- (void)setIlink:(id)a0;
- (id)ilink;
- (void)setMmnet:(id)a0;
- (id)mmnet;
- (void)setLongPollingTimeout:(unsigned int)a0;
- (unsigned int)longPollingTimeout;
- (void)setLongPolling:(BOOL)a0;
- (BOOL)longPolling;
- (void)setData:(id)a0;
- (id)data;

@end
