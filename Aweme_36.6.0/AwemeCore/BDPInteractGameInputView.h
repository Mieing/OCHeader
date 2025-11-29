@class NSString, UIButton, UIView;
@protocol BDPInteractGameInputViewDelegate;

@interface BDPInteractGameInputView : UIView <UITextViewDelegate, UITextFieldDelegate> {
    BOOL _multiple;
    BOOL _confirmHold;
    BOOL _adjustPosition;
    int _length;
    UIView *_inputText;
    NSString *_defaultValue;
    NSString *_confirmType;
    double _keyboradHeight;
    UIButton *_confirmBtn;
}

@property (weak, nonatomic) id<BDPInteractGameInputViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isShow;
- (BOOL)canUpdateWithNewParams:(id)a0;
- (void)updateCentent:(id)a0;
- (void)updateWithNewParamsIfPossible:(id)a0;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)hide;
- (id)initWithParams:(id)a0;
- (void)dealloc;
- (void)show;
- (void)textViewDidChange:(id)a0;
- (void)confirmAction;
- (void)textFieldTextDidChange:(id)a0;

@end
