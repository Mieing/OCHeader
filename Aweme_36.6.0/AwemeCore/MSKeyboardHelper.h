@interface MSKeyboardHelper : NSObject

@property (nonatomic) double keyboardAppearTimestamp;
@property (nonatomic) double keyboardDisappearTimestamp;

+ (id)sharedInstance;

- (void)addObKey;
- (void)keyboardWillShow:(id)a0;
- (id)init;
- (void)keyboardWillHide:(id)a0;
- (void)dealloc;

@end
