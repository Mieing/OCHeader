@class UITextView, NSString, UILabel, UIButton;

@interface AWESearchGeneralCotSearchBarView : UIView <UITextViewDelegate>

@property (retain, nonatomic) UITextView *inputTextView;
@property (retain, nonatomic) UILabel *bgLabel;
@property (retain, nonatomic) UIButton *inputBtn;
@property (nonatomic) BOOL haveBeenInput;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) id /* block */ sendQueryBlock;
@property (copy, nonatomic) id /* block */ updateInputViewHeightBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendQuery;
- (void)turnUpInput;
- (void)dismissInput;
- (id)inputTipsString;
- (void).cxx_destruct;
- (id)init;
- (BOOL)textViewShouldBeginEditing:(id)a0;
- (BOOL)textViewShouldEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setupUI;

@end
