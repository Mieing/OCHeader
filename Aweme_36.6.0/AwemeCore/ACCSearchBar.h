@class NSString, UITextField;

@interface ACCSearchBar : UISearchBar <UITextFieldDelegate>

@property (nonatomic) long long colorStyle;
@property (weak, nonatomic) UITextField *ownSearchField;
@property (nonatomic) BOOL needShowKeyBoard;
@property (nonatomic) BOOL banAutoSearchTextPositionAdjustment;
@property (copy, nonatomic) id /* block */ clearButtonTappedBlock;
@property (copy, nonatomic) id /* block */ beginEditBlock;
@property (copy, nonatomic) id /* block */ endEditBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 colorStyle:(long long)a1;
- (void).cxx_destruct;
- (void)setPlaceholder:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)layoutSubviews;

@end
