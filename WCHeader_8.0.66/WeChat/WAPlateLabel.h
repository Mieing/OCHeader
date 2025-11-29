@class UIView;
@protocol WAPlateLabelDelegate;

@interface WAPlateLabel : MMUILabel

@property (retain, nonatomic) UIView *inputView;
@property (nonatomic) unsigned long long inputViewType;
@property (weak, nonatomic) id<WAPlateLabelDelegate> delegate;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (BOOL)exitSpecialCharText;
- (void)done;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateViewForDarkmode;
- (void)setInputViewWidth:(double)a0;
- (id)createInputViewWithType:(unsigned long long)a0 inputViewWidth:(double)a1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)provinceArr;
- (id)letterArr;
- (id)specialArr;
- (id)numberLetterArr;
- (id)defaultArr;
- (id)configButtonColor:(id)a0;
- (id)genereateKeyboardViewDefault:(id)a0 inputViewWidth:(double)a1;
- (id)genereateKeyboardViewProvince:(id)a0 inputViewWidth:(double)a1;
- (void)charButtonClicked:(id)a0;
- (void)deleteButtonAction:(id)a0;
- (void).cxx_destruct;

@end
