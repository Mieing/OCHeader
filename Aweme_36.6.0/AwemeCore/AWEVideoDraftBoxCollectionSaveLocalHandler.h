@class AWEStudioIdleTimerHandler, NSArray, UIView, AWEVideoDraftBoxCollectionViewController, AWEVideoDraftBoxCollectionDataSource;
@protocol ACCPublishSaveLocalBatchTask, ACCProcessViewProtcol, AWEVideoDraftBoxCollectionSaveLocalDelegate;

@interface AWEVideoDraftBoxCollectionSaveLocalHandler : NSObject

@property (weak, nonatomic) AWEVideoDraftBoxCollectionViewController *vc;
@property (weak, nonatomic) AWEVideoDraftBoxCollectionDataSource *dataSource;
@property (retain, nonatomic) AWEStudioIdleTimerHandler *idleTimerHandler;
@property (retain, nonatomic) UIView<ACCProcessViewProtcol> *loadingView;
@property (retain, nonatomic) id<ACCPublishSaveLocalBatchTask> batchTask;
@property (nonatomic) long long finishedCount;
@property (nonatomic) long long totalCount;
@property (retain, nonatomic) NSArray *lastSelectedDraftIDs;
@property (weak, nonatomic) id<AWEVideoDraftBoxCollectionSaveLocalDelegate> delegate;

- (void)p_cancel;
- (void)p_checkPhotoLibraryPermissionWithFinish:(id /* block */)a0;
- (void)p_handleProgress:(double)a0;
- (void)p_handleResult:(id)a0;
- (void)p_trackDownload;
- (id)initWithDraftVC:(id)a0 dataSource:(id)a1;
- (void)p_updateWithEditing:(BOOL)a0;
- (void)p_cleanTaskIfNeeded;
- (BOOL)p_disableSaveLocal:(id *)a0;
- (void)p_saveLocal;
- (id)p_customProgressText:(long long)a0 totalCount:(long long)a1;
- (id /* block */)p_draftBoxSaveLocalConfigurationProvider;
- (void)p_trackBatchDownloadStatus:(id)a0 duration:(double)a1;
- (void)p_trackDownloadCancel;
- (void)saveLocal;
- (void).cxx_destruct;
- (void)dealloc;

@end
