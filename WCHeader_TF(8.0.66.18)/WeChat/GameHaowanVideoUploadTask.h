@class NSString;

@interface GameHaowanVideoUploadTask : GameHaowanUploadTask <ICdnComMgrExt> {
    NSString *_videoMd5;
    long long _videoFileSize;
}

@property (retain, nonatomic) NSString *fileKey;
@property (nonatomic) float lastPercent;
@property (retain, nonatomic) NSString *videoId;
@property (nonatomic) unsigned long long startUploadTime;

- (void)onStart;
- (void)OnCdnUploadProgress:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void)trackEventUploadSucceed;
- (void)trackEventUploadFailed:(long long)a0;
- (void)trackEventStartUpload;
- (void).cxx_destruct;

@end
