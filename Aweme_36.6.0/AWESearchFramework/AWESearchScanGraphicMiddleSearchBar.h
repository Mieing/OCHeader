@class AWESearchScanGraphicMiddleTextField, DUXPopover, UIImageView, NSString, UIButton;

@interface AWESearchScanGraphicMiddleSearchBar : UIView <UITextFieldDelegate>

@property (nonatomic) BOOL thumbnailWillDelete;
@property (retain, nonatomic) UIButton *xMark;
@property (retain, nonatomic) UIButton *clearButton;
@property (nonatomic) BOOL textFieldHasClearText;
@property (retain, nonatomic) AWESearchScanGraphicMiddleTextField *textField;
@property (retain, nonatomic) UIImageView *thumbnail;
@property (copy, nonatomic) id /* block */ clearGraphicBlock;
@property (copy, nonatomic) id /* block */ clickXMarkBlock;
@property (copy, nonatomic) id /* block */ clickClearButtonBlock;
@property (copy, nonatomic) id /* block */ clickKeyboardSearchBlock;
@property (copy, nonatomic) id /* block */ textFieldBecomeEmpty;
@property (copy, nonatomic) id /* block */ textFieldBecomeNotEmpty;
@property (nonatomic) BOOL supportDrakTheme;
@property (retain, nonatomic) DUXPopover *popover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickClearButton;
- (void)setupSubViews;
- (void)clickXMark:(id)a0;
- (id)getTextFieldDefaultPlaceholder;
- (void)setupThumbnailImple;
- (void)setupTextFieldImple;
- (void)setupClearButtonImple;
- (void)popoverShow;
- (void)popoverShowImple;
- (void)setupTextFieldBlock;
- (BOOL)checkIsEmptySearch;
- (void)updateSuggestPlaceholder:(id)a0;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)init;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)colorNamed:(id)a0;

@end
