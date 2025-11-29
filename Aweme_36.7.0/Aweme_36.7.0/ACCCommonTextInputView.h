@class UITextView, NSString, ACCTextTemplateStickerInputView, AWEStudioCaptionModel;

@interface ACCCommonTextInputView : UIView <UITextViewDelegate>

@property (retain, nonatomic) ACCTextTemplateStickerInputView *inputView;
@property (retain, nonatomic) AWEStudioCaptionModel *caption;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectRange;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) NSString *changedText;
@property (nonatomic) BOOL clicked;
@property (readonly, nonatomic) UITextView *textView;
@property (nonatomic) unsigned long long editingIndex;
@property (retain, nonatomic) AWEStudioCaptionModel *originalCaption;
@property (copy, nonatomic) id /* block */ textEditChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didClickCancel;
- (void)didClickConfirm;
- (void)handleKeyboardHideNoti;
- (id)initWithCaption:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setupUI;

@end
