@class NSString, IESGCPApi;

@interface IESGCPXPlayVideoUploadService_Douyin : NSObject <AWEPublishTaskMessage, IESGCPVideoUploadService>

@property (retain, nonatomic) IESGCPApi *api;
@property (nonatomic) BOOL hasPublishMessage;
@property (nonatomic) BOOL hasAlreadyClickUploadBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 didAppendWithInfo:(id)a1;
- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)startWithComposerModel:(id)a0;
- (void)requestAnchorData:(id /* block */)a0;
- (id)createBizData;
- (id)mergeTrackDataWithJumpEditorExtraTrack:(id)a0;
- (void)registePublishTaskMessage;
- (void)unRegisterPublishTaskMessage;
- (BOOL)_isEnterFromMusicRoulette;
- (long long)strategyFromEditorMusic:(id)a0;
- (long long)applyTypeFromEditorEditorMusic:(id)a0;
- (id)createPublishComposer:(id)a0;
- (void)trueOpenAlbumComposer:(id)a0;
- (id)createComposeModelWithExtra:(id)a0;
- (id)createEditorComposer;
- (void)openAlbumComposer;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)clean;

@end
