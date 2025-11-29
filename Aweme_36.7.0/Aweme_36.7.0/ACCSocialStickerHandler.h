@class ACCSocialStickerEditView, ACCSocialStickerModel, NSString, AWEVideoPublishViewModel, NSMutableArray, NSNumber;
@protocol ACCSocialStickerDataProvider;

@interface ACCSocialStickerHandler : ACCStickerHandler <ACCStickerMigrationProtocol>

@property (retain, nonatomic) ACCSocialStickerEditView *socialStickerEditView;
@property (retain, nonatomic) id<ACCSocialStickerDataProvider> dataProvider;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) NSMutableArray *autoAddedStickerViewArray;
@property (retain, nonatomic) ACCSocialStickerModel *beganEditBindingSnaphostStickerModel;
@property (retain, nonatomic) NSNumber *bboxCheckOptNum;
@property (retain, nonatomic) NSNumber *bboxZeroOptNum;
@property (copy, nonatomic) id /* block */ onTimeSelect;
@property (copy, nonatomic) id /* block */ editViewOnStartEdit;
@property (copy, nonatomic) id /* block */ editViewOnFinishEdit;
@property (copy, nonatomic) id /* block */ editViewOnFinishAnimationEdit;
@property (copy, nonatomic) id /* block */ onStickerApplySuccess;
@property (copy, nonatomic) id /* block */ removeInfoSticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (BOOL)bboxZeroOpt;
- (BOOL)bboxCheckOpt;
- (id)initWithDataProvider:(id)a0 publishModel:(id)a1;
- (void)editTextStickerView:(id)a0;
- (void)setupEditViewIfNeed;
- (id)stickerConfig:(id)a0 locationModel:(id)a1;
- (void)expressSticker:(id)a0 withCompletion:(id /* block */)a1;
- (void)addAutoAddedStickerViewArray:(id)a0;
- (id)addSocialStickerWithModel:(id)a0 locationModel:(id)a1 constructorBlock:(id /* block */)a2;
- (void)trackFinishEditWithFinalSocialStcikerModel:(id)a0;
- (id)addSocialStickerWithModel:(id)a0 locationModel:(id)a1 socialStickerUniqueId:(id)a2 constructorBlock:(id /* block */)a3;
- (void)addSocialInteractionStickerInfo:(id)a0 toArray:(id)a1 idx:(long long)a2;
- (double)updateValidScaleWithStickerId:(long long)a0 imageWidth:(double)a1 imagePixelWidth:(double)a2;
- (BOOL)isSocialStickerAlreayAdded:(id)a0 toInteractionArray:(id)a1;
- (id)socialStickerModelWithInfoSticker:(id)a0 interactionStickerModel:(id)a1;
- (void)addSocialStickerAndApplyWithModel:(id)a0 locationModel:(id)a1 socialStickerUniqueId:(id)a2;
- (void).cxx_destruct;
- (void)reset;

@end
