@class NSTimer, NSString, UIButton;

@interface IESECSearchBar : UISearchBar <UITextFieldDelegate, UISearchBarDelegate>

@property (nonatomic) double height;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL needShowKeyBoard;
@property (nonatomic) BOOL hasCancelButton;
@property (retain, nonatomic) NSString *placeholderColor;
@property (readonly, nonatomic) long long cursorPosition;
@property (nonatomic) BOOL enableTextChangedChecker;
@property (retain, nonatomic) UIButton *rightCustomButton;
@property (nonatomic) struct CGSize { double width; double height; } rightCustomButtonSize;
@property (copy, nonatomic) id /* block */ clearButtonTappedBlock;
@property (copy, nonatomic) id /* block */ beginEditBlock;
@property (copy, nonatomic) id /* block */ endEditBlock;
@property (copy, nonatomic) id /* block */ textChangedBlock;
@property (copy, nonatomic) id /* block */ rightCustomButtonTappedBlock;
@property (copy, nonatomic) id /* block */ searchButtonClickedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureUI;
- (void)invalidateTextChangedTimer;
- (void)checkTextChanged;
- (void)fireTextChangedTimer;
- (void)updateRightButtonVisibility:(id)a0;
- (void)rightCustomButtonDidClick:(id)a0;
- (void)updateRightButtonConstraints;
- (void).cxx_destruct;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)setPlaceholder:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)setDelegate:(id)a0;
- (BOOL)searchBar:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;

@end
