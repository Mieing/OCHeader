@class UIColor, NSString, ACCTextStickerTextView, ACCModernTextModeStyleModel;
@protocol ACCStickerContainerProtocol;

@interface ACCEditTextModeRichTextStickerView : UIView <ACCTextStickerInputControllerDelegate, ACCTextViewDelegate, ACCModernTextModeStickerProtocol>

@property (retain, nonatomic) ACCTextStickerTextView *textView;
@property (copy, nonatomic) NSString *originText;
@property (retain, nonatomic) ACCModernTextModeStyleModel *styleModel;
@property (copy, nonatomic) id /* block */ didChangeSelectionBlk;
@property (copy, nonatomic) id /* block */ textDidChangeBlk;
@property (copy, nonatomic) id /* block */ shouldChangeTextBlk;
@property (nonatomic) double limitHeight;
@property (retain, nonatomic) UIColor *fillColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isTransparent) BOOL transparent;
@property (nonatomic) long long stickerId;
@property (copy, nonatomic) id /* block */ triggerDragDeleteCallback;
@property (copy, nonatomic) id /* block */ coordinateDidChange;
@property (weak, nonatomic) id<ACCStickerContainerProtocol> stickerContainer;

- (void)startEditRichState;
- (void)didEndEditRichState;
- (void)updateTextViewLimitHeight:(double)a0;
- (void)updateStyleModel:(id)a0;
- (void)didChangeSelection:(id /* block */)a0;
- (void)shouldChangeText:(id /* block */)a0;
- (double)getMaxWidth;
- (void)updateTextAlignment:(id)a0;
- (struct CGSize { double x0; double x1; })getMaxSize;
- (void)refreshTextStyle:(id)a0;
- (id)initWithText:(id)a0 styleModel:(id)a1;
- (id)getTruncatedText;
- (void).cxx_destruct;
- (void)textDidChange:(id /* block */)a0;
- (void)reload;
- (void)truncate;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textViewDidChange:(id)a0;
- (void)textViewDidChangeSelection:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setupUI;
- (void)updateText:(id)a0;
- (void)updateFrame;
- (id)getText;

@end
