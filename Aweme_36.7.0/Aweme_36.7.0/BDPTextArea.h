@class BDPTextAreaModel, NSString, UITextView, UIView, BDPUniqueID, BDPTCEmbed;

@interface BDPTextArea : UITextView <UITextViewDelegate, UITextPasteDelegate, BDPTCRenderDelegate> {
    double _height;
    double _textHeight;
    long long _keyboardProgress;
    BDPUniqueID *_uniqueID;
    UITextView *_placeHolderTextView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalPageFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalRootNavFrame;
}

@property BOOL interruptAdjustFrameWithKeyBoardShow;
@property (nonatomic) long long pageID;
@property (copy, nonatomic) NSString *componentID;
@property (retain, nonatomic) BDPTextAreaModel *model;
@property (weak, nonatomic) BDPTCEmbed *embed;
@property (weak, nonatomic) UIView *page;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rootNavigationController:(id)a0;

- (void)addKeyboardObserve;
- (void)dismissKeyBoard;
- (id)initWithModel:(id)a0 uniqueID:(id)a1;
- (void)updateCursorAndSelection:(id)a0;
- (void)setupViewWithModel:(id)a0;
- (void)bdp_tc_embed_render;
- (void)updatePlaceHolderTextViewStatus;
- (void)updateHeight:(id)a0;
- (void)updateCursor:(long long)a0 selectionStart:(long long)a1 selectionEnd:(long long)a2;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)updateWithDictionary:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)paste:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)textViewDidBeginEditing:(id)a0;
- (BOOL)textViewShouldBeginEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)keyboardWillChange:(id)a0;
- (void)setupViews;
- (BOOL)textPasteConfigurationSupporting:(id)a0 shouldAnimatePasteOfAttributedString:(id)a1 toRange:(id)a2;

@end
