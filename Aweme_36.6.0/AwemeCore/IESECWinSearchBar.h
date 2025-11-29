@class UIView, NSString, UIStackView, UIImageView, UIButton, CAShapeLayer, UITextField, YYLabel, UIBezierPath, UIColor;
@protocol IESECWinSearchBarDelegate;

@interface IESECWinSearchBar : UIView <UITextFieldDelegate> {
    UIImageView *_searchIcon;
    UIStackView *_buttonContainer;
    UIBezierPath *_cachedContinuousCornerRadiusPath;
    CAShapeLayer *_strokeLayer;
    BOOL _isClearing;
}

@property (retain, nonatomic) UITextField *searchTextField;
@property (retain, nonatomic) YYLabel *placeholderLabel;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) UIButton *cameraSearchButton;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) UIColor *placeholderColor;
@property (nonatomic) long long placeholderLineBreakMode;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (weak, nonatomic) id<IESECWinSearchBarDelegate> delegate;
@property (nonatomic) BOOL showsSearchButton;
@property (nonatomic) BOOL showsCameraSearchButton;
@property (nonatomic) BOOL showsSearchSeparator;
@property (retain, nonatomic) UIColor *searchIconTintColor;
@property (retain, nonatomic) UIColor *cameraIconTintColor;
@property (retain, nonatomic) UIColor *searchSeparatorColor;
@property (retain, nonatomic) UIColor *searchButtonTintColor;
@property (nonatomic) double continuousCornerRadius;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double strokeWidth;
@property (readonly, nonatomic) long long cursorPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateButtonContainer;
- (void)clearButtonDidClick:(id)a0;
- (void)updateClearState;
- (void)searchButtonDidClick:(id)a0;
- (void)cameraButtonDidClick:(id)a0;
- (void)updateAttributedPlaceholder;
- (void).cxx_destruct;
- (BOOL)isFirstResponder;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (BOOL)resignFirstResponder;
- (void)setBackgroundColor:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)backgroundColor;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)layoutSubviews;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)textFieldTextDidChange:(id)a0;
- (void)updateButtons;
- (void)configureSubviews;

@end
