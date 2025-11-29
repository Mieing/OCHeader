@class UIColor, NSString, UIFont, UITextView, LynxFontFaceContext;

@interface BDXLynxTextView : UITextView <LynxFontFaceObserver>

@property (retain, nonatomic) NSString *placeHolder;
@property (retain, nonatomic) UIColor *placeHolderColor;
@property (retain, nonatomic) UIFont *placeHolderFont;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } placeHolderEdgeInsets;
@property (weak, nonatomic) UITextView *placeHolderTextView;
@property (nonatomic) double mPlaceHolderFontSize;
@property (nonatomic) double mPlaceHolderFontWeight;
@property (nonatomic) BOOL isCustomPlaceHolderFontSize;
@property (nonatomic) BOOL isCustomPlaceHolderFontWeight;
@property (nonatomic) long long mTextAlignment;
@property (nonatomic) BOOL mEnableRichText;
@property (retain, nonatomic) NSString *mPlaceholderFontFamilyName;
@property (nonatomic) BOOL isCustomPlaceHolderFontFamily;
@property (weak, nonatomic) LynxFontFaceContext *fontFaceContext;
@property (readonly) BOOL waitingDictationRecognition;
@property (nonatomic) BOOL pasting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getRawText;
- (void)showOrHidePlaceHolder;
- (id)getRawTextInAttributedString:(id)a0;
- (void)onFontFaceLoad;
- (void)refreshPlaceHolderFont;
- (void)syncPlaceHolderTextAligment;
- (void)syncPlaceHolderDirection:(long long)a0;
- (void)syncPlaceHolderLetterSpacing:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcCorrectCaretRectFromSuperClassCaretRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeDictationResultPlaceholder:(id)a0 willInsertResult:(BOOL)a1;
- (id)insertDictationResultPlaceholder;
- (void)copy:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (void)setTextAlignment:(long long)a0;
- (void)cut:(id)a0;
- (id)init;
- (void)paste:(id)a0;
- (long long)editingInteractionConfiguration;

@end
