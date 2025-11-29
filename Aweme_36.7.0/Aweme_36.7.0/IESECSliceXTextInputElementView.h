@class NSString, IESECSliceXTextField;

@interface IESECSliceXTextInputElementView : IESECSliceXBaseContentElementView <UITextFieldDelegate>

@property (retain, nonatomic) IESECSliceXTextField *contentTextField;
@property (nonatomic) unsigned long long inputType;
@property (nonatomic) unsigned long long textLength;
@property (nonatomic) long long maxLength;
@property (nonatomic) BOOL needOpenKeyBoard;
@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSString *inputResult;
@property (nonatomic) BOOL isPasting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldEndEditingWithHitTestedView:(id)a0;
+ (void)initialize;

- (BOOL)setupElementView;
- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)a0 width:(double)a1 widthMode:(unsigned long long)a2 height:(double)a3 heightMode:(unsigned long long)a4;
- (void)removeDoneButtonToolBar;
- (void)addDoneButtonToolBar;
- (void)setupSuffixIcon;
- (void)toolBarDoneBtnAction;
- (void)suffixIconTapped;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)layoutSubviews;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)textFieldDidChange:(id)a0;

@end
