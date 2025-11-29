@class NSString, NSMutableDictionary, TTPushManager;

@interface BDUGSyncConfig : NSObject

@property (copy, nonatomic) NSString *encryptedUID;
@property (copy, nonatomic) NSString *deviceID;
@property (nonatomic) unsigned long long channel;
@property (nonatomic) long long syncInterval;
@property (nonatomic) long long pollInterval;
@property (nonatomic) long long reportSizeLimit;
@property (nonatomic) long long submitSizeLimit;
@property (nonatomic) long long dbStoreSizeLimit;
@property (nonatomic) long long backgroundPollInterval;
@property (nonatomic) long long backgroundSyncInterval;
@property (nonatomic) BOOL isCompress;
@property (nonatomic) long long minHttpPollInterval;
@property (readonly, nonatomic) NSMutableDictionary *historyConfig;
@property (nonatomic) long long historySizeLimit;
@property (nonatomic) BOOL enablePollTry;
@property (nonatomic) BOOL enableReconnectPoll;
@property (nonatomic) long long reconnectPollInterval;
@property (nonatomic) BOOL enableBatchAck;
@property (nonatomic) long long batchAckInterval;
@property (nonatomic) long long batchAckCount;
@property (copy, nonatomic) NSString *appID;
@property (nonatomic) int frontierService;
@property (copy, nonatomic) NSString *hostURL;
@property (retain, nonatomic) TTPushManager *pushManager;
@property (copy, nonatomic) id /* block */ commonParamsBlock;
@property (nonatomic) BOOL isMonitor;
@property (nonatomic) BOOL isFinEnable;
@property (nonatomic) BOOL enableV4;

- (void)setHistoryDataConfig:(id)a0;
- (id)historyConfigForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
