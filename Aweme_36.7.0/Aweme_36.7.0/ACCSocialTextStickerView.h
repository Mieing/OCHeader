@class ACCTextStickerTextView, NSCache;

@interface ACCSocialTextStickerView : ACCTemplateTextStickerView

@property (retain, nonatomic) ACCTextStickerTextView *textView;
@property (readonly, nonatomic) double availableHeight;
@property (readonly, nonatomic) double availableWidth;
@property (nonatomic) BOOL hasTrackedForInputText;
@property (retain, nonatomic) NSCache *maxFontSizeCache;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } textViewContentInset;

- (void)updateDisplay;
- (struct CGSize { double x0; double x1; })textContentSize;
- (void)updateEditingFrames;
- (double)adjustedFontSize:(double)a0 scale:(double)a1;
- (void)updateTipsDisplayWith:(id)a0;
- (void)resetTextViewAlignment;
- (id)attributesWithTextModel:(id)a0 fontSize:(double)a1;
- (id)colorModelWithTextModel:(id)a0;
- (struct CGPoint { double x0; double x1; })editingCenter;
- (double)maxAvailableFontSizeForSocialText;
- (void).cxx_destruct;
- (void)updateFrame;

@end
