@class NSLock, WXGBackupMsgMgrConfig, WXGBackupMMDB, NSCondition, WXGBackupMessageWrapHandler, NSObject, NSMutableArray, BakChatMsgList;
@protocol OS_dispatch_queue;

@interface WXGBackupMsgMgr : NSObject

@property (retain, nonatomic) WXGBackupMsgMgrConfig *msgMgrConfig;
@property (nonatomic) BOOL bProducing;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *getMsgQueue;
@property (retain, nonatomic) NSMutableArray *inputData;
@property (retain, nonatomic) NSLock *inputDataLock;
@property (retain, nonatomic) WXGBackupMMDB *backupDB;
@property (retain, nonatomic) NSCondition *bufferCondition;
@property (retain, nonatomic) NSMutableArray *bufferArray;
@property (retain, nonatomic) NSMutableArray *producerArray;
@property (retain, nonatomic) NSMutableArray *consumerArray;
@property (nonatomic) unsigned long long consumerWait;
@property (nonatomic) unsigned long long producerWait;
@property (retain, nonatomic) WXGBackupMessageWrapHandler *msgWrapHandler;
@property (retain, nonatomic) BakChatMsgList *currentMsgList;
@property (retain, nonatomic) NSMutableArray *currentMsgWrapList;
@property (nonatomic) unsigned long long currentMediaDataSize;
@property (retain, nonatomic) NSMutableArray *currentMediaArray;
@property (retain, nonatomic) NSMutableArray *currentBigMediaArray;
@property (nonatomic) long long producerSize;
@property (nonatomic) long long bufferSize;
@property (nonatomic) long long consumerSize;
@property (nonatomic) BOOL bSupportFilterFile;

- (id)init;
- (void)inputWithBackupDataInfo:(id)a0;
- (id)getNextOutput;
- (void)startProduce;
- (void)stopProduce;
- (void)p_addInputDataWithBackupInfoArray:(id)a0;
- (id)p_getOneBackupDataInfoAndDelete;
- (void)getMsgForBackupDataInfo:(id)a0;
- (void)p_purgeMsgListDataInfoWithChatName:(id)a0 withStartTime:(long long)a1 withEndTime:(long long)a2;
- (void)p_producerAddDataToBuffer;
- (void)p_bufferAddDataToConsume;
- (id)p_getDataFromCosumer;
- (BOOL)isBakChatMessage:(id)a0 limitMsgType:(id)a1 filterForChatSync:(BOOL)a2;
- (BOOL)p_isBakChatMessage:(id)a0 limitMsgType:(id)a1;
- (BOOL)p_isBakChatMessage:(id)a0;
- (void).cxx_destruct;

@end
