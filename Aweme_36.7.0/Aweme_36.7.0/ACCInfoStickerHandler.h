@class ACCStickerGesturePlayStateManager, AWEInfoStickerManager, NSString, ACCEditStickerSelectTimeManager, AWEVideoPublishViewModel;
@protocol AWECoverEditorTextServiceProtocol, ACCEditTransitionServiceProtocol, ACCSequenceEditServiceProtocol, ACCDraftAutoSaveProtocol, ACCStickerServiceProtocol, ACCStudioPerfUtilServiceProtocol, ACCEditServiceProtocol;

@interface ACCInfoStickerHandler : ACCStickerHandler <ACCStickerMigrationProtocol>

@property (retain, nonatomic) ACCEditStickerSelectTimeManager *selectTimeManager;
@property (retain, nonatomic) AWEInfoStickerManager *stickerManager;
@property (retain, nonatomic) ACCStickerGesturePlayStateManager *playStateManager;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (weak, nonatomic) id<AWECoverEditorTextServiceProtocol> coverEditTextService;
@property (weak, nonatomic) id<ACCDraftAutoSaveProtocol> draftSaveService;
@property (weak, nonatomic) id<ACCStudioPerfUtilServiceProtocol> perfService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (copy, nonatomic) id /* block */ recoveryImageAlbumSticker;
@property (copy, nonatomic) id /* block */ recoveryInfoSticker;
@property (copy, nonatomic) id /* block */ stickerMirrorBlock;
@property (copy, nonatomic) id /* block */ deselectWhenNotDisplayBlk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateUserInfo:(id *)a0 repoModel:(id)a1 byCrossPlatformSlot:(id)a2;
+ (BOOL)fillCrossPlatformStickerByUserInfo:(id)a0 repository:(id)a1 context:(id)a2 sticker:(id *)a3;
+ (unsigned long long)infoStickerTypeFor:(id)a0;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)addInteractionStickerInfoToArray:(id)a0 idx:(long long)a1;
- (BOOL)isImageAlbumEdit;
- (double)stickerOriginScaleWithStickerSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeWithStickerId:(long long)a0;
- (BOOL)canRecoverSticker:(id)a0;
- (void)recoverSticker:(id)a0;
- (BOOL)canExpressSticker:(id)a0;
- (void)expressSticker:(id)a0 onCompletion:(id /* block */)a1;
- (void)expressSticker:(id)a0;
- (void)updateSticker:(long long)a0 withNewId:(long long)a1;
- (double)extraScaleForStickerContainer:(id)a0;
- (BOOL)canRecoverImageAlbumStickerModel:(id)a0;
- (void)recoverStickerForContainer:(id)a0 imageAlbumStickerModel:(id)a1;
- (long long)addInfoStickerWithContext:(id)a0 userInfoConstructor:(id /* block */)a1 constructor:(id /* block */)a2 appliedHandler:(id /* block */)a3 onCompletion:(id /* block */)a4;
- (void)checkIfStaticInfoStickerWithStrickerId:(long long)a0;
- (void)modernEditStickerDuration:(id)a0;
- (void)applyContainerSticker:(long long)a0 context:(id)a1 configConstructor:(id /* block */)a2 onCompletion:(id /* block */)a3;
- (void)clearHandlerWhenTransfer;
- (void)recoveryOneInfoSticker:(id)a0 stickerContainer:(id)a1 configConstructor:(id /* block */)a2 onCompletion:(id /* block */)a3;
- (long long)addInfoStickerWithContext:(id)a0 infoStickerConfig:(id)a1 userInfoConstructor:(id /* block */)a2 constructor:(id /* block */)a3 appliedHandler:(id /* block */)a4 onCompletion:(id /* block */)a5;
- (id)configInfoSticker:(long long)a0 context:(id)a1 stickerSize:(struct CGSize { double x0; double x1; })a2 initialContainerViewScale:(id)a3 configBlock:(id /* block */)a4 stickerContainer:(id)a5 onCompletion:(id /* block */)a6;
- (double)minStickerDuration;
- (BOOL)enableStickerDragOptimize;
- (void)highlightSticker:(id)a0 allStickers:(id)a1;
- (void).cxx_destruct;

@end
