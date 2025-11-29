@class AUCDTOFeatureEditorThumb, AUCDTOFeatureEditorFilter, AUCDTOFeatureEditorEffect, AUCDTOFeatureEditorAutoCaption, AUCDTOFeatureEditorHDR, AUCDTOFeatureEditorMusic, AUCDTOFeatureToolBar, AUCDTOFeatureEditorClip, AUCDTOFeatureEditorAIGCEffect, AUCDTOFeatureEditorCanvas, AUCDTOFeatureEditorSticker, AUCDTOFeatureEditorVoiceChanger, AUCDTOFeatureEditorQuickSave;

@interface AUCDTOFeatureEditor : MTLModel

@property (retain, nonatomic) AUCDTOFeatureEditorMusic *music;
@property (retain, nonatomic) AUCDTOFeatureEditorVoiceChanger *voiceChanger;
@property (retain, nonatomic) AUCDTOFeatureEditorSticker *sticker;
@property (retain, nonatomic) AUCDTOFeatureEditorCanvas *canvas;
@property (retain, nonatomic) AUCDTOFeatureEditorFilter *filter;
@property (retain, nonatomic) AUCDTOFeatureEditorHDR *HDR;
@property (retain, nonatomic) AUCDTOFeatureEditorQuickSave *quickSave;
@property (retain, nonatomic) AUCDTOFeatureEditorClip *clip;
@property (retain, nonatomic) AUCDTOFeatureEditorAutoCaption *autoCaption;
@property (retain, nonatomic) AUCDTOFeatureEditorEffect *effect;
@property (retain, nonatomic) AUCDTOFeatureEditorThumb *thumb;
@property (retain, nonatomic) AUCDTOFeatureEditorAIGCEffect *AIGCEffect;
@property (retain, nonatomic) AUCDTOFeatureToolBar *toolBar;

- (void).cxx_destruct;

@end
