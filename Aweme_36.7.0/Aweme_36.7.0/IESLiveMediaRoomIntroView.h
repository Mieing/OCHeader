@class IESLiveMediaRoomIntroInstructionView, UITextView, UIButton, NSString, UIView, IESLiveMediaRoomIntroViewModel, UILabel;

@interface IESLiveMediaRoomIntroView : UIView <UITextViewDelegate>

@property (retain, nonatomic) IESLiveMediaRoomIntroViewModel *viewModel;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESLiveMediaRoomIntroInstructionView *instructionView;
@property (retain, nonatomic) UIView *titleLabel;
@property (retain, nonatomic) UILabel *wordCountLabel;
@property (retain, nonatomic) UITextView *editTextView;
@property (retain, nonatomic) UIButton *saveButton;
@property (nonatomic) long long wordCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)presentWithViewModel:(id)a0 hostVC:(id)a1;

- (void)handleKeyboardHide:(id)a0;
- (void)saveButtonClick:(id)a0;
- (void)showInstructionView;
- (void)hideInstructionView;
- (id)presentWithHostVC:(id)a0;
- (void)handleKeyboardShow:(id)a0;
- (BOOL)roomIntroTextChanged;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)addObserver;
- (void)dealloc;
- (void)textViewDidChange:(id)a0;
- (void)setupUI;
- (void)updateSaveButton;

@end
