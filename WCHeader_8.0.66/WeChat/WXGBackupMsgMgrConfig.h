@interface WXGBackupMsgMgrConfig : NSObject

@property (nonatomic) unsigned int msgListMsgCountLimit;
@property (nonatomic) unsigned long long msgListTotalSizeLimit;
@property (nonatomic) unsigned long long filterFileSize;
@property (nonatomic) long long maxProducerSize;
@property (nonatomic) long long maxBufferSize;
@property (nonatomic) long long maxConsumerSize;

- (id)init;
- (id)description;

@end
