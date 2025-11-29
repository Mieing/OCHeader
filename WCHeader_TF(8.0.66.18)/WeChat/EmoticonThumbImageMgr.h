@class NSString, NSMutableArray, EmoticonThumbImageTask;

@interface EmoticonThumbImageMgr : MMUserService <IStoreEmotionSingleDownloadMgrExt, MMServiceProtocol>

@property (nonatomic) BOOL active;
@property (retain, nonatomic) NSMutableArray *taskList;
@property (retain, nonatomic) EmoticonThumbImageTask *currentTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)getThumbImg:(id)a0;
- (id)getExsitingThumbImgPath:(id)a0;
- (void)tryStartNextTask;
- (void)startTask:(id)a0;
- (void)startDownloadEmoticon:(id)a0;
- (id)tryGetThumbPath:(id)a0 includingExternal:(BOOL)a1;
- (id)tryGetThumbUrl:(id)a0;
- (void)tryGenAndSaveThumbImageForMd5:(id)a0 imageData:(id)a1;
- (void)downloadImgUrlStr:(id)a0 toPath:(id)a1 aesKey:(id)a2;
- (void)callTaskFail;
- (void)callTaskOK:(id)a0;
- (void)realCallTaskOK:(id)a0;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imageData:(id)a1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)a0;
- (void).cxx_destruct;

@end
