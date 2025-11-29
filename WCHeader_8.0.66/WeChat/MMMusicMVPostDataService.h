@class MMMusicMVClipUploader, NSString, WCFinderCreateCoordinator, UIImage, MMMusicLiveCGIMgr, MMMusicPostingMVContext, NSMutableArray, UIViewController;

@interface MMMusicMVPostDataService : MMUserService <MMMusicMVClipUploaderDelegate, IMMMusicMVCGIService, WCFinderCreateCoordinatorDelegate, MMServiceProtocol>

@property (readonly, nonatomic) BOOL isDraftEditingMode;
@property (retain, nonatomic) NSMutableArray *pendingContext;
@property (retain, nonatomic) NSMutableArray *localDraftModels;
@property (retain, nonatomic) MMMusicPostingMVContext *currentContext;
@property (retain, nonatomic) MMMusicMVClipUploader *clipUploader;
@property (retain, nonatomic) MMMusicLiveCGIMgr *cgiMgr;
@property (nonatomic) BOOL saveAsDraft;
@property (weak, nonatomic) UIViewController *currentVC;
@property (nonatomic) BOOL isDraftEditingMode;
@property (retain, nonatomic) WCFinderCreateCoordinator *userCreator;
@property (retain, nonatomic) UIImage *customCoverImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelPublishingInViewController:(id)a0;
- (void)cancelPublishingInViewController:(id)a0 keepDraftCompletion:(id /* block */)a1 notKeepDraftCompletion:(id /* block */)a2;
- (id)commitCreationInViewController:(id)a0 customCover:(id)a1;
- (id)commitCreationAsDraft:(BOOL)a0;
- (id)realCommitCreation:(BOOL)a0;
- (void)finderCreateAccountSuccess:(id)a0;
- (void)reportFinderPostWithPostState:(unsigned long long)a0;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)createPostingContextWithBaseMVModel:(id)a0;
- (id)commitPostingContext:(BOOL)a0 customCover:(id)a1;
- (void)discardPostingContext;
- (void)addVideoForTrackAt:(unsigned long long)a0 withFinderVideo:(id)a1 clipOffsetMs:(unsigned long long)a2;
- (void)addVideoForTrackAt:(unsigned long long)a0 localVideoPath:(id)a1 clipOffsetMs:(unsigned long long)a2;
- (id)getLocalMVModelWithLocalId:(id)a0;
- (id)getLocalMVFinderItemList;
- (id)getLocalMVFinderItem:(id)a0;
- (BOOL)tryPostLocalMVModelWithLocalId:(id)a0;
- (BOOL)deleteLocalMVModelWithLocalId:(id)a0;
- (id)getDraftMVFinderItemList;
- (void)deleteAllDraft;
- (BOOL)deleteDraftWithLocalId:(id)a0 needNotify:(BOOL)a1;
- (void)handleClipFailWithVideoLocalId:(id)a0;
- (void)postPendingContext;
- (void)postMVIfReady:(id)a0;
- (void)postLocalVideo:(id)a0;
- (void)postLocalPic:(id)a0;
- (void)deletePostingContext:(id)a0;
- (void)syncLocalModelToMMKV;
- (void)syncDraftToMMKV;
- (id)findContextContaisUploadingClipWithId:(id)a0;
- (void)updateFeatureListForMVModel:(id)a0 completion:(id /* block */)a1;
- (void)fillFeatureListWithFinderDataItem:(id)a0 trackItem:(id)a1;
- (void)onClipUploadSuccessWithClipId:(id)a0 finderDataItem:(id)a1;
- (void)onClipUploadFailWithClipId:(id)a0;
- (void)onMusicMVCGISerivcePostMVSuccess:(id)a0;
- (void)onMusicMVCGISerivcePostMVFailed:(id)a0;
- (void).cxx_destruct;

@end
