@interface KeyboardDismissProxy : NSObject

@property (copy, nonatomic) id /* block */ block;

- (id)initWithExcuteBlock:(id /* block */)a0;
- (void)checkAndHideKeyboard;
- (void).cxx_destruct;

@end
