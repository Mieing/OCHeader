@class NSMutableDictionary, AWEVideoPublishViewModel, NSNumber, ACCTextStickerViewModel;
@protocol AEKMegaEditor, AEKNewTextStickerEditor, ACCTextStickerServiceProtocol, AWEEditKit, AEKTextStickerEditor, AEKSimpleTextStickerEditor, ACCTextStickerDataProvider, AEKPreviewEditor, AEKRuntimeStickerEditor;

@interface ACCAETextStickerHandler : ACCStickerHandler

@property (retain, nonatomic) ACCTextStickerViewModel *viewModel;
@property (retain, nonatomic) NSMutableDictionary *tempStickerIds;
@property (retain, nonatomic) NSMutableDictionary *stickerStashesMap;
@property (nonatomic) double applyStart;
@property (nonatomic) unsigned long long stickerCount;
@property (weak, nonatomic) id<AEKNewTextStickerEditor> textNewStickerEditor;
@property (weak, nonatomic) id<AEKTextStickerEditor> textStickerEditor;
@property (weak, nonatomic) id<AEKSimpleTextStickerEditor> simpleTextStickerEditor;
@property (weak, nonatomic) id<AEKPreviewEditor> preview;
@property (weak, nonatomic) id<AEKRuntimeStickerEditor> runtimeSticker;
@property (retain, nonatomic) NSNumber *bboxCheckOptNum;
@property (retain, nonatomic) NSNumber *bboxZeroOptNum;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (weak, nonatomic) id<AWEEditKit> editKit;
@property (weak, nonatomic) id<ACCTextStickerDataProvider> dataProvider;
@property (weak, nonatomic) id<ACCTextStickerServiceProtocol> textStickerService;

- (void)addInteractionStickerInfoToArray:(id)a0 idx:(long long)a1;
- (void)doRender;
- (struct CGSize { double x0; double x1; })sizeWithStickerId:(id)a0;
- (id)textsArrayInString;
- (BOOL)canHandleSticker:(id)a0;
- (void)apply:(id)a0 index:(unsigned long long)a1 doRender:(BOOL)a2;
- (BOOL)canRecoverSticker:(id)a0;
- (void)recoverSticker:(id)a0;
- (BOOL)canExpressSticker:(id)a0;
- (void)expressSticker:(id)a0 onCompletion:(id /* block */)a1;
- (void)expressSticker:(id)a0;
- (id)baseTextStickerWithId:(id)a0;
- (void)stickerApplySuccessWithIsTextTemplate:(BOOL)a0;
- (void)trackApplyStickerWithNormalTextCount:(unsigned long long)a0;
- (double)updateValidScaleWithSticker:(id)a0 imageWidth:(double)a1 imagePixelWidth:(double)a2;
- (void)verifyTTSIfNeededWithSticker:(id)a0;
- (void)addTextInteractionStickerInfo:(id)a0 toArray:(id)a1 idx:(long long)a2;
- (id)textStickerViews;
- (id)textStickerContent:(id)a0;
- (id)ttsUUIDWithAsset:(id)a0;
- (BOOL)bboxZeroOpt;
- (BOOL)bboxCheckOpt;
- (id)initWithRepository:(id)a0 textStickerViewModel:(id)a1;
- (void).cxx_destruct;
- (void)finish;
- (void)reset;

@end
