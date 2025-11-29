@class NSString;

@interface AWEAIGCDraftUtils : NSObject <AWEAIGCDraftUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)saveVidePathToDraftWitPath:(id)a0 toTargetPath:(id)a1;
+ (void)updateAIGCDraft:(id)a0 withState:(long long)a1 completion:(id /* block */)a2;
+ (void)updateFailAIGCDraft:(id)a0 failCoverImagePath:(id)a1 completion:(id /* block */)a2;
+ (void)saveAIGCDoingTypeDraft:(id)a0 coverImage:(id)a1 markDraftFlowStepAsPublish:(BOOL)a2 completion:(id /* block */)a3;
+ (void)saveAIGCDoneDraftWithRenderImageLocalPath:(id)a0 renderImageDownLoadPath:(id)a1 draftID:(id)a2 stickerID:(id)a3 effectExtra:(id)a4 extraInfo:(id)a5 completion:(id /* block */)a6;
+ (void)updateFailedAIGCDraft:(id)a0 withCoverImage:(id)a1 scene:(long long)a2 completion:(id /* block */)a3;
+ (void)saveAIGCDoneDraftWithDraftID:(id)a0 changeBlock:(id /* block */)a1 extraInfo:(id)a2 completion:(id /* block */)a3;
+ (void)saveAIGCDoneDraftWithDraftID:(id)a0 asyncChangeBlock:(id /* block */)a1 extraInfo:(id)a2 completion:(id /* block */)a3;
+ (void)saveAIDoneDraftWithDraftID:(id)a0 taskModel:(id)a1 businessResult:(id)a2 completion:(id /* block */)a3;


@end
