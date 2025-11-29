@class NSArray, NSString, WXGBackupDataMgr, NSMutableArray;
@protocol WXGChatSyncDataPackerDelegate;

@interface WXGChatSyncDataPacker : NSObject

@property (retain, nonatomic) NSMutableArray *sessionInfoArray;
@property (retain, nonatomic) NSMutableArray *dataSessionInfoArray;
@property (nonatomic) BOOL bStartPacking;
@property (retain, nonatomic) WXGBackupDataMgr *dataMgr;
@property (weak, nonatomic) id<WXGChatSyncDataPackerDelegate> delegate;
@property (nonatomic) unsigned long long totalPackSessionCount;
@property (nonatomic) unsigned long long totalPackMsgCount;
@property (nonatomic) BOOL bNeedMedia;
@property (retain, nonatomic) NSArray *needMediaArray;
@property (nonatomic) unsigned long long sessionInfoCount;
@property (nonatomic) unsigned long long sessionListCount;
@property (nonatomic) unsigned long long msgCountLimit;
@property (nonatomic) BOOL bUseMsgLimitArray;
@property (retain, nonatomic) NSArray *msgIntervalArray;
@property (retain, nonatomic) NSArray *msgLimitArray;
@property (nonatomic) unsigned long long timeLimit;
@property (nonatomic) BOOL bUseTimeInterval;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) BOOL bGetExtenInfo;
@property (nonatomic) BOOL bSpecificChat;
@property (copy, nonatomic) NSString *specificChatName;

- (id)init;
- (void)dealloc;
- (void)startPackData;
- (void)stopPackData;
- (unsigned int)getNewFriendUnreadCount;
- (void)loadSessionInfo;
- (BOOL)isContactDisableToSyncSessionAndData:(id)a0;
- (BOOL)isLocalizedContactThatCannotSync:(id)a0;
- (void)p_writePackDataWithBackupOut:(id)a0;
- (BOOL)p_writeMsgListDataPush:(id)a0 toPath:(id)a1;
- (BOOL)p_writeMediaDataPush:(id)a0 toPath:(id)a1;
- (void).cxx_destruct;

@end
