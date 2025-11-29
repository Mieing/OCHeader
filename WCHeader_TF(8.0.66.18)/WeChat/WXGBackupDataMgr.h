@class NSData, NSLock, PacketFilterResponse, WXGBackupDataMgrConfig, NSString, NSCondition, WXGBackupMgrAnalyseInfo, NSMutableArray, NSObject, WXGBackupMsgMgr;
@protocol OS_dispatch_queue, WXGBackupDataMgrDelegate, OS_dispatch_semaphore;

@interface WXGBackupDataMgr : NSObject

@property (retain, nonatomic) WXGBackupDataMgrConfig *dataMgrConfig;
@property (retain, nonatomic) NSMutableArray *backupInfoDataArray;
@property (retain, nonatomic) NSLock *backupInfoLock;
@property (retain, nonatomic) WXGBackupMsgMgr *msgMgr;
@property (nonatomic) BOOL bProducing;
@property (retain, nonatomic) NSCondition *conditionBuffer;
@property (retain, nonatomic) NSMutableArray *producerArray;
@property (retain, nonatomic) NSMutableArray *consumeArray;
@property (retain, nonatomic) NSMutableArray *bufferArray;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *getDataQueue;
@property (nonatomic) unsigned long long consumerWait;
@property (nonatomic) unsigned long long producerWait;
@property (nonatomic) long long producerSize;
@property (nonatomic) long long bufferSize;
@property (nonatomic) long long consumerSize;
@property (retain, nonatomic) NSData *encryptKey;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *waitFilterSemaphore;
@property (retain, nonatomic) PacketFilterResponse *filterResponse;
@property (nonatomic) double waitFilterStartTime;
@property (weak, nonatomic) id<WXGBackupDataMgrDelegate> delegate;
@property (nonatomic) BOOL bPurgeMediaInPath;
@property (nonatomic) BOOL bSupportFilterFile;
@property (nonatomic) unsigned long long produceSessionCount;
@property (nonatomic) unsigned long long produceMsgCount;
@property (retain, nonatomic) NSString *mgrOwner;
@property (retain, nonatomic) WXGBackupMgrAnalyseInfo *analyseInfo;

- (void)dealloc;
- (id)init;
- (id)initWithEncrytKey:(id)a0;
- (void)inputWithBackupDataInfo:(id)a0;
- (id)getNextOutput;
- (void)startProduce;
- (void)stopProduce;
- (void)filterFileWithResponse:(id)a0;
- (void)purgeMedia:(id)a0 outputPath:(BOOL)a1 filterMedia:(id)a2;
- (void)purgeMsgList:(id)a0;
- (void)purgeTag:(id)a0;
- (void)p_producerAddOutput:(id)a0;
- (void)p_producerAddDataToBuffer;
- (void)p_bufferAddDataToConsumer;
- (id)p_getDataFromConsumer;
- (int)p_getSizeOfBakcupOutput:(id)a0;
- (void)p_addMsgCount:(unsigned int)a0 chatName:(id)a1;
- (void)p_addMediaType:(unsigned int)a0 chatName:(id)a1 mediaSize:(unsigned long long)a2;
- (void)p_addFilterMediaForChatName:(id)a0 mediaSize:(unsigned long long)a1 mediaType:(unsigned int)a2;
- (void).cxx_destruct;

@end
