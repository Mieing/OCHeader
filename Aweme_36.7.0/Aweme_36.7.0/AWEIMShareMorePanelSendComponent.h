@class NSString, UIView;
@protocol AWEIMShareAdditionTextViewProtocol;

@interface AWEIMShareMorePanelSendComponent : AWEIMComponentBase <IESIMContactPickerSelectAction, AWEIMShareAdditionTextViewUIDelegate, AWEIMShareAdditionTextViewDelegate>

@property (retain, nonatomic) UIView<AWEIMShareAdditionTextViewProtocol> *additionTextView;
@property (nonatomic) double additionTextViewBottomDistance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)hostVC_afterFirstRender;
- (void)textView:(id)a0 didClickButton:(unsigned long long)a1;
- (void)textView:(id)a0 bottomViewDidShow:(BOOL)a1 keyboardHeight:(double)a2 additionTextViewNormalHeight:(double)a3 animateSheetHeight:(BOOL)a4;
- (void)textView:(id)a0 didChangeMinHeight:(double)a1 keyboardHeight:(double)a2;
- (void)trackDidClickEmojiBtn;
- (void)contactPickerSelectService:(id)a0 didAddSelectIdentifiers:(id)a1;
- (void)contactPickerSelectService:(id)a0 didRemoveSelectIdentifier:(id)a1;
- (void)updateAdditionTextIfNeeded;
- (id)pickerComponent;
- (void)updateAdditionTextVisible:(BOOL)a0;
- (id)buttonConfigWithType:(unsigned long long)a0;
- (BOOL)p_enableBigEmoji;
- (void).cxx_destruct;
- (id)selectionContext;

@end
