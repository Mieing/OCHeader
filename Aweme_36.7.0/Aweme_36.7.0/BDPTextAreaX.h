@class UITextView, NSString, BDPTextAreaXModel, UIView, BDPUniqueID;

@interface BDPTextAreaX : UITextView <UITextViewDelegate, UITextPasteDelegate, BDPTCRenderDelegate, BDPKeyboardResponderDelegate> {
    BOOL _canRetryBecomeFirstResponder;
    BOOL _needBecomeFirstResponderWhenRerender;
    BOOL _didUpdateStyleWithValue;
    long long _keyboardProgress;
    BDPUniqueID *_uniqueID;
    BDPTextAreaXModel *_model;
    double _height;
    double _textHeight;
    UITextView *_placeholderTextView;
    UITextView *_virtualTextView;
    double _initTimestamp;
    long long _focusCounts;
    long long _textDidChangeCounts;
    long long _componentLifeDuration;
    double _becomeFirstResponderTimeStamp;
    double _keyBoardShowTimeStamp;
    NSString *_keyboardShowReason;
    NSString *_keyboardHideReason;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalPageFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalRootNavFrame;
}

@property (weak, nonatomic) UIView *page;
@property (nonatomic) long long pageID;
@property (copy, nonatomic) NSString *componentID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissKeyBoard;
- (void)onKeyboardWillShow:(id)a0;
- (void)onKeyboardWillHide:(id)a0;
- (id)initWithModel:(id)a0 uniqueID:(id)a1;
- (void)onKeyboardWillChange:(id)a0;
- (void)setupViewWithModel:(id)a0;
- (id)keyboardService;
- (void)sendNeededTrackerEvents;
- (void)updateCursorAndSelection;
- (void)sendKeyboardEvent;
- (void)onKeyboardHeightChange:(id)a0;
- (void)sendRenderErrorEvent;
- (void)bdp_tc_embed_render;
- (BOOL)bdp_tc_embed_canResignFirstResponder;
- (double)bdp_tc_embed_getLatestBecomeFirstResponderTimeStamp;
- (void)updateValueAndCursorWithDictionary:(id)a0;
- (void)sendTextAreaConfirmEvent;
- (BOOL)isInputtingZH;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)updateWithDictionary:(id)a0;
- (void)paste:(id)a0;
- (double)currentTime;
- (void)dealloc;
- (BOOL)textViewShouldBeginEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setupView;
- (BOOL)textPasteConfigurationSupporting:(id)a0 shouldAnimatePasteOfAttributedString:(id)a1 toRange:(id)a2;

@end
