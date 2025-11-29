@class AWEIMCommonSearchBar, NSString, MASConstraint, UIButton;
@protocol AWEIMCommonSearchViewDelegate;

@interface AWEIMCommonSearchView : UIView <AWEIMCommonSearchBarDelegate, UITextFieldDelegate>

@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) MASConstraint *searchViewRightMarginConstraint;
@property (retain, nonatomic) MASConstraint *cancelBtnLeftConstraint;
@property (retain, nonatomic) AWEIMCommonSearchBar *searchBar;
@property (weak, nonatomic) id<AWEIMCommonSearchViewDelegate> delegate;
@property (nonatomic) BOOL showCancelButtonWhenEditing;
@property (nonatomic) BOOL awaysShowCancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSubviews;
- (void)p_updateLayout;
- (void)clearBtnDidClicked:(id)a0;
- (void)setShowClearButtonWhenSearchTextIsNotEmpty:(BOOL)a0;
- (void)p_cancelBtnClicked;
- (BOOL)p_textFieldIsIsEditiing;
- (void)p_updateLayoutWithAnimation;
- (void)activeSearching;
- (void)deactiveSearching;
- (BOOL)p_textFieldisFitstResponder;
- (void)initSubviews;
- (void).cxx_destruct;
- (void)setPlaceholder:(id)a0;
- (void)setText:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)setup;
- (id)currentText;
- (void)textFieldDidChange:(id)a0;
- (id)searchBarView;
- (void)setupLayout;

@end
