@class ACCStickerGesturePlayStateManager, NSString, UIView, AWEEditStickerHintView, ACCModernPOIStickerSwitchView;
@protocol ACCTextLoadingViewProtcol, AEKMegaEditor, ACCStickerServiceProtocol, ACCPOIStickerDataProvider;

@interface ACCModernPOIStickerHandler : ACCStickerHandler <ACCModernPOIStickerSwitchViewDelegate, ACCModernPOIStickerViewHelperProtocol, ACCStickerMigrationProtocol, ACCDraftResourceRecoverProtocol>

@property (retain, nonatomic) AWEEditStickerHintView *poiHintView;
@property (retain, nonatomic) ACCModernPOIStickerSwitchView *editView;
@property (retain, nonatomic) ACCStickerGesturePlayStateManager *stickerPlayStateManager;
@property (weak, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;
@property (copy, nonatomic) NSString *currentPOIID;
@property (copy, nonatomic) NSString *currentLoadingTag;
@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCPOIStickerDataProvider> dataProvider;
@property (copy, nonatomic) id /* block */ onEditPoiInfo;
@property (copy, nonatomic) id /* block */ editViewOnStartEdit;
@property (copy, nonatomic) id /* block */ editViewOnFinishEdit;
@property (copy, nonatomic) id /* block */ editViewOnFinishAnimationEdit;
@property (copy, nonatomic) id /* block */ onStickerApplySuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateUserInfo:(id *)a0 repoModel:(id)a1 byCrossPlatformSlot:(id)a2;
+ (BOOL)fillCrossPlatformStickerByUserInfo:(id)a0 repository:(id)a1 context:(id)a2 sticker:(id *)a3;
+ (id)draftResourceIDsToDownloadForPublishViewModel:(id)a0;
+ (void)updateWithDownloadedEffects:(id)a0 publishViewModel:(id)a1 completion:(id /* block */)a2;
+ (id)adaptedLocationWithInteractionInfo:(id)a0 player:(id)a1 isDraftBefore710:(BOOL)a2;
+ (BOOL)containsModernPOISticker:(id)a0;
+ (BOOL)useModernPOIStickerStyle:(id)a0;

- (void)addInteractionStickerInfoToArray:(id)a0 idx:(long long)a1;
- (BOOL)canHandleSticker:(id)a0;
- (BOOL)canRecoverSticker:(id)a0;
- (void)recoverSticker:(id)a0;
- (BOOL)canExpressSticker:(id)a0;
- (void)expressSticker:(id)a0;
- (void)updateSticker:(long long)a0 withNewId:(long long)a1;
- (void)expressSticker:(id)a0 withCompletion:(id /* block */)a1;
- (void)addPOIStickerWithPOIModel:(id)a0 locationModel:(id)a1 recoverSticker:(id)a2 userInfoConstructor:(id /* block */)a3 constructorBlock:(id /* block */)a4;
- (id)poiModelWithInteractionModel:(id)a0;
- (void)addPOIInteractionStickerInfo:(id)a0 toArray:(id)a1 idx:(long long)a2;
- (void)generatePOIStickerWithPOIModel:(id)a0 locationModel:(id)a1 recoverSticker:(id)a2 userInfoConstructor:(id /* block */)a3 constructorBlock:(id /* block */)a4;
- (void)markAndRemovePOIHint;
- (void)editPOISticker:(id)a0;
- (void)dismissEditStickerViewStyle:(BOOL)a0;
- (void)updatePOIStickerLocationWithStickerId:(long long)a0 model:(id)a1;
- (void)updatePOISticker:(id)a0;
- (void)trackEvent:(id)a0 stickerPOIView:(id)a1;
- (void)editStickerViewStyle:(id)a0 didSelectIndex:(long long)a1 completionBlock:(id /* block */)a2;
- (void)selectPOIForEditStickerViewStyle;
- (void)clearPOIStatus;
- (void)addPOIStickerWithPOIModel:(id)a0;
- (void)showPOIHintOnStickerView:(id)a0 useMulti:(BOOL)a1;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (id)currentPlayer;

@end
