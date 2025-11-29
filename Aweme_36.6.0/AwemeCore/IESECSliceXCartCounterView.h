@class UIFont, NSString, UIView, UIColor, NSDictionary, UITextField, UILabel, IESECUIImageView;

@interface IESECSliceXCartCounterView : IESECSliceXBaseContentElementView <UITextFieldDelegate>

@property (copy, nonatomic) NSDictionary *attrs;
@property (retain, nonatomic) UIView *coverView;
@property (retain, nonatomic) IESECUIImageView *decreaseImageView;
@property (retain, nonatomic) IESECUIImageView *increaseImageView;
@property (retain, nonatomic) UITextField *inputTextField;
@property (retain, nonatomic) NSString *minToast;
@property (retain, nonatomic) NSString *maxToast;
@property (retain, nonatomic) UILabel *inactiveLabel;
@property (retain, nonatomic) UIView *inactiveView;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) NSString *decreaseImageStr;
@property (retain, nonatomic) NSString *increaseImageStr;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) long long currentNumber;
@property (retain, nonatomic) UIFont *inputFont;
@property (retain, nonatomic) UIColor *inputColor;
@property (nonatomic) long long minValue;
@property (nonatomic) long long maxValue;
@property (copy, nonatomic) NSString *valueUnit;
@property (retain, nonatomic) UIFont *buttonTitleFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickBtn:(id)a0;
- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)a0 width:(double)a1 widthMode:(unsigned long long)a2 height:(double)a3 heightMode:(unsigned long long)a4;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)configBtnColor;
- (void)valueIncrease;
- (void)valueDecrease;
- (void)doneBtnAction;
- (void)modifyInactiveBtnContent;
- (void)activateWithActiveMode:(BOOL)a0;
- (void)configKeyboardObserver;
- (void)addDoneButtonKeyboard;
- (void)triggerActiveChangeEvent:(BOOL)a0;
- (void)verifyInput:(long long)a0;
- (void)triggerTrackerEventWithName:(id)a0 extraParams:(id)a1;
- (void)onReceiveNotification;
- (double)covertFrame:(double)a0;
- (void)triggerYOffsetEvent:(double)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)triggerEvent;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)dealloc;
- (void)setupUI;

@end
