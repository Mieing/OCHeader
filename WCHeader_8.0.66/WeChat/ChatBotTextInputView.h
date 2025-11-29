@class MMUITextField, NSString, MMUIButton;
@protocol ChatBotTextInputViewDelegate;

@interface ChatBotTextInputView : UIView <UITextFieldDelegate>

@property (retain, nonatomic) MMUITextField *textField;
@property (retain, nonatomic) MMUIButton *emoticonBtn;
@property (retain, nonatomic) MMUIButton *voiceBtn;
@property (nonatomic) int openScene;
@property (weak, nonatomic) id<ChatBotTextInputViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 openScene:(int)a1;
- (void)layoutSubviews;
- (void)layoutVoiceBtn;
- (void)onVoiceBtnClick:(id)a0;
- (void)layoutInputView;
- (void)layoutEmoticonBtn;
- (void)active;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void).cxx_destruct;

@end
