@class AWENewsAISmartTrackBuildInputTextView, AWENewsAISmartTrackBuildInputToolBarView, NSString, UIView, AWENewsAISmartTrackBuildInputViewModel, DUXBaseLabel;

@interface AWENewsAISmartTrackBuildInputView : UIView <UITextViewDelegate>

@property (retain, nonatomic) AWENewsAISmartTrackBuildInputViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWENewsAISmartTrackBuildInputTextView *textView;
@property (retain, nonatomic) DUXBaseLabel *placeHolderLabel;
@property (retain, nonatomic) AWENewsAISmartTrackBuildInputToolBarView *toolBarView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_configUI;
- (void)p_makeConstraint;
- (void)p_bindAction;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)textViewDidChange:(id)a0;

@end
