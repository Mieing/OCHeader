@class ACCSocialStickerModel, UITextField, NSTimer, ACCMiddlemanProxy, NSString;
@protocol ACCSocialStickerBindingDelegate;

@interface ACCSocialStickerBindingController : NSObject <UITextFieldDelegate>

@property (retain, nonatomic) ACCMiddlemanProxy *middlemanProxy;
@property (weak, nonatomic) id<ACCSocialStickerBindingDelegate> delegate;
@property (retain, nonatomic) UITextField *inputTextView;
@property (retain, nonatomic) ACCSocialStickerModel *stickerModel;
@property (retain, nonatomic) NSTimer *keywordCallbackIntervalTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)complianceStringWithString:(id)a0;

- (void)removeBinding;
- (void)reloadTextInput;
- (void)callbackTextInputTextChangedWithReloadKeywordFlag:(BOOL)a0;
- (BOOL)hasMarkedTextRange;
- (id)complianceStringWithString:(id)a0;
- (void)callbackMentionBindingDataChanged;
- (void)handlerKeywordChangedCallback;
- (id)initWithTextInput:(id)a0 stickerModel:(id)a1 delegate:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })getRecalculateBindingRangeWithCurrentBindingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 editRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)bindingWithMentionModel:(id)a0;
- (BOOL)bindingWithHashTagModel:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeFromTextRange:(id)a0;
- (void)stopTimer;
- (void)textInputDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)dealloc;
- (void)setup;

@end
