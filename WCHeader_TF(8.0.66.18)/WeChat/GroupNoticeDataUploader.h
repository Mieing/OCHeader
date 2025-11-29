@class GroupNoticeUploadTask, GroupNoticeUploadInfo;
@protocol GroupNoticeDataUploadDelegate;

@interface GroupNoticeDataUploader : NSObject

@property (retain, nonatomic) GroupNoticeUploadTask *currentTask;
@property (nonatomic) BOOL isUploading;
@property (weak, nonatomic) id<GroupNoticeDataUploadDelegate> delegate;
@property (retain, nonatomic) GroupNoticeUploadInfo *uploadInfo;

+ (id)uploaderWithUploadInfo:(id)a0;

- (void)startUpload;
- (void)stopUpload;
- (void)clearUploadStatus;
- (void)startUploadThumb:(id /* block */)a0;
- (void)startUploadData:(id /* block */)a0;
- (void)startTask:(id)a0;
- (void)notifyTaskProgress:(id)a0;
- (void)notifyTaskComplete:(id)a0;
- (void).cxx_destruct;

@end
