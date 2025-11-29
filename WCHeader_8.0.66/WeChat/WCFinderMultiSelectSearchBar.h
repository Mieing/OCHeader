@class UIView, NSString, WCFinderPopUpSelectMenuViewController, UIImageView, NSMutableArray, UITextField, UILabel, MMUIButton;
@protocol WCFinderMultiSelectSearchBarDelegate;

@interface WCFinderMultiSelectSearchBar : MMUIView <UITextFieldDelegate>

@property (retain, nonatomic) UIView *tagContainerView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UIImageView *searchImageView;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) MMUIButton *clearBtn;
@property (weak, nonatomic) WCFinderPopUpSelectMenuViewController *popUpMenu;
@property (retain, nonatomic) NSMutableArray *poiCategoryItemArray;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL isEditing;
@property (weak, nonatomic) id<WCFinderMultiSelectSearchBarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setUpView;
- (void)layoutAllSubviews;
- (void)updateClearBtnHiddenState;
- (void)endTyping:(id)a0;
- (void)textFieldDidChange:(id)a0;
- (void)onClickClearAction;
- (void)textFiledChanged;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)showPOICategoryFilter;
- (void)updateArrowWhenShowFilter:(BOOL)a0;
- (id)generateMenuItems;
- (void).cxx_destruct;

@end
