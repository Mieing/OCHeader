@class NSString, GroupNoticeItem, NSMutableSet, NSMutableArray;

@interface GroupNoticeUploadMgr : MMUserService <GroupNoticeDataUploadDelegate, MMServiceProtocol>

@property (retain, nonatomic) GroupNoticeItem *currentUploadItem;
@property (retain, nonatomic) NSMutableSet *uploadedDataList;
@property (retain, nonatomic) NSMutableArray *uploaderList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (BOOL)isUploading;
- (void)stopAllUpload;
- (void)clean;
- (void)uploadItem:(id)a0;
- (void)uploadData:(id)a0;
- (void)stopUploadData:(id)a0;
- (id)findUploaderByData:(id)a0;
- (BOOL)needUploadData:(id)a0;
- (BOOL)tryFillUploadInfoFromUploadedList:(id)a0;
- (void)addDataToUploadList:(id)a0 forItem:(id)a1;
- (void)checkUploaderList;
- (void)onUploadGroupNoticeData:(id)a0 retCode:(int)a1;
- (void)onUploadGroupNoticeData:(id)a0 finishedLength:(unsigned long long)a1 totalLength:(unsigned long long)a2;
- (void)notifyUploadItemSuccess:(BOOL)a0;
- (void).cxx_destruct;

@end
