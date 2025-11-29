@class GroupNoticeItemDataField, ForwardMessageLogicController, GroupNoticeItem, NSString;

@interface GNFileDetailLogicController : FileDetailLogicController <GroupNoticeDownloadExt, ForwardMessageLogicDelegate> {
    GroupNoticeItem *m_downloadItem;
}

@property (retain, nonatomic) ForwardMessageLogicController *forwardMsgLogic;
@property (retain, nonatomic) GroupNoticeItem *item;
@property (retain, nonatomic) GroupNoticeItemDataField *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItem:(id)a0 fileData:(id)a1;
- (id)GetFileName;
- (unsigned int)GetPreviewType;
- (id)GetFilePath;
- (unsigned long long)GetFileSize;
- (id)getMusicLocalFileDataUnit;
- (BOOL)OnPreviewFile:(unsigned int)a0;
- (void)startDownload;
- (BOOL)isDownloading;
- (void)stopDownload;
- (void)onGroupNoticeDownloadData:(id)a0 finishedLength:(unsigned long long)a1 totalLength:(unsigned long long)a2;
- (void)onGroupNoticeDownloadData:(id)a0 retCode:(int)a1;
- (void)onGroupNoticeDownloadItem:(id)a0 retCode:(int)a1;
- (id)getCurrentViewController;
- (void)onForwardToContact:(id)a0;
- (void).cxx_destruct;

@end
