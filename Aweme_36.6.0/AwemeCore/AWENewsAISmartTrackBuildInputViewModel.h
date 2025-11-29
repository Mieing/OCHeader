@class NSString;

@interface AWENewsAISmartTrackBuildInputViewModel : NSObject <AWENewsAISmartTrackBuildContainerLifeCycle>

@property (nonatomic) double keyBoardHeight;
@property (copy, nonatomic) NSString *currentInput;
@property (copy, nonatomic) id /* block */ updateInputBottomLayout;
@property (copy, nonatomic) id /* block */ textViewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateInput:(id)a0;
- (void)p_addKeyboardObserver;
- (void)p_removeKeyboardObserver;
- (void)p_keyboardWillShow:(id)a0;
- (void)p_keyboardWillHidden:(id)a0;
- (double)p_getKeyBoardHeightWithNotification:(id)a0;
- (void)p_updateKeyBoardHeight:(double)a0 needUpdateLayout:(BOOL)a1;
- (void)containerWillAppear;
- (void)containerWillDisappear;
- (void)containerDidAppear;
- (void)containerDidDisappear;
- (void).cxx_destruct;
- (id)init;

@end
