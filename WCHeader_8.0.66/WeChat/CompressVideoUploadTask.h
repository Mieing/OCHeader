@class ThumbImageUploader, NSString, MsgDataDownloadLogic, VideoEncodeParams;

@interface CompressVideoUploadTask : VideoUploadTask <MsgDataDownloadDelegate>

@property (nonatomic) unsigned long long m_ui64StartTime;
@property (nonatomic) BOOL isSkipTransH264;
@property (nonatomic) BOOL bTryHevcConvert;
@property (nonatomic) BOOL isTryCompressVideoFromRawVideo;
@property (retain, nonatomic) VideoEncodeParams *params;
@property (retain, nonatomic) MsgDataDownloadLogic *downloadLogic;
@property (retain, nonatomic) ThumbImageUploader *thumbImageUploader;
@property (nonatomic) double compressProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMsgWrap:(id)a0;
- (BOOL)isNeedCompress;
- (void)startTask;
- (void)stopTask;
- (void)asyncCompressVideo:(BOOL)a0;
- (BOOL)tryConvertToH264;
- (void)downloadVideo;
- (void)tryUploadData;
- (void)uploadVideoData;
- (id)getUploadThumbPath;
- (void)uploadVideoDataToCdn;
- (void)onCheckExistOnlyFail;
- (void)onUploadFail:(id)a0;
- (void)reportOnUploadSucc:(id)a0;
- (void)onUploadSuccess:(id)a0;
- (void)tryOverwriteMsgContent:(id)a0;
- (void)onDownloadSuccess:(id)a0;
- (void)onDownloadCommonFail:(id)a0;
- (void)onDownloadExpireFail:(id)a0;
- (void)onDownloadCancel:(id)a0;
- (void).cxx_destruct;

@end
