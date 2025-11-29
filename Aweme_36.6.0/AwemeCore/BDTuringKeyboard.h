@protocol BDTuringKeyboardDelegate;

@interface BDTuringKeyboard : NSObject

@property (nonatomic) double keyboardTop;
@property (nonatomic) BOOL keyboardIsShow;
@property (weak, nonatomic) id<BDTuringKeyboardDelegate> delegate;

+ (id)sharedKeyboard;

- (void)onKeyboardWillShow:(id)a0;
- (void)onKeyboardWillHide:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
