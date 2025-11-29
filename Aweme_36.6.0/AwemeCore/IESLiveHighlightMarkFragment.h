@class NSString, IESLiveHighlightMarkDetailViewModel, NSOperationQueue, IESLiveHighlightMarkApi, IESLiveHighlightRecordView;

@interface IESLiveHighlightMarkFragment : IESLiveRoomComponent <IESLiveHighlightMarkDetailViewDelegate, IESLiveHighlightRecordViewDelegate, IESLiveHighlightRecordPublishViewDelegate, IESLiveMessageInteractionAssetUpdateAction>

@property (retain, nonatomic) IESLiveHighlightMarkDetailViewModel *viewModel;
@property (retain, nonatomic) IESLiveHighlightMarkApi *api;
@property (retain, nonatomic) NSOperationQueue *downloadQueue;
@property (retain, nonatomic) IESLiveHighlightRecordView *recordView;
@property (nonatomic) BOOL enableAnchorMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentWillDisappear;
- (void)componentOrientationChanged:(long long)a0;
- (void)comp_applicationWillResignActive;
- (void)startRecord;
- (void)highlightDataUpdate:(id)a0;
- (void)addExpendedEntryItem;
- (void)createHighlightFileDirectory;
- (void)didTapPublishBtnWithItem:(id)a0 loadingCompletion:(id /* block */)a1;
- (void)didTapRecordBtn;
- (void)didSelectedHighlightItem:(id)a0;
- (void)stopRecordWithErrorReason:(id)a0;
- (void)trackRecordStartWithRecordID:(long long)a0;
- (void)showRecordPublishViewWithItem:(id)a0;
- (void)openPreviewViewWithItem:(id)a0;
- (void)openEditorWithURL:(id)a0 shootWay:(id)a1 highlightItem:(id)a2 eventParams:(id)a3 createParams:(id)a4;
- (void)downloadTsUrls:(id)a0 completion:(id /* block */)a1;
- (void)trackPublishClickWithItem:(id)a0;
- (void)saveMetaDataWithVideoURL:(id)a0 startTime:(long long)a1 endTime:(long long)a2 completion:(id /* block */)a3;
- (void)saveVideoToAlbumFromURL:(id)a0;
- (void)didRecordFinished;
- (void)didTapPublishViewSaveDraftBtnWithItem:(id)a0;
- (void)didTapPublishViewPublishBtnWithItem:(id)a0 completion:(id /* block */)a1;
- (void)didTapPublishViewDownloadBtnWithItem:(id)a0;
- (void)didTapPublishViewPreviewViewWithItem:(id)a0;
- (void).cxx_destruct;

@end
