@class ACCGrootStickerRecognitionView, ACCGrootStickerViewModel, AWEVideoPublishViewModel;
@protocol ACCGrootStickerDataProvider;

@interface ACCGrootStickerHandler : ACCStickerHandler

@property (retain, nonatomic) ACCGrootStickerRecognitionView *grootStickerRecognitionView;
@property (weak, nonatomic) id<ACCGrootStickerDataProvider> dataProvider;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) ACCGrootStickerViewModel *grootViewModel;
@property (copy, nonatomic) id /* block */ editViewOnStartEdit;
@property (copy, nonatomic) id /* block */ editViewOnFinishEdit;
@property (copy, nonatomic) id /* block */ onStickerApplySuccess;
@property (copy, nonatomic) id /* block */ selectModelCallback;
@property (copy, nonatomic) id /* block */ grootStickerConfirmCallback;

+ (void)updateUserInfo:(id *)a0 repoModel:(id)a1 byCrossPlatformSlot:(id)a2;
+ (BOOL)fillCrossPlatformStickerByUserInfo:(id)a0 repository:(id)a1 context:(id)a2 sticker:(id *)a3;

- (void)addInteractionStickerInfoToArray:(id)a0 idx:(long long)a1;
- (BOOL)canHandleSticker:(id)a0;
- (void)apply:(id)a0 index:(unsigned long long)a1 doRender:(BOOL)a2;
- (void)applyAsNleVirtualSticker:(id)a0 index:(unsigned long long)a1;
- (BOOL)canRecoverSticker:(id)a0;
- (void)recoverSticker:(id)a0;
- (BOOL)canExpressSticker:(id)a0;
- (void)expressSticker:(id)a0;
- (BOOL)machingEditingGrootSticker;
- (id)addGrootStickerWithModel:(id)a0 locationModel:(id)a1 constructorBlock:(id /* block */)a2;
- (void)editTextStickerView:(id)a0;
- (id)initWithDataProvider:(id)a0 publishModel:(id)a1 viewModel:(id)a2;
- (BOOL)hasEditedGrootSticker;
- (id)addGrootStickerWithModel:(id)a0 locationModel:(id)a1 grootStickerUniqueId:(id)a2 constructorBlock:(id /* block */)a3;
- (void)setupEditViewIfNeed;
- (id)grootTrackCommonDic:(id)a0;
- (id)stickerConfig:(id)a0 locationModel:(id)a1;
- (void)addGrootInteractionStickerInfo:(id)a0 toArray:(id)a1 idx:(long long)a2;
- (BOOL)isGrootStickerAlreayAdded:(id)a0 toInteractionArray:(id)a1;
- (void)expressSticker:(id)a0 withCompletion:(id /* block */)a1;
- (id)grootStickerModelWithInfoSticker:(id)a0 interactionStickerModel:(id)a1;
- (void).cxx_destruct;
- (void)finish;
- (void)reset;

@end
