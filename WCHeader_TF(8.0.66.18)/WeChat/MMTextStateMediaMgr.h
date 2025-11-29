@class MMTextStateMediaUploadCdnMgr, NSString, MMTextStateMediaDownloadImageCdnMgr, MMTextStateMediaDownloadVideoCdnMgr, MMTextStateMediaDataPB;

@interface MMTextStateMediaMgr : MMUserService <MMTextStateMediaUploadCdnMgrDelegate, MMServiceProtocol> {
    MMTextStateMediaDataPB *m_textStateMediaData;
}

@property (retain, nonatomic) MMTextStateMediaDownloadVideoCdnMgr *downloadVideoCdnMgr;
@property (retain, nonatomic) MMTextStateMediaDownloadImageCdnMgr *downloadImageCdnMgr;
@property (retain, nonatomic) MMTextStateMediaUploadCdnMgr *uploadMediaCdnMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)initData;
- (id)genTextStateTid:(id)a0 createTime:(unsigned int)a1;
- (id)genTextStateTid:(id)a0 createTime:(unsigned int)a1 modifyTime:(unsigned int)a2;
- (void)startUploadWithVideoPath:(id)a0 thumbImg:(id)a1 editVideoAttr:(id)a2 tid:(id)a3;
- (void)startUploadImageMedia:(id)a0 tid:(id)a1;
- (void)startUploadLivePhotoMedia:(id)a0 tid:(id)a1;
- (void)retryUploadMedia;
- (void)resetAndTryUploadTaskInfo;
- (void)StartPreloadImageWithItems:(id)a0 isThumb:(BOOL)a1;
- (void)StartDownloadImageWithMediaItem:(id)a0 isThumb:(BOOL)a1;
- (void)StartDownloadImageWithMediaItem:(id)a0 Priority:(BOOL)a1 isThumb:(BOOL)a2;
- (void)StartVideoPreloadWithItems:(id)a0;
- (void)StartVideoDownloadWithMediaWrap:(id)a0;
- (BOOL)StopVideoDownloadWithMediaWrap:(id)a0 downloadTaskInfo:(id *)a1;
- (BOOL)IsStreamDownloadingWithMediaItem:(id)a0;
- (void)saveTextStateMediaUploadTaskInfo:(id)a0;
- (void)setCurrentTextStateMediaUploadTaskInfoPublishType:(unsigned int)a0;
- (id)p_getTextStateMediaDataFilePath;
- (void)p_saveTextStateMediaToDataFileInternal;
- (void)p_loadTextStateMediaInternal;
- (void)didTextStateMediaUploadSuccess:(id)a0;
- (void)didTextStateMediaUploadFail:(id)a0;
- (void).cxx_destruct;

@end
