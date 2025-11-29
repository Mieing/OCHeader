@class NSString;

@interface AWEACCDraftImpl : NSObject <ACCDraftProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isOnDraftBoxPage;
- (void)saveDraftWithPublishViewModel:(id)a0 video:(id)a1 scene:(long long)a2 isUserAction:(BOOL)a3 completion:(id /* block */)a4;
- (long long)draftCount;
- (BOOL)transitionStatusPendingDeleteWithDraftID:(id)a0 duration:(long long)a1 scene:(id)a2;
- (BOOL)hasDraft;
- (void)updateCoverImageWithViewModel:(id)a0 editService:(id)a1 sequenceEditService:(id)a2 completion:(id /* block */)a3;
- (id)retrieveWithDraftId:(id)a0;
- (id)draftIDKey;
- (id)draftUpdateNotificationName;
- (void)saveDraftWithPublishViewModel:(id)a0 video:(id)a1 backup:(BOOL)a2 scene:(long long)a3 isUserAction:(BOOL)a4 completion:(id /* block */)a5;
- (BOOL)transitionBackupToPendingDeleteIfNeededWithDraftID:(id)a0 scene:(id)a1;
- (void)copyDraftFrom:(id)a0 scene:(id)a1 completion:(id /* block */)a2;
- (BOOL)forbidSaveDraft:(id)a0;
- (void)transitionStatusNormalByUserWithDraftID:(id)a0 launchFrom:(unsigned long long)a1 extraInfo:(id)a2;
- (BOOL)transitionStatusNormalWithDraftID:(id)a0;
- (BOOL)saveDraft:(id)a0 error:(id *)a1;
- (BOOL)draftExistWithID:(id)a0;
- (BOOL)containsDraftWithID:(id)a0;
- (void)setCacheDirPathWithID:(id)a0;
- (void)updateCoverImageWithViewModel:(id)a0 editService:(id)a1 completion:(id /* block */)a2;
- (void)uploadDrafts:(id)a0 container:(id)a1 completion:(id /* block */)a2;
- (id)fromIDWithDraftID:(id)a0;
- (id)retrieveProjectDraftWithDraftID:(id)a0;
- (BOOL)saveProjectDrafts:(id)a0 error:(id *)a1;
- (id)retrieveBasicDraftWithDraftId:(id)a0;
- (void)recordCopyedDraftID:(id)a0 withFromID:(id)a1;
- (void)removeRedundantDraftCopyed:(id)a0;
- (void)saveInfoStickerPath:(id)a0 draftID:(id)a1 completion:(id /* block */)a2;
- (void)saveDraftWithPublishViewModel:(id)a0 video:(id)a1 backup:(BOOL)a2 presaveHandler:(id /* block */)a3 scene:(long long)a4 isUserAction:(BOOL)a5 completion:(id /* block */)a6;
- (void)updateCoverImageWithViewModel:(id)a0 editService:(id)a1 sequenceEditService:(id)a2 processBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)trackSaveDraftWithViewModel:(id)a0 from:(id)a1;
- (void)showSaveDraftToastIfNeededWithViewModel:(id)a0;
- (id)draftShouldScrollToTopKey;
- (void)clearUnreferencedResourcesWithDraftID:(id)a0 withCaller:(id)a1;
- (void)blockBackupPopupWithID:(id)a0;
- (void)clearUnreferencedResourcesOfBackupDraft:(id)a0 withCaller:(id)a1;
- (void)_slidesCaptureFrameWithEditService:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 atIndex:(long long)a2 completion:(id /* block */)a3;
- (void)p_captureFrame:(id)a0 time:(double)a1 size:(struct CGSize { double x0; double x1; })a2 completion:(id /* block */)a3;
- (id)retrieveDrafts;
- (id)retrieveEditBackUps;
- (void)retrieveNewestDraftCoverWithCompletion:(id /* block */)a0;
- (BOOL)hasPublishBackUp;
- (void)markAllPublishBackupAsDraft;
- (id)readVideoDataFromPath:(id)a0 error:(id *)a1;

@end
