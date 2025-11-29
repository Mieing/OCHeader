@interface AWEKeyboardWatchdog : NSObject

@property (class, readonly, nonatomic) AWEKeyboardWatchdog *sharedInstance;

@property (retain, nonatomic) AWEKeyboardWatchdog *keyboardInfo;
@property (nonatomic) BOOL isKeyboardDisplaying;

- (void)handleKeyboardDidShowNotification:(id)a0;
- (void)handleKeyboardDidHideNotification:(id)a0;
- (void)handleKeyboardWillShowNotification:(id)a0;
- (void)handleKeyboardWillHideNotification:(id)a0;
- (void)handleKeyboardDidChangeFrameNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
