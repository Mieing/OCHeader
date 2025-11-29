@class AWEVideoPublishViewModel, ACCEditTextModeRichTextStickerView;
@protocol ACCEditModernTextModeActionDelegate;

@interface ACCEditTextModeStickerHandler : ACCStickerHandler

@property (retain, nonatomic) ACCEditTextModeRichTextStickerView *richTextSticker;
@property (weak, nonatomic) id<ACCEditModernTextModeActionDelegate> delegate;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;

- (void)addInteractionStickerInfoToArray:(id)a0 idx:(long long)a1;
- (BOOL)canHandleSticker:(id)a0;
- (void)apply:(id)a0 index:(unsigned long long)a1 doRender:(BOOL)a2;
- (BOOL)canRecoverSticker:(id)a0;
- (void)recoverSticker:(id)a0;
- (void)addInteractionStickerInfoToArray:(id)a0 idx:(long long)a1 inContainerView:(id)a2;
- (void)addTextModeRichSticker:(id)a0 styleModel:(id)a1 locationModel:(id)a2;
- (void)removeTextModeSticker;
- (void)addTextModeTemplateSticker:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mediaInfo:(id)a1;
- (void)mergeTextToBackground;
- (void)startEditState;
- (void)didEndEditState;
- (void)updateTextStyle:(id)a0;
- (id)mergeTextToCaptureImage:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)updateText:(id)a0;
- (id)getText;

@end
