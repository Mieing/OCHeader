@class NSDate, NSString, AWEPOICommentTrackParams, AWEVideoPublishViewModel, NSDictionary, AWEPOIUGCCreationService, NSMutableArray, NSMutableSet;
@protocol ACCMusicModelProtocol;

@interface AWEPOIUGCDataManager : NSObject

@property (nonatomic) BOOL needEdit;
@property (copy, nonatomic) NSString *musicName;
@property (retain, nonatomic) NSDictionary *logParamsDict;
@property (retain, nonatomic) AWEPOICommentTrackParams *trackParams;
@property (retain, nonatomic) NSMutableArray *commentImageList;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (nonatomic) long long albumImageCount;
@property (copy, nonatomic) NSString *currentDraftID;
@property (nonatomic) BOOL isSubmit;
@property (retain, nonatomic) NSMutableArray *requestImageList;
@property (nonatomic) unsigned long long syncImageState;
@property (retain, nonatomic) NSMutableSet *draftTasks;
@property (retain, nonatomic) NSDate *startRequestTime;
@property (retain, nonatomic) id<ACCMusicModelProtocol> autoMusicModel;
@property (nonatomic) BOOL useOpenCreation;
@property (retain, nonatomic) AWEPOIUGCCreationService *creationService;

+ (id)sharedManager;

- (void)fetchAutoMusicModel;
- (void)injectCommentPostDataWithFileList:(id)a0 musicID:(id)a1 musicName:(id)a2 bridgeContext:(id)a3;
- (void)setupTrackParams:(id)a0;
- (void)__showCamaraWithCount:(long long)a0 needMusic:(BOOL)a1 defaultShoot:(BOOL)a2 showQuickShoot:(BOOL)a3 showQuickAlbum:(BOOL)a4 hideEditPage:(BOOL)a5 logParamsDict:(id)a6 bridgeContext:(id)a7 complete:(id /* block */)a8;
- (void)__showImagePickerWithCount:(long long)a0 needMusic:(BOOL)a1 logParamsDict:(id)a2 isUseImageEdit:(BOOL)a3 bridgeContext:(id)a4 complete:(id /* block */)a5;
- (void)fileUploadSuccess:(id)a0 bridgeContext:(id)a1;
- (void)fileUploadFail:(id)a0 bridgeContext:(id)a1;
- (id)getThumnailImageList:(id)a0;
- (long long)imageIndexOf:(id)a0;
- (void)deleteImageAtIndex:(long long)a0 imageID:(id)a1 useOpenCreation:(BOOL)a2;
- (void)mergeMusic:(id)a0 into:(id)a1;
- (void)requestAlbumImages:(id)a0 bridgeContext:(id)a1 completion:(id /* block */)a2;
- (void)exportVideoPublishViewModelWithImages:(id)a0 withPaths:(id)a1;
- (void)trackFinishSyncImageFromWorkWithSuccessCount:(long long)a0 failCount:(long long)a1;
- (id)saveImageToTempDraft:(id)a0;
- (void)exportVideoPublishViewModelWithImages:(id)a0 withPaths:(id)a1 complete:(id /* block */)a2;
- (void)infiniExportVideoPublishViewModelWithImages:(id)a0 withPaths:(id)a1 complete:(id /* block */)a2;
- (void)trackRequestTime:(id)a0 imageCount:(long long)a1;
- (void)syncPublishModel:(id)a0;
- (void)trackDraftImageActionWithStatus:(BOOL)a0 type:(id)a1 commentID:(id)a2 picCount:(long long)a3 musicID:(id)a4;
- (void)saveTempDraftIds;
- (BOOL)isOneHourAgo:(id)a0 than:(id)a1;
- (void)showUGCToolWithCount:(long long)a0 logParamsDict:(id)a1 defaultTab:(long long)a2 videoConfig:(id)a3 bridgeContext:(id)a4 complete:(id /* block */)a5;
- (void)showUGCToolWithCount:(long long)a0 logParamsDict:(id)a1 isUseCamera:(BOOL)a2 isUseImageEdit:(BOOL)a3 needMusic:(BOOL)a4 defaultShoot:(BOOL)a5 showQuickShoot:(BOOL)a6 showQuickAlbum:(BOOL)a7 hideEditPage:(BOOL)a8 useOpenCreation:(BOOL)a9 supportVideo:(BOOL)a10 videoConfig:(id)a11 bridgeContext:(id)a12 complete:(id /* block */)a13;
- (void)previewImageAtIndex:(long long)a0 imageID:(id)a1 logParamsDict:(id)a2 isUseImageEdit:(BOOL)a3 useOpenCreation:(BOOL)a4 bridgeContext:(id)a5 complete:(id /* block */)a6;
- (void)moveImageFromIndex:(long long)a0 toIndex:(long long)a1 useOpenCreation:(BOOL)a2 complete:(id /* block */)a3;
- (void)clickAwemeWithLogParamsDict:(id)a0 isUseImageEdit:(BOOL)a1 hideEditToolbar:(BOOL)a2 editPageToast:(id)a3 useOpenCreation:(BOOL)a4 bridgeContext:(id)a5 complete:(id /* block */)a6;
- (void)publishWithRateID:(id)a0 comment:(id)a1 rateGrade:(id)a2 poiID:(id)a3 poiName:(id)a4 selfPageShow:(id)a5 noDefaultLanding:(BOOL)a6 useOpenCreation:(BOOL)a7 logParamsDict:(id)a8 challengeID:(id)a9 tabId:(id)a10 toCommentID:(id)a11 bridgeContext:(id)a12;
- (void)requestAlbumImages:(id)a0 commentID:(id)a1 supportRecoverDraft:(BOOL)a2 useOpenCreation:(BOOL)a3 bridgeContext:(id)a4 completion:(id /* block */)a5;
- (void)downloadAlbumImages:(id)a0 bridgeContext:(id)a1 completion:(id /* block */)a2;
- (void)oldExportVideoPublishViewModelWithImages:(id)a0 complete:(id /* block */)a1;
- (void)getPresetDataWithCommentID:(id)a0 supportRecoverDraft:(BOOL)a1 useOpenCreation:(BOOL)a2 complete:(id /* block */)a3;
- (void)handleCommentDraftPictureWithCommentID:(id)a0 action:(id)a1 isSubmit:(BOOL)a2 useOpenCreation:(BOOL)a3 complete:(id /* block */)a4;
- (void)clearWithComplete:(id /* block */)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
