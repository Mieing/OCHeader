@class NSString, AWEGCPXPlayShareDownloadViewController, IESGCPApi, NSTimer;

@interface IESGCPXPlayDownloadShare_Douyin : NSObject <AWEPublishTaskMessage, IESGCPXPlayDownloadShareService>

@property (retain, nonatomic) AWEGCPXPlayShareDownloadViewController *loadingView;
@property (nonatomic) BOOL hasClickShare;
@property (nonatomic) BOOL hasDownload;
@property (nonatomic) BOOL hasPublishMessage;
@property (nonatomic) unsigned long long recordState;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) IESGCPApi *api;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic, getter=isCancelPublish) BOOL cancelPublish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 didBeginWithInfo:(id)a1;
- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)openEditComposerPageWithPicPath:(id)a0 extraParams:(id)a1;
- (void)requestAnchorData:(id /* block */)a0;
- (id)createEditorComposerWithFilePath:(id)a0 fileType:(long long)a1;
- (id)createPublishComposer:(id)a0 shouldLanding:(BOOL)a1;
- (id)createBizData;
- (id)mergeTrackDataWithJumpEditorExtraTrack:(id)a0;
- (void)registePublishTaskMessage;
- (void)trueShareWithParams:(id)a0 coverImagePath:(id)a1;
- (void)unRegisterPublishTaskMessage;
- (void)openEditComposerPageWithVideoPath:(id)a0 extraParams:(id)a1;
- (void)videoProcessingIfNeededWithFilePath:(id)a0 coverImagePath:(id)a1 completion:(id /* block */)a2;
- (void)downloadVideoWithURL:(id)a0 initProgress:(long long)a1 completion:(id /* block */)a2;
- (BOOL)_isEnterFromMusicRoulette;
- (void)trackVideoProcessingEvent:(id)a0 withExtraInfo:(id)a1;
- (long long)strategyFromEditorMusic:(id)a0;
- (long long)applyTypeFromEditorEditorMusic:(id)a0;
- (id)createPublishComposer:(id)a0;
- (void)clickShareWithVideoCoverImage:(id)a0;
- (void)acquirePlayRecordUrl:(id)a0 size:(long long)a1;
- (void)blockDownloadWithError:(id)a0;
- (void)shareImageToFeeds:(id)a0;
- (void)shareImageToFriends:(id)a0 completion:(id /* block */)a1;
- (void)acquirePlayRecord:(BOOL)a0 url:(id)a1 size:(long long)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clean;

@end
