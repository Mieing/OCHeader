@class UIColor, NSString, UITextField, UIFont, NSTimer;

@interface AWESearchBar : UISearchBar <IESIMHalfScreenSearchViewInternalSearchBar, UITextFieldDelegate>

@property (weak, nonatomic) UITextField *ownSearchField;
@property (nonatomic) BOOL needShowKeyBoard;
@property (nonatomic) BOOL hasCancelButton;
@property (retain, nonatomic) UIColor *placeholderColor;
@property (nonatomic) BOOL enableTextChangedChecker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long colorStyle;
@property (nonatomic) double height;
@property (retain, nonatomic) UIFont *ownSearchFieldFont;
@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) UITextField *ownSearchField;
@property (nonatomic) BOOL needShowKeyBoard;
@property (nonatomic) BOOL hasCancelButton;
@property (retain, nonatomic) UIColor *placeholderColor;
@property (nonatomic) BOOL enableTextChangedChecker;
@property (copy, nonatomic) id /* block */ clearButtonTappedBlock;
@property (copy, nonatomic) id /* block */ beginEditBlock;
@property (copy, nonatomic) id /* block */ endEditBlock;
@property (copy, nonatomic) id /* block */ textChangedBlock;
@property (nonatomic) BOOL forbidBarTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 colorStyle:(long long)a1 requiredHeight:(double)a2 font:(id)a3;
- (void)invalidateTextChangedTimer;
- (void)checkTextChanged;
- (void)fireTextChangedTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 colorStyle:(long long)a1;
- (void).cxx_destruct;
- (void)setPlaceholder:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)didMoveToWindow;

@end
