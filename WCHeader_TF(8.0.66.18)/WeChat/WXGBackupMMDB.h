@class CMMDB, NSMutableArray;

@interface WXGBackupMMDB : NSObject

@property (retain, nonatomic) CMMDB *oMMDB;
@property (retain, nonatomic) NSMutableArray *arrCurMsgWrapList;
@property (nonatomic) unsigned int uiCurrentCursor;
@property (nonatomic) BOOL bIsLastMsgList;
@property (nonatomic) unsigned int lastCreateTime;
@property (nonatomic) unsigned int msgCount;
@property (nonatomic) BOOL bStopGet;
@property (nonatomic) unsigned int oneQueryLimitCnt;
@property (nonatomic) unsigned int lastLocalID;
@property (nonatomic) BOOL shouldChangeForDisplay;

+ (id)getLocalUsrName:(id)a0;
+ (void)handleMessage:(id)a0 ChatName:(id)a1 Des:(unsigned int)a2 ShouldChange:(BOOL)a3;
+ (BOOL)isNeedChangeForDisplayByMsgType:(id)a0;

- (id)init;
- (void)dealloc;
- (id)getMsgUseBatchQuery:(id)a0 fromRowID:(unsigned int)a1 fromCreateTime:(unsigned int)a2 endAtTime:(unsigned int)a3 timeAsend:(BOOL)a4;
- (unsigned long long)getTotalMsgCountOf:(id)a0 from:(unsigned int)a1 toEndTime:(unsigned int)a2;
- (id)getMsgChatName:(id)a0 fromCreateTime:(unsigned int)a1 endAtTime:(unsigned int)a2 lastLocalID:(unsigned int)a3 limit:(int)a4 timeAsend:(BOOL)a5;
- (void).cxx_destruct;

@end
