@class AUCDTOFeatureEditorStickerPanel, AUCDTOFeatureEditorCustomSticker, AUCDTOFeatureEditorLyricSticker, AUCDTOFeatureEditorTextSticker;

@interface AUCDTOFeatureEditorSticker : MTLModel

@property (retain, nonatomic) AUCDTOFeatureEditorStickerPanel *panel;
@property (retain, nonatomic) AUCDTOFeatureEditorLyricSticker *lyricSticker;
@property (retain, nonatomic) AUCDTOFeatureEditorCustomSticker *customSticker;
@property (retain, nonatomic) AUCDTOFeatureEditorTextSticker *textSticker;

- (void).cxx_destruct;

@end
