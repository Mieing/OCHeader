@class UIStackView, UIButton, AWEIMSearchView, UIView, NSAttributedString, IESIMContactPickerRoundView;
@protocol IESIMContactPickerSearchComponentViewDelegate;

@interface IESIMContactPickerSearchComponentView : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) IESIMContactPickerRoundView *roundView;
@property (retain, nonatomic) NSAttributedString *placeholder;
@property (weak, nonatomic) id<IESIMContactPickerSearchComponentViewDelegate> delegate;
@property (retain, nonatomic) UIView *separateLineView;
@property (nonatomic) unsigned long long searchbarType;
@property (retain, nonatomic) AWEIMSearchView *searchView;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIButton *cancelButton;
@property (copy, nonatomic) id /* block */ cancelButtonAction;

- (id)initWithType:(unsigned long long)a0 placeholder:(id)a1 delegate:(id)a2;
- (void)hideCancelButton:(BOOL)a0;
- (BOOL)p_canShowBorder;
- (void)p_setupUIStyleTopRoundFlatCancelButton;
- (void)p_initStackView;
- (void)p_initSearchBarView;
- (void)p_initCancelButton;
- (void)p_initTopBottomLines;
- (BOOL)p_canShowCancelButton;
- (void)p_setCancelButtonHidden:(BOOL)a0;
- (void)p_onCancelButtonAction;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
