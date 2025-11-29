@class NSString, BDPInputViewXModel, UIView, BDPUniqueID;

@interface BDPInputViewX : UITextField <UITextFieldDelegate, BDPTCRenderDelegate, BDPKeyboardResponderDelegate> {
    BOOL _canRetryBecomeFirstResponder;
    BOOL _needBecomeFirstResponderWhenRerender;
    long long _keyboardProgress;
    BDPUniqueID *_uniqueID;
    BDPInputViewXModel *_model;
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
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)updateWithDictionary:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (double)currentTime;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)dealloc;
- (void)setupView;
- (void)textFieldDidChange:(id)a0;

@end
