@interface WXGBackupDataMgrConfig : NSObject

@property (nonatomic) long long maxProducerSize;
@property (nonatomic) long long maxBufferSize;
@property (nonatomic) long long maxConsumerSize;
@property (nonatomic) unsigned int oneMediaSize;

- (id)init;

@end
