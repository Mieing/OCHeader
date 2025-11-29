@class UITextView, NSString, IESLiveInteractFeedbackViewModel, IESLiveInteractFeedbackStyleConfig, UILabel;

@interface IESLiveInteractFeedbackDetailCell : UITableViewCell <UITextViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *textView;
@property (weak, nonatomic) IESLiveInteractFeedbackViewModel *viewModel;
@property (retain, nonatomic) IESLiveInteractFeedbackStyleConfig *styleConfig;
@property (nonatomic) long long scaleRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didClickKeyboardReturnKey;
- (void)updateWithTitle:(id)a0 viewModel:(id)a1 styleConfig:(id)a2;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;

@end
