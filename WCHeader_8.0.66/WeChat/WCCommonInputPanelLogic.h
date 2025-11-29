@class EmoticonBoardView, NSString, WCInputController, MMUIViewController, UIView, MMGrowTextView;
@protocol WCInputViewProtocol;

@interface WCCommonInputPanelLogic : NSObject <WCCommonInputViewDelegate>

@property (retain, nonatomic) UIView<WCInputViewProtocol> *inputView;
@property (retain, nonatomic) EmoticonBoardView *emoticonBoardView;
@property (retain, nonatomic) WCInputController *inputController;
@property (weak, nonatomic) MMUIViewController *viewController;
@property (weak, nonatomic) MMGrowTextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0 textView:(id)a1 inputView:(id)a2;
- (void)onInputViewExpressionButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
