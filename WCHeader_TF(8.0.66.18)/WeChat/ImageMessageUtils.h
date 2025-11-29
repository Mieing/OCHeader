@interface ImageMessageUtils : NSObject

+ (BOOL)isOpenRecordLivePhoto;
+ (double)maxLivePhotoDuration;
+ (id)getLiveVideoDownloadKey:(id)a0;
+ (id)getLiveHDVideoDownloadKey:(id)a0;
+ (BOOL)isOpenNewImageUploadMgr;
+ (BOOL)isOpenLiveMsgUpload;
+ (BOOL)isClose265CompressVideoUpload;
+ (long long)getLivePhotoSelectMode;
+ (BOOL)isShowLiveSelectGuideView;
+ (void)onUserAcceptLiveGuide;
+ (BOOL)isOpenXBLiveMsg;
+ (BOOL)isOpenLiveMsgDisplay;
+ (BOOL)isOpenCalOriginSourceMd5;
+ (BOOL)isWxamEnable;
+ (void)cacheFileToHardLink:(id)a0;
+ (void)cacheWxamImage:(id)a0;
+ (id)genUploadMsgImgRequest:(id)a0 hitMd5:(BOOL)a1 imgInfo:(id)a2 imgType:(int)a3 md5:(id)a4 msgWrap:(id)a5;
+ (unsigned int)CreateSendImageEvent:(id)a0 clientMsgId:(id)a1 md5:(id)a2 hitMd5:(BOOL)a3 imgType:(int)a4 imgInfoBuffer:(id)a5;

@end
