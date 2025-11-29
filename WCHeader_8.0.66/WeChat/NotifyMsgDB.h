@class WCTDatabase, WCTTable;

@interface NotifyMsgDB : NSObject

@property (retain, nonatomic) WCTDatabase *database;
@property (retain, nonatomic) WCTTable *notifyMsgTable;

- (id)init;
- (void)dealloc;
- (BOOL)initDataBase;
- (void)createTables;
- (BOOL)createNotifyMsgTable;
- (void)addNotifyWithXmlInfo:(id)a0;
- (id)getXmlInfoWithTipsID:(id)a0;
- (id)getMessageWrapWithTipID:(id)a0;
- (id)getRequestNotifyList;
- (void)forbidMsgShowWithTipsID:(id)a0;
- (BOOL)isForbidWithTipsID:(id)a0;
- (void)updateLiveEndWithTipsID:(id)a0;
- (BOOL)isMainFrameExposed:(id)a0;
- (void)updateMainFrameExposedWithTipsID:(id)a0;
- (BOOL)isMainFrameClicked:(id)a0;
- (void)updateMainFrameClickedWithTipsID:(id)a0;
- (void)updateAllToRead;
- (long long)getMsgSvrIDWithTipsID:(id)a0;
- (id)getAllUnReadLiveEndNotifyInfo;
- (void)deleteNotifyInfoWithTipsID:(id)a0;
- (void)cleanTimeoutMapping;
- (void)cleanDBXmlInfo;
- (void)cleanForbidMapping;
- (void)cleanTipsIDToMsgIDMapping;
- (void)didRecoverDatabase;
- (void)willRecoverDatabase;
- (id)getDBPath;
- (void).cxx_destruct;

@end
