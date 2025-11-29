@class CdnDownloadTaskInfo, NSString, CMessageWrap, CdnTaskInfo;

@interface LiveMsgDownloadHelper : NSObject

@property (retain, nonatomic) NSString *taskID;
@property (retain, nonatomic) CdnTaskInfo *taskInfo;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (copy, nonatomic) id /* block */ progressCallback;
@property (copy, nonatomic) id /* block */ downloadRetCallback;
@property (nonatomic) BOOL isTryShow;
@property (nonatomic) unsigned int imageFinishLength;
@property (nonatomic) unsigned int imageTotalSize;
@property (nonatomic) unsigned int liveVideoFinishLength;
@property (nonatomic) unsigned int liveTotalSize;
@property (retain, nonatomic) CdnDownloadTaskInfo *imageTaskInfo;

- (id)initWithTaskInfo:(id)a0;
- (BOOL)isNeedDownloadImage;
- (BOOL)isNeedDownloadVideo;
- (BOOL)startDownloadImageData:(id /* block */)a0 downloadRet:(id /* block */)a1;
- (void)onProgressChange;
- (void)onImageDownloadComplete:(id)a0;
- (void)onVideoDownloadComplete:(id)a0;
- (BOOL)startDownloadImageData;
- (BOOL)startDownloadVideoData;
- (void).cxx_destruct;

@end
