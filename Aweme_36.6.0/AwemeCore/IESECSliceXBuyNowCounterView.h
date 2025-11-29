@class UIFont, NSString, UIImageView, UITextField, UIView, UIColor, UIImage;

@interface IESECSliceXBuyNowCounterView : IESECSliceXBaseContentElementView <UITextFieldDelegate>

@property (retain, nonatomic) UIView *coverView;
@property (retain, nonatomic) UIImageView *decreaseImageView;
@property (retain, nonatomic) UIImageView *increaseImageView;
@property (retain, nonatomic) UITextField *inputTextField;
@property (retain, nonatomic) NSString *minToast;
@property (retain, nonatomic) NSString *maxToast;
@property (nonatomic) BOOL keyboardShown;
@property (retain, nonatomic) NSString *decreaseImageStr;
@property (retain, nonatomic) NSString *increaseImageStr;
@property (retain, nonatomic) NSString *changeQuantityEvent;
@property (copy, nonatomic) id /* block */ valueChanged;
@property (nonatomic) BOOL shakeAnimation;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) long long currentNumber;
@property (retain, nonatomic) UIFont *inputFont;
@property (retain, nonatomic) UIColor *inputColor;
@property (nonatomic) long long minValue;
@property (nonatomic) long long maxValue;
@property (copy, nonatomic) NSString *valueUnit;
@property (retain, nonatomic) UIFont *buttonTitleFont;
@property (retain, nonatomic) UIImage *increaseImage;
@property (retain, nonatomic) UIImage *decreaseImage;
@property (copy, nonatomic) NSString *increaseTitle;
@property (copy, nonatomic) NSString *decreaseTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)a0 width:(double)a1 widthMode:(unsigned long long)a2 height:(double)a3 heightMode:(unsigned long long)a4;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (id)initWithPreloadContext:(id)a0;
- (void)configBtnColor;
- (void)valueIncrease;
- (void)valueDecrease;
- (void)verifyInput;
- (void)doneBtnAction;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)triggerEvent;
- (void)textFieldDidEndEditing:(id)a0;
- (void)dealloc;
- (void)setupUI;

@end
