@class UIColor, NSString, NSArray, AWEIMShareAdditionTextViewTrackInfo;

@interface AWEIMShareImpl.ShareAdditionTextView : DUXVisualEffectView <AWEIMShareAdditionTextViewProtocol, AWEIMShareInputEmoticonToolBarViewDelegate, UITextDragDelegate, UITextViewDelegate> {
    void /* unknown type, empty encoding */ uiConfig;
    void /* unknown type, empty encoding */ delegateList;
    void /* unknown type, empty encoding */ currentInputViewTextLength;
    void /* unknown type, empty encoding */ currentButtonType;
    void /* unknown type, empty encoding */ $__lazy_storage_$_emoticonToolBar;
    void /* unknown type, empty encoding */ emoticonBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_separatorLine;
    void /* unknown type, empty encoding */ $__lazy_storage_$_emoticonSelection;
    void /* unknown type, empty encoding */ $__lazy_storage_$_emoticonStack;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_previewImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_buttonStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inputBackgroundView;
    void /* unknown type, empty encoding */ keyboardShowNoti;
    void /* unknown type, empty encoding */ keyboardHideNoti;
}

@property (nonatomic, copy) NSString *currentText;
@property (nonatomic, readonly) NSArray *ignoreDismissArea;
@property (nonatomic, weak) void /* function */ uiDelegate;
@property (nonatomic) unsigned long long currentInputMode;
@property (nonatomic, readonly) AWEIMShareAdditionTextViewTrackInfo *trackInfo;
@property (nonatomic, readonly) NSArray *conflictGestures;
@property (nonatomic, retain) UIColor *backgroundColor;

- (void)setEnterFrom:(id)a0;
- (BOOL)canShowEmoticonBtn;
- (id)currentSelectedEmoticon;
- (void)updateButtons:(id)a0;
- (void)updatePreviewImageWithHandler:(id /* block */)a0;
- (void)addDelegate:(id)a0;
- (double)minHeight;
- (void)updateWithConfig:(id)a0;
- (void)endEditing;
- (void)updateButtonLayout;
- (void)didClickedEmoticonControlButtonToStatus:(unsigned long long)a0;
- (void)didSelectEmoticon:(id)a0 belongToTheme:(id)a1 selectedView:(id)a2;
- (id)textDraggableView:(id)a0 itemsForDrag:(id)a1;
- (BOOL)textView:(id)a0 shouldInteractWithTextAttachment:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)textViewDidChange:(id)a0;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)didMoveToSuperview;
- (id)initWithCoder:(id)a0;
- (id)initWithEffect:(id)a0;
- (void)dealloc;

@end
