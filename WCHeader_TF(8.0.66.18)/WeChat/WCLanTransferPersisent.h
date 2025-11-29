@interface WCLanTransferPersisent : NSObject

+ (id)getLanClientMsgID:(id)a0;
+ (id)getLanTransferDir;
+ (id)getLanTransferServerDir;
+ (id)getServerTmpFilePathWithMsgID:(id)a0;
+ (id)getLanTransferClientDir;
+ (id)getClientTmpFilePathWithMsgID:(id)a0;
+ (id)getPathOfClientTaskInfo;
+ (id)getClientLanTransferTaskInfo;
+ (BOOL)saveClientLanTransferTaskInfo:(id)a0;
+ (BOOL)removeClientLanTransferTaskInfo;
+ (id)getPathOfServerTaskInfo;
+ (id)getServerLanTransferTaskInfo;
+ (BOOL)saveServerLanTransferTaskInfo:(id)a0;
+ (BOOL)removeServerLanTransferTaskInfo;

@end
