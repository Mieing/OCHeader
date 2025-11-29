@class NSMutableDictionary;
@protocol HeadImgDownloaderDelegate;

@interface MMHDHeadImgDownloader : MMObject <PBMessageObserverDelegate>

@property (retain, nonatomic) NSMutableDictionary *m_downloadTaskDic;
@property (weak, nonatomic) id<HeadImgDownloaderDelegate> downloadDelegate;

- (id)init;
- (void)dealloc;
- (BOOL)isExistTheSameUsername:(id)a0;
- (BOOL)addTask:(id)a0;
- (id)getTaskForName:(id)a0;
- (void)removeTaskForName:(id)a0;
- (id)getTempFilePath:(id)a0;
- (unsigned int)getFileSize:(id)a0;
- (BOOL)downloadHDImg:(id)a0 offset:(unsigned int)a1 len:(unsigned int)a2;
- (BOOL)saveData:(id)a0 forTask:(id)a1 file:(id)a2;
- (void)stopDownloadForName:(id)a0;
- (unsigned int)downloadHDHeadImg:(id)a0 forCategory:(unsigned char)a1;
- (unsigned int)downloadHDHeadImg:(id)a0 url:(id)a1 forCategory:(unsigned char)a2;
- (BOOL)startDownloadHeadImageWithdDownloadTask:(id)a0;
- (unsigned int)startDownloadTaskWithURLChannel:(id)a0;
- (BOOL)startDownloadWithMars:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturnCDN:(id)a0 task:(id)a1;
- (id)generateNormalHeadData:(id)a0;
- (void)updateNormalHeadForTask:(id)a0;
- (void)onDownloadCompleteForTask:(id)a0;
- (void)onDownloadPartFailForTask:(id)a0;
- (void)onDownloadPartOK:(id)a0 task:(id)a1;
- (void).cxx_destruct;

@end
