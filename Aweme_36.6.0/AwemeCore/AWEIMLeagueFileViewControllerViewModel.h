@class AWEIMMessageAttachmentDownloadViewModel;

@interface AWEIMLeagueFileViewControllerViewModel : NSObject

@property (weak, nonatomic) AWEIMMessageAttachmentDownloadViewModel *downloaderViewModel;
@property (nonatomic) double progress;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long openFileStatus;

- (id)checkHasLocalFileWithConfig:(id)a0;
- (BOOL)isSupportPreviewWithFileType:(id)a0;
- (void)openFileWithFileUrl:(id)a0 fileType:(id)a1 fileName:(id)a2;
- (id)generateFileUriMd5String:(id)a0 fileType:(id)a1;
- (void)openFileUseOtherWithFileUrl:(id)a0;
- (void)cancelDownloadFileWithConfig:(id)a0;
- (void)downloadFileWithConfig:(id)a0;
- (void)deleteDownloadFileWithConfig:(id)a0;
- (void).cxx_destruct;

@end
