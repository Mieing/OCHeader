@class WCTDatabase;

@interface WCFileBrowseInfoDB : NSObject

@property (retain, nonatomic) WCTDatabase *infoDB;

+ (BOOL)whetherInfoDBExist;

- (id)init;
- (void)dealloc;
- (id)p_getBrowseInfoTable;
- (void)p_createDataBase;
- (void)p_closeDB;
- (void)addFileBrowseInfo:(id)a0;
- (void)updateTypeDownloadedForBrowseInfo:(id)a0;
- (void)markUserOpenByMsgSvrID:(unsigned long long)a0;
- (id)getAllFilesBrowseInfo;
- (id)getAllFilesBrowseMD5;
- (id)getAllFilesBrowseInfoFilterByDownloadType;
- (id)getAllFilesBrowseInfoFilterByDownloadTypeForChat:(id)a0;
- (id)getAllFilesBrowseInfoFilterByUserOpen;
- (id)getFileBrowseInfoByMD5:(id)a0;
- (void)delAllFileBrowseInfo;
- (void)delFileBrowseInfoWithMsgID:(unsigned long long)a0;
- (void)delFileBrowseInfoWithChatName:(id)a0;
- (void)willRecoverDatabase;
- (void).cxx_destruct;

@end
