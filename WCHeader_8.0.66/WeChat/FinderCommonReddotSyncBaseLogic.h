@class EntranceReportSwitch, NSString, NSMutableDictionary, NSData, FinderCommonReddotSyncTask, NSMutableArray;

@interface FinderCommonReddotSyncBaseLogic : NSObject

@property (nonatomic) unsigned int cgiNumber;
@property (retain, nonatomic) NSString *moduleName;
@property (retain, nonatomic) NSData *syncBuffer;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSMutableArray *syncTaskQueue;
@property (retain, nonatomic) FinderCommonReddotSyncTask *curSyncingTask;
@property (retain, nonatomic) EntranceReportSwitch *entranceExposeSwitch;
@property (retain, nonatomic) NSMutableDictionary *switchSyncTimestampDic;

- (id)initWithCgiNumber:(unsigned int)a0 moduleName:(id)a1;
- (void)addSyncTask:(id)a0;
- (void)onEndWithContinueFlag;
- (void)updateReddotExpose:(id)a0 entranceCtrlInfo:(id)a1 otherRelatedKeyPathList:(id)a2;
- (void)checkQueue;
- (void)realStartWithTask:(id)a0;
- (void)onSyncSuccessWithTask:(id)a0 response:(id)a1;
- (void)onSyncFailedWithTask:(id)a0 response:(id)a1 error:(id)a2;
- (id)getFinderClientStatus;
- (void)triggerSyncWithConfig:(id)a0 syncScene:(unsigned int)a1;
- (void)triggerSyncWithConfig:(id)a0 syncScene:(unsigned int)a1 syncBlock:(id /* block */)a2;
- (int)getSafeCacheTimeWithTimestamp:(double)a0;
- (void).cxx_destruct;

@end
