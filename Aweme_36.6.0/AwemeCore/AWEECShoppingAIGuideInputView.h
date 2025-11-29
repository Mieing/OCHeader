@class UIView, NSMutableDictionary, NSDictionary, AWEECShoppingAIGuideContext, AWEGrowingTextView, UIButton;

@interface AWEECShoppingAIGuideInputView : UIView

@property (retain, nonatomic) NSMutableDictionary *selectedOptions;
@property (retain, nonatomic) AWEECShoppingAIGuideContext *context;
@property (retain, nonatomic) UIButton *sendButton;
@property (retain, nonatomic) UIButton *cleanButton;
@property (retain, nonatomic) AWEGrowingTextView *textView;
@property (retain, nonatomic) UIView *roundContainer;
@property (copy, nonatomic) NSDictionary *queryExtra;
@property (retain, nonatomic) UIButton *createButton;

- (void)updateBottomBar;
- (BOOL)hideCreateButton;
- (void)updateInputKey:(id)a0 value:(id)a1;
- (void)clearSelectedOptions;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setupUI;

@end
