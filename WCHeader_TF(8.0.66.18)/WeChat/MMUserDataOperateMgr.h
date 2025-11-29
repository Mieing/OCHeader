@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface MMUserDataOperateMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate> {
    NSArray *m_arrCombineReportForUserDataType;
    unsigned int m_oneHadExecuteNumber;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *m_taskQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initData;
- (void)recordOperateUserData:(unsigned int)a0 dataType:(unsigned int)a1;
- (void)batchRecordOperateUserData:(id)a0;
- (void)insertUserDataOperateItemListToDB:(id)a0;
- (BOOL)checkHadReportUserDataOperateRecord;
- (void)asynReportUserDataOperateRecord;
- (void)reportUserDataOperateRecord;
- (BOOL)checkUploadUserData;
- (id)getUploadUserDataId;
- (void)onServiceClearData;
- (void)onServiceInit;
- (BOOL)sendUploadUserDataRequest:(id)a0 timesTamp:(unsigned long long)a1;
- (void)onUploadUserData:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
