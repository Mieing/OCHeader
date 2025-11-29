@class WCDataItem, NSString, UIView, WCContentItemBaseView, OpenApiImageCdnUploader, NSObject, NSData;
@protocol WCCommitViewResultDelegate;

@interface WCForwardViewController : WCNewCommitViewController <WCFinderShareLiveViewDelegate, MMLiveMorphDismissTarget, WCContentItemBaseViewDelegate> {
    WCDataItem *_forwardDataItem;
    UIView *_mediaViewBkgView;
}

@property (nonatomic) BOOL enableEmptyText;
@property (retain, nonatomic) OpenApiImageCdnUploader *uploader;
@property (nonatomic) BOOL uploadFinished;
@property (retain, nonatomic) WCContentItemBaseView *mediaCellView;
@property (retain, nonatomic) NSObject *userData;
@property (nonatomic) long long iPostSource;
@property (retain, nonatomic) NSString *preSourceId;
@property (retain, nonatomic) NSString *extensionKey;
@property (weak, nonatomic) id<WCCommitViewResultDelegate> resultDelegate;
@property (retain, nonatomic) NSData *hdImageAlbumData;
@property (nonatomic) BOOL forbidPreviewFeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commonInit;
- (id)initWithDataItem:(id)a0;
- (id)initWithDataItem:(id)a0 uniqueExtensionKey:(id)a1;
- (id)initWithDataItem:(id)a0 sessionID:(id)a1;
- (void)viewDidLoad;
- (void)initTextViewContent;
- (void)addMediaView;
- (void)_addMediaViewAsNormal;
- (void)reloadShareButtons;
- (void)reloadData;
- (void)reloadType;
- (void)reloadHeadViewSubviewsY;
- (BOOL)needClearEcsShareInfoAfterLoadDraftBean;
- (void)reLayoutEcsView;
- (void)viewDidAppear:(BOOL)a0;
- (void)reloadMediaViewBkgView;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)dealloc;
- (void)OnReturn;
- (void)OnDone;
- (void)sendToTimeLine:(id)a0;
- (void)tryUploadMVImageData:(id)a0;
- (void)showLoadingView;
- (void)setupEnhanceDraftSaveController;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)didFinishCommiting;
- (void)didCancelCommiting;
- (void)prepareDataForMiaoJianAppIfNeeded;
- (void)onForwardDataItemUploaded:(id)a0;
- (void)bind3rdShareReporterIfNeeed:(id)a0;
- (id)postReportSession;
- (long long)postReportSessionEntrance;
- (void)postReportSessionWillStart;
- (void)postReportSessionWillFinishWithUploadTask:(id)a0;
- (void)postReportSessionWillFinish;
- (long long)mediaCountForMediaList:(id)a0;
- (id)getCurrentViewControllerForContentItemView:(id)a0;
- (id)getFinderLiveDismissTarget;
- (BOOL)shouldLiveUseMorphDismissForCustomKey:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })liveMorphDismissTargetFrameOnScreenForCustomKey:(id)a0 videoSize:(struct CGSize { double x0; double x1; })a1;
- (id)liveShareViewViewWithTid:(id)a0;
- (void)printSpringInfoWithDataItem:(id)a0;
- (void).cxx_destruct;

@end
